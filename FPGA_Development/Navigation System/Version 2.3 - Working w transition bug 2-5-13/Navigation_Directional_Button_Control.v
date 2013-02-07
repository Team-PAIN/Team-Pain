`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:19:41 10/23/2012 
// Design Name: 
// Module Name:    direction_control 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module direction_control(
		input CLK,
		input [7:0] SW,
		input [4:0] BTN,
		input [7:0] DISTANCE_FRONT,
		input [7:0] DISTANCE_BACK,
		input [7:0] DISTANCE_SIDE_BACK,
		input [7:0] DISTANCE_SIDE_FRONT,
		input [7:0] ANGLE,
		input [1:0] ANGLE_DIRECTION,
		input [7:0] COMMAND,
		input [7:0] PATH,
		input [7:0] COMPARE_DISTANCE,
		output reg [4:0] MC1, //Bits 1:0 control Direction, Bits 4:2 Control Power
		output reg [4:0] MC2,	 //Bits 1:0 control Direction, Bits 4:2 Control Power
		output [3:0] LED,
		output reg [1:0] RUN_FLAG
    );
	 
	wire [7:0] ALIGN_COMP;
	
	reg [4:0] DIR_STATE, PWM_STATE;
	reg [7:0] DISTANCE_CHECK, STATE;
	reg FLAG, STABLE,START;

	parameter [4:0] NEUTRAL = 		5'b 00000;
	parameter [4:0] FORWARD = 		5'b 00001;
	parameter [4:0] REVERSE = 		5'b 00010;
	parameter [4:0] FORWARD_RIGHT = 5'b 00011;
	parameter [4:0] BACK_RIGHT = 	5'b 00111;
	parameter [4:0] FORWARD_LEFT = 	5'b 11000;
	parameter [4:0] BACK_LEFT = 		5'b 10000;
	parameter [4:0] R_360 = 			5'b 10011;
	parameter [4:0] L_360 = 			5'b 11001;
	 
	parameter [4:0] BOTH_88 = 		5'b 11111;
	parameter [4:0] BOTH_75 = 		5'b 11011;
	parameter [4:0] BOTH_62 = 		5'b 10111;
	parameter [4:0] BOTH_50 = 		5'b 10011;
	parameter [4:0] BOTH_38 = 		5'b 01111;
	parameter [4:0] BOTH_25 = 		5'b 01011;
	parameter [4:0] BOTH_17 = 		5'b 00111;
	parameter [4:0] BOTH_13 = 		5'b 00011;
	
	parameter [4:0] TURN_RIGHT = 5'b 01111;
	parameter [4:0] TURN_LEFT = 5'b 01110;
	parameter [4:0] STRAIGHT = 5'b 01100;
	
	parameter [1:0] RUN_INI = 2'b 00; //Initialization State
	parameter [1:0] RUN_EXC = 2'b 01; //Execution State
	parameter [1:0] RUN_COM = 2'b 10; //Completion State
	parameter [1:0] RUN_ERR = 2'b 11; //Error State
	
	initial begin
		START = 1;
		STATE = 0;
		FLAG = 1;
		STABLE = 0;
		RUN_FLAG = 2'b 00;
	end
	
	assign LED = RUN_FLAG;
	assign ALIGN_COMP = (DISTANCE_SIDE_FRONT > DISTANCE_SIDE_BACK) ? DISTANCE_SIDE_FRONT-DISTANCE_SIDE_BACK : DISTANCE_SIDE_BACK-DISTANCE_SIDE_FRONT;
	
	always @(posedge CLK) begin
		//Direction Control
		case(DIR_STATE) //MC1 is on right side, MC2 is on left side 
			NEUTRAL:begin //Neutral
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 01; //Neutral
						end
			FORWARD:begin //FORWARD
							MC1[1:0] <= 2'b 00; //Forward
							MC2[1:0] <= 2'b 00; //Forward
						end
			REVERSE:begin //REVERSE
							MC1[1:0] <= 2'b 10; //Reverse
							MC2[1:0] <= 2'b 10; //Reverse
						end
			FORWARD_RIGHT:begin //FORWARD RIGHT
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 00; //Forward
						end
			BACK_RIGHT:begin //BACKWARDS RIGHT
							MC1[1:0] <= 2'b 10; //Reverse
							MC2[1:0] <= 2'b 01; //Neutral
						end
			FORWARD_LEFT:begin //FORWARD LEFT
							MC1[1:0] <= 2'b 00; //Forward
							MC2[1:0] <= 2'b 01; //Neutral
						end
			BACK_LEFT:begin //BACKWARDS LEFT
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 10; //Reverse
						end
			R_360:begin //Right 360
						MC1[1:0] <= 2'b 10; //Reverse
						MC2[1:0] <= 2'b 00; //Forward
			end
			L_360:begin //Left 360
						MC1[1:0] <= 2'b 00; //Forward
						MC2[1:0] <= 2'b 10; //Reverse
			end
			default:begin //Default Neutral
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 01; //Neutral
						end
		endcase
		
//		//Power Control
//		if(PWM_STATE[1:0] == 2'b 11) begin //Both MC Receive Same Power
//			MC1[4:2] <= PWM_STATE[4:2];
//			MC2[4:2] <= PWM_STATE[4:2];
//		end else begin //Default Power for both MC 12.5%
//			MC1[4:2] <= 3'b 000;
//			MC2[4:2] <= 3'b 000;
//		end
		
		if (SW[7]) begin //Manual Mode
			case(BTN)
				1:DIR_STATE <= FORWARD_RIGHT;
				2:DIR_STATE <= REVERSE;
				4:DIR_STATE <= FORWARD;
				8:DIR_STATE <= FORWARD_LEFT;
				16:DIR_STATE <= R_360;
				default:DIR_STATE <= NEUTRAL;
			endcase
			
		end else begin 
				
			case(COMMAND)                              
				STRAIGHT:begin
								if(RUN_FLAG == RUN_ERR)begin
									DIR_STATE <= NEUTRAL;
								end else if(RUN_FLAG == RUN_INI)begin
									RUN_FLAG <= RUN_EXC;
									DISTANCE_CHECK <= COMPARE_DISTANCE - DISTANCE_SIDE_FRONT; //140 Compare distance
								end else if(RUN_FLAG == RUN_EXC)begin
									if(DISTANCE_FRONT <= COMPARE_DISTANCE)begin
										DIR_STATE <= NEUTRAL;
										RUN_FLAG <= RUN_COM;
									end else begin
										DIR_STATE <= FORWARD;
										if(PWM_STATE[1:0] == 2'b 11) begin //Both MC Receive Same Power
											if(DISTANCE_SIDE_FRONT == DISTANCE_SIDE_BACK)begin
												MC1[4:2] <= PWM_STATE[4:2];
												MC2[4:2] <= PWM_STATE[4:2];
											end else if(DISTANCE_SIDE_FRONT < DISTANCE_SIDE_BACK)begin
												MC1[4:2] <= PWM_STATE[4:2];
												MC2[4:2] <= PWM_STATE[4:2] + 3'b 001;
											end else begin
												MC2[4:2] <= PWM_STATE[4:2];
												MC1[4:2] <= PWM_STATE[4:2] + 3'b 001;
											end
										end else begin //Default Power for both MC 12.5%
											MC1[4:2] <= 3'b 000;
											MC2[4:2] <= 3'b 000;
										end
									end								
								end else if(RUN_FLAG == RUN_COM)begin
									RUN_FLAG <= RUN_INI;
								end
							end
				TURN_RIGHT:	begin
									if(RUN_FLAG == RUN_ERR)begin
										DIR_STATE <= NEUTRAL;
									end else if(RUN_FLAG == RUN_INI)begin
										RUN_FLAG <= RUN_EXC;
										DISTANCE_CHECK <= COMPARE_DISTANCE - DISTANCE_SIDE_FRONT; //140 Compare distance
									end else if(RUN_FLAG == RUN_EXC)begin
										MC1[4:2] <= PWM_STATE[4:2];
										MC2[4:2] <= PWM_STATE[4:2];
										if((DISTANCE_CHECK - DISTANCE_FRONT) > 10)begin
											DIR_STATE <= R_360; //FORWARD_RIGHT
										end else if(((DISTANCE_CHECK-DISTANCE_FRONT) <= 10)|(ANGLE == 0))begin
											DIR_STATE <= NEUTRAL;
											RUN_FLAG <= RUN_COM;
										end else begin
											DIR_STATE <= NEUTRAL;
										end										
									end else if(RUN_FLAG == RUN_COM)begin
										RUN_FLAG <= RUN_INI;
									end
								end
				TURN_LEFT:	begin
									if(RUN_FLAG == RUN_ERR)begin
										DIR_STATE <= NEUTRAL;
									end else if(RUN_FLAG == RUN_INI)begin
										RUN_FLAG <= RUN_EXC;
										DISTANCE_CHECK <= DISTANCE_SIDE_FRONT;
									end else if(RUN_FLAG == RUN_EXC)begin
										MC1[4:2] <= PWM_STATE[4:2];
										MC2[4:2] <= PWM_STATE[4:2];
									
										if(((DISTANCE_CHECK-DISTANCE_FRONT) <= 10)|(ANGLE == 0))begin
											DIR_STATE <= NEUTRAL;
											RUN_FLAG <= RUN_COM;
										end else begin
											DIR_STATE <= FORWARD_LEFT;
										end 										
									end else if(RUN_FLAG == RUN_COM)begin
										RUN_FLAG <= RUN_INI;
										DIR_STATE <= NEUTRAL;
									end
								end
				
			endcase
				
		end	
		
		if(SW == 1) //Power setting 
			PWM_STATE <= BOTH_17;
		else if(SW == 2)
			PWM_STATE <= BOTH_25;
		else if(SW == 3)
			PWM_STATE <= BOTH_38;
		else if(SW == 4)
			PWM_STATE <= BOTH_50;
		else if(SW == 5)
			PWM_STATE <= BOTH_62;
		else
			PWM_STATE <= BOTH_13;	
				
		
				
	end

endmodule


				///////******** Alternative Straight command with realignment code
//									if(DISTANCE_FRONT <= 7)begin //12
//										COMMAND_FLAG <= 1;
//										START <= 1;
//										DIR_STATE <= NEUTRAL;
//									end else if(FLAG)begin
//										if((DISTANCE_SIDE_FRONT == PATH)&(DISTANCE_SIDE_BACK == PATH))begin
//											STATE <= 1;
//										end else if((DISTANCE_SIDE_FRONT < PATH)&(DISTANCE_SIDE_BACK >= PATH))begin
//											STATE <= 2;
//										end else if((DISTANCE_SIDE_FRONT > PATH)&(DISTANCE_SIDE_BACK == PATH))begin
//											STATE <= 3;
//										end else if(DISTANCE_SIDE_FRONT == PATH)begin
//											STATE <= 4;
//										end else if((DISTANCE_SIDE_FRONT > PATH)&(DISTANCE_SIDE_BACK > PATH))begin
//											STATE <= 5;
//										end else if((DISTANCE_SIDE_FRONT < PATH)&(DISTANCE_SIDE_BACK < PATH))begin
//											STATE <= 6;
//										end else if((DISTANCE_SIDE_FRONT > PATH)&(DISTANCE_SIDE_BACK < PATH))begin
//											STATE <= 4;
//										end else
//											STATE <= 3;
//									end
//									
//									case(STATE)
//										0:	begin
////												if((DISTANCE_SIDE_FRONT <= 32)&(DISTANCE_SIDE_BACK <= 21)&(DISTANCE_FRONT <= 96))begin
////													FLAG <= 1;
//													DIR_STATE <= NEUTRAL;
////												end else
////													DIR_STATE <= FORWARD_LEFT;
//											end
//										1:	begin
//												DIR_STATE <= FORWARD;
//												FLAG <= 1;
//											end
//										2:	begin
//												if((DISTANCE_FRONT < 3)|(DISTANCE_SIDE_FRONT < 3)|(DISTANCE_SIDE_BACK < 3))begin
//														DIR_STATE <= BACK_RIGHT;
//												end else if(DISTANCE_SIDE_FRONT == PATH)begin
//													DIR_STATE <= NEUTRAL;
//													FLAG <= 1;
//												end else
//													DIR_STATE <= BACK_RIGHT;
//											end
//										3:	begin
//												if((DISTANCE_FRONT < 3)|(DISTANCE_SIDE_FRONT < 3)|(DISTANCE_SIDE_BACK < 3))begin
//													if(DISTANCE_SIDE_BACK < 3)
//														DIR_STATE <= FORWARD;
//													else
//														DIR_STATE <= BACK_RIGHT;
//												end else if(DISTANCE_SIDE_FRONT == PATH)begin
//													DIR_STATE <= NEUTRAL;
//													FLAG <= 1;
//												end else
//													DIR_STATE <= FORWARD_LEFT;
//											end
//										4:	begin
//												if((DISTANCE_FRONT < 3)|(DISTANCE_SIDE_FRONT < 3)|(DISTANCE_SIDE_BACK < 3))begin
//													DIR_STATE <= BACK_RIGHT;
//												end else if(DISTANCE_SIDE_BACK == PATH)begin
//													DIR_STATE <= NEUTRAL;
//													FLAG <= 1;
//												end else
//													DIR_STATE <= FORWARD;
//											end
//										5:	begin
//												if((DISTANCE_FRONT < 3)|(DISTANCE_SIDE_FRONT < 3)|(DISTANCE_SIDE_BACK < 3))begin
//													if(DISTANCE_SIDE_BACK < 3)
//														DIR_STATE <= FORWARD;
//													else
//														DIR_STATE <= BACK_RIGHT;
//												end else if(DISTANCE_SIDE_BACK == PATH)begin
//													DIR_STATE <= NEUTRAL;
//													FLAG <= 1;
//												end else begin
//													if(DISTANCE_SIDE_BACK > DISTANCE_SIDE_FRONT)begin
//														if((DISTANCE_SIDE_BACK-DISTANCE_SIDE_FRONT) > 2)begin
//															DIR_STATE <= BACK_RIGHT;
//														end else if((DISTANCE_SIDE_BACK-DISTANCE_SIDE_FRONT) < 2)begin
//															DIR_STATE <= FORWARD_LEFT;
//														end else
//															DIR_STATE <= FORWARD;
//													end else
//														DIR_STATE <= FORWARD_LEFT;	
//												end
//												
//											end
//										6:	begin
//												if((DISTANCE_FRONT <= 3)|(DISTANCE_SIDE_FRONT <= 3)|(DISTANCE_SIDE_BACK <= 3))begin
//													DIR_STATE <= BACK_RIGHT;
//												end else if(DISTANCE_SIDE_BACK == PATH)begin
//													DIR_STATE <= NEUTRAL;
//													FLAG <= 1;
//												end else begin
//													if(DISTANCE_SIDE_BACK < DISTANCE_SIDE_FRONT)begin
//														if((DISTANCE_SIDE_FRONT-DISTANCE_SIDE_BACK) > 2)begin
//															DIR_STATE <= FORWARD_LEFT;
//														end else if((DISTANCE_SIDE_FRONT-DISTANCE_SIDE_BACK) < 2)begin
//															DIR_STATE <= FORWARD_RIGHT;
//														end else
//															DIR_STATE <= FORWARD;
//													end else
//														DIR_STATE <= FORWARD_RIGHT;	
//												end
//											end
//										endcase
//							end
///////******** Alternative Straight command with realignment code END
		
				
		

		
		

		
	
