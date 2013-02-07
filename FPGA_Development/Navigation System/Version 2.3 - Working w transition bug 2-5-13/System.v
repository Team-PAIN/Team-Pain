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
	
	reg [7:0] COMMAND, COMPARE_DISTANCE, PATH,state;

	initial begin
		//COMMAND = TURN_LEFT;
		COMPARE_DISTANCE = 0;
		PATH = 0;
		state = 0;
	end
	
	parameter [1:0] RUN_INI = 2'b 00; //Initialization State
	parameter [1:0] RUN_EXC = 2'b 01; //Execution State
	parameter [1:0] RUN_COM = 2'b 10; //Completion State
	parameter [1:0] RUN_ERR = 2'b 11; //Error State
	
	parameter [4:0] TURN_RIGHT = 	5'b 01111;
	parameter [4:0] TURN_LEFT = 	5'b 01110;
	parameter [4:0] STRAIGHT = 	5'b 01100;
	
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
			 .PWM(PWM), 
			 .SSEG_CA(SSEG_CA), 
			 .SSEG_AN(SSEG_AN),
			 .LED(LED[7:4]),
			 .RUN_FLAG(RUN_FLAG)
			 );

		// Arm System
		Arm ARM (
			 .CLK(CLK), 
			 .SW(SW), 
			 .LED0(LED[0]), 
			 .LED(LED[3:1]), 
			 .CLAW(CLAW), 
			 .JOINTHIGH(JOINTHIGH), 
			 .JOINTLOW(JOINTLOW)
			 );
			 
	always @(posedge CLK)begin
		case(state)
			0:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= TURN_LEFT;
										COMPARE_DISTANCE <= 0;	
									end
						RUN_EXC:	begin //Execution State
										
									end
						RUN_COM:	begin //Completion State
										state <= 1;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			1:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= STRAIGHT;
										PATH <= 4;	
									end
						RUN_EXC:	begin //Execution State
										
									end
						RUN_COM:	begin //Completion State
										state <= 2;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			2:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= TURN_RIGHT;
										COMPARE_DISTANCE <= 140;	
									end
						RUN_EXC:	begin //Execution State
										
									end
						RUN_COM:	begin //Completion State
										state <= 3;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			3:	begin
					case(RUN_FLAG)
						RUN_INI:	begin //Initialization State
										COMMAND <= STRAIGHT;
										PATH <= 16;
									end
						RUN_EXC:	begin //Execution State
										
									end
						RUN_COM:	begin //Completion State
										state <= 2;
									end
						RUN_ERR:	begin //Error State
						
									end
					endcase
				end
			
		endcase
	end
			 
endmodule
