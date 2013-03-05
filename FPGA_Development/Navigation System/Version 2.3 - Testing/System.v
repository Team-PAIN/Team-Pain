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
		inout US_SIDE_FRONT, //Left Side, Front Sensor
		inout US_SIDE_BACK,//Left Side, Back Sensor
		input [7:0] SW,
		input [4:0] BTN,
		input RCLK, //Color and Size Receiving Clock
		input RDATA, //Color and Size Receiving Data
		input RESET, //Color and Size Receiving Reset
		output PWM, //Pulse to Motor Controllers
		output [7:0] SSEG_CA,
		output [3:0] SSEG_AN,
		output [7:0] LED,
		output CLAW,
		output JOINTHIGH,
		output JOINTLOW,
		output [1:0] SLIDER
    );
	 
	wire SCLK_50MHz, DEBOUCED_SCLK;
	wire NEXT_FLAG;
	wire[3:0] COLOR, SIZE;
	reg [20:0] count;
	reg [1:0] RUN_FLAG;
	reg [4:0] COMMAND, STATE;
	reg [7:0] COMPARE_DISTANCE, PATH,INITIAL_X,INITIAL_Y;
	wire [7:0] DISTANCE_SIDE_FRONT, DISTANCE_SIDE_BACK, DISTANCE_FRONT;
	
	
	// State Parameters
	parameter [1:0] RUN_INI = 2'b 00; //Initialization State
	parameter [1:0] RUN_EXC = 2'b 01; //Execution State
	parameter [1:0] RUN_COM = 2'b 10; //Completion State
	parameter [1:0] RUN_ERR = 2'b 11; //Error State
	
	//	Command Parameters
	parameter [4:0] NO_COMMAND 	= 5'b 01100;
	parameter [4:0] TURN_RIGHT 	= 5'b 01100;
	parameter [4:0] TURN_LEFT 		= 5'b 00110;
	parameter [4:0] STRAIGHT 		= 5'b 01110;
	
	// State Command
	parameter [4:0] START			= 5'b 00000;
	parameter [4:0] INI_FORWARD 	= 5'b 00001;
	parameter [4:0] INI_LEFT	 	= 5'b 00010;
	parameter [4:0] SEA_SCAN	 	= 5'b 00011;
	parameter [4:0] RIGHT_CARGO	= 5'b 00100;
	parameter [4:0] CARGO_SCAN 	= 5'b 00101;
	
	// Color Parameters
	parameter [3:0] RED 		= 4'b 0000;
	parameter [3:0] ORANGE 	= 4'b 0001;
	parameter [3:0] YELLOW 	= 4'b 0010;
	parameter [3:0] GREEN 	= 4'b 0011;
	parameter [3:0] BLUE 	= 4'b 0100;
	parameter [3:0] BROWN 	= 4'b 0101;
	
	// Size Parameters
	parameter [3:0] AIR 		= 4'b 0000;
	parameter [3:0] SEA 		= 4'b 0001;
	parameter [3:0] RAIL		= 4'b 0010;
	
	// RAIL Position Parameters
	parameter [1:0] INITIAL		 	= 2'b 00;
	parameter [1:0] ZONE_DETECT 	= 2'b 01;
	parameter [1:0] BLOCK_DETECT 	= 2'b 10;
	parameter [1:0] RAMP_DETECT 	= 2'b 11;
	
	assign SLIDER[1:0] = SW[1:0];
	assign SCLK_50MHz = count[0]; //50 MHz Signal for US sensors
	assign DEBOUCED_SCLK = count[19];

	initial begin
		COMPARE_DISTANCE = 0;
		PATH = 0;
		STATE = START;
		RUN_FLAG = RUN_INI;
		COMMAND = NO_COMMAND;
		count = 0;
	end
	
		
	//*** Sub-Systems ***//
		// Navigational System
		Navigation NAV (
			 .CLK(CLK), 
			 .US_FRONT(US_FRONT), 
			 .US_SIDE_FRONT(US_SIDE_FRONT), 
			 .US_SIDE_BACK(US_SIDE_BACK), 
			 .SW(SW), 
			 .BTN(BTN), 
			 .COMMAND(COMMAND), 
			 .PATH(PATH), 
			 .COMPARE_DISTANCE(COMPARE_DISTANCE), 
			 .RUN_FLAG(RUN_FLAG), 
			 .SCLK_50MHz(SCLK_50MHz), 
			 .DEBOUCED_SCLK(DEBOUCED_SCLK), 
			 .NEXT_FLAG(NEXT_FLAG), 
			 .PWM(PWM), 
			 .LED(LED[7:0]), 
			 .DISTANCE_SIDE_FRONT(DISTANCE_SIDE_FRONT), 
			 .DISTANCE_SIDE_BACK(DISTANCE_SIDE_BACK), 
			 .DISTANCE_FRONT(DISTANCE_FRONT)
			 );
			 
		localization Localize (
			 .CLK(CLK), 
			 .DISTANCE_FRONT(DISTANCE_FRONT), 
			 .DISTANCE_SIDE_FRONT(DISTANCE_SIDE_FRONT), 
			 .DISTANCE_SIDE_BACK(DISTANCE_SIDE_BACK), 
			 .COMMAND(COMMAND), 
			 .TILT(TILT), 
			 .INITIAL_X(INITIAL_X), 
			 .INITIAL_Y(INITIAL_Y), 
			 .ORIENTATION(ORIENTATION), 
			 .SECTOR(SECTOR), 
			 .BACK_DISTANCE(BACK_DISTANCE), 
			 .RIGHT_DISTANCE(RIGHT_DISTANCE)
			 );
			 
			 
		// Arm System
		Arm ARM (
			 .CLK(CLK), 
			 .SW(SW), 
			 .CLAW(CLAW), 
			 .JOINTHIGH(JOINTHIGH), 
			 .JOINTLOW(JOINTLOW)
			 );
		
		serialCOMM COLOR_SIZE (
		 .CLK(CLK), 
		 .RCLK(RCLK), 
		 .RDATA(RDATA), 
		 .RESET(RESET), 
		 .SIZE(SIZE), 
		 .COLOR(COLOR)
		 );

	//Display of Data
	SevenDisplay DataDisplay (
		 .CLK(CLK), 
		 .SCLK(count[16:15]), 
		 .DISPLAY({DISTANCE_FRONT,DISTANCE_SIDE_FRONT}), 
		 .SSEG_CA(SSEG_CA), 
		 .SSEG_AN(SSEG_AN)
		 );
		 
		 
	always @(posedge CLK)begin
		//Counter to derive slower clocks
		if(count >= 524288) //52428 Fits in an 20 bit reg
			count <= 0;
		else
			count <= count + 1;	
	
	
	
	
		case(STATE)
			START: begin
					if(SW[7] == 0)begin
						STATE <= INI_FORWARD;
					end else begin
						INITIAL_X <= DISTANCE_SIDE_FRONT;
						INITIAL_Y <= DISTANCE_FRONT;
					end
					
				end
			INI_FORWARD:begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= STRAIGHT;
										PATH <= DISTANCE_SIDE_FRONT;	
										COMPARE_DISTANCE <= DISTANCE_FRONT - 15;
										RUN_FLAG <= RUN_EXC;
									end
						RUN_EXC:	begin //Execution State
										RUN_FLAG <= (NEXT_FLAG) ? RUN_COM : RUN_EXC;
									end
						RUN_COM:	begin //Completion State
										if(SW[5])begin
											RUN_FLAG <= RUN_INI;
											STATE <= INI_LEFT;
										end 
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			INI_LEFT:begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= TURN_LEFT;
										COMPARE_DISTANCE <= DISTANCE_SIDE_FRONT;
										RUN_FLAG <= RUN_EXC;
									end
						RUN_EXC:	begin //Execution State
										RUN_FLAG <= (NEXT_FLAG) ? RUN_COM : RUN_EXC;
									end
						RUN_COM:	begin //Completion State
										if(SW[5])begin
										STATE <= SEA_SCAN;
										RUN_FLAG <= RUN_INI;
										end
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			SEA_SCAN:begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= STRAIGHT;
										PATH <= 5;	
										COMPARE_DISTANCE <= 12;
										RUN_FLAG <= RUN_EXC;
									end
						RUN_EXC:	begin //Execution State
										RUN_FLAG <= (NEXT_FLAG) ? RUN_COM : RUN_EXC;
									end
						RUN_COM:	begin //Completion State
										if(SW[5])begin
										RUN_FLAG <= RUN_INI;
										STATE <= RIGHT_CARGO;
										end
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			RIGHT_CARGO:begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= TURN_RIGHT;
										RUN_FLAG <= RUN_EXC;
										COMPARE_DISTANCE <= RIGHT_DISTANCE; 
									end
						RUN_EXC:	begin //Execution State
										RUN_FLAG <= (NEXT_FLAG) ? RUN_COM : RUN_EXC;
									end
						RUN_COM:	begin //Completion State
										STATE <= CARGO_SCAN;
										RUN_FLAG <= RUN_INI;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			CARGO_SCAN:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= STRAIGHT;
										PATH <= 16;
										COMPARE_DISTANCE <= 12;
										RUN_FLAG <= RUN_EXC;
									end
						RUN_EXC:	begin //Execution State
										RUN_FLAG <= (NEXT_FLAG) ? RUN_COM : RUN_EXC;
									end
						RUN_COM:	begin //Completion State
										STATE <= RIGHT_CARGO;
										RUN_FLAG <= RUN_INI;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			
		endcase
	end
			 
			 
			 
	

endmodule
