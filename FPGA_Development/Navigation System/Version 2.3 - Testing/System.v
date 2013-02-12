`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:46:08 12/02/2012 
// Design Name: 
// Module Name:    System 
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
module System(
		input CLK,
		inout US_FRONT, //Top Side Sensor
		inout US_BACK,	//Bottom Side Sensor
		inout US_SIDE_FRONT, //Left Side, Front Sensor
		inout US_SIDE_BACK,//Left Side, Back Sensor
		input [7:0] SW,
		input [4:0] BTN,
		output PWM, //Pulse to Motor Controllers
		output [7:0] SSEG_CA,
		output [3:0] SSEG_AN,
		output [7:0] LED,
		output CLAW,
		output JOINTHIGH,
		output JOINTLOW
    );
	
	wire NEXT_FLAG;
	reg [1:0] RUN_FLAG;
	reg [4:0] COMMAND;
	reg [7:0] COMPARE_DISTANCE, PATH,state;
	wire [7:0] DISTANCE_SIDE_FRONT, DISTANCE_SIDE_BACK, DISTANCE_FRONT;
	
	initial begin
		//COMMAND = TURN_LEFT;
		COMPARE_DISTANCE = 0;
		PATH = 0;
		state = 0;
		RUN_FLAG = RUN_INI;
		COMMAND = 0;
	end
	
	parameter [1:0] RUN_INI = 2'b 00; //Initialization State
	parameter [1:0] RUN_EXC = 2'b 01; //Execution State
	parameter [1:0] RUN_COM = 2'b 10; //Completion State
	parameter [1:0] RUN_ERR = 2'b 11; //Error State
	
	//	Command Parameters
	parameter [4:0] TURN_RIGHT 	= 5'b 01100;
	parameter [4:0] TURN_LEFT 		= 5'b 00110;
	parameter [4:0] STRAIGHT 		= 5'b 01110;
	
	//*** Sub-Systems ***//
		// Navigational System
		Navigation NAV (
			 .CLK(CLK), 
			 .US_FRONT(US_FRONT), 
			 .US_BACK(US_BACK), 
			 .US_SIDE_FRONT(US_SIDE_FRONT), 
			 .US_SIDE_BACK(US_SIDE_BACK), 
			 .SW(SW), 
			 .BTN(BTN), 
			 .COMMAND(COMMAND),
			 .PATH(PATH),
			 .COMPARE_DISTANCE(COMPARE_DISTANCE),
			 .NEXT_FLAG(NEXT_FLAG),
			 .PWM(PWM), 
			 .SSEG_CA(SSEG_CA), 
			 .SSEG_AN(SSEG_AN),
			 .LED(LED[7:0]),
			 .RUN_FLAG(RUN_FLAG),
			 .DISTANCE_SIDE_FRONT(DISTANCE_SIDE_FRONT),
			 .DISTANCE_SIDE_BACK(DISTANCE_SIDE_BACK),
			 .DISTANCE_FRONT(DISTANCE_FRONT)
			 );

		// Arm System
		Arm ARM (
			 .CLK(CLK), 
			 .SW(SW), 
			 .CLAW(CLAW), 
			 .JOINTHIGH(JOINTHIGH), 
			 .JOINTLOW(JOINTLOW)
			 );
			 
	always @(posedge CLK)begin
		case(state)
			0: begin
					if(SW[7]==0)
						state <= 1;
				end
			1:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= TURN_LEFT;
										COMPARE_DISTANCE <= DISTANCE_SIDE_FRONT;
										RUN_FLAG <= RUN_EXC;
									end
						RUN_EXC:	begin //Execution State
										if(NEXT_FLAG) begin
											RUN_FLAG <= RUN_EXC;
										end
									end
						RUN_COM:	begin //Completion State
										state <= 2;
										RUN_FLAG <= RUN_INI;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			2:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= STRAIGHT;
										PATH <= 4;	
										COMPARE_DISTANCE <= 12;
										RUN_FLAG <= RUN_EXC;
									end
						RUN_EXC:	begin //Execution State
										if(NEXT_FLAG)begin
											RUN_FLAG <= RUN_COM;
										end
									end
						RUN_COM:	begin //Completion State
										RUN_FLAG <= RUN_INI;
										state <= 3;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			3:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= TURN_RIGHT;
										RUN_FLAG <= RUN_EXC;
										COMPARE_DISTANCE <= 140 - DISTANCE_SIDE_FRONT; //140 Compare distance
									end
						RUN_EXC:	begin //Execution State
										if(NEXT_FLAG) begin
											RUN_FLAG <= RUN_COM;
										end
									end
						RUN_COM:	begin //Completion State
										state <= 4;
										RUN_FLAG <= RUN_INI;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			4:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= STRAIGHT;
										PATH <= 16;
										COMPARE_DISTANCE <= 12;
										RUN_FLAG <= RUN_EXC;
									end
						RUN_EXC:	begin //Execution State
										if(NEXT_FLAG) begin
											RUN_FLAG <= RUN_COM;
										end
									end
						RUN_COM:	begin //Completion State
										state <= 3;
										RUN_FLAG <= RUN_INI;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			
		endcase
	end
			 
endmodule
