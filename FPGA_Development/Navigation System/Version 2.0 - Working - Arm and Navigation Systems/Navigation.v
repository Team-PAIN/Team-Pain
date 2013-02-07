`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:18:22 10/24/2012 
// Design Name: 	
// Module Name:    Navigation 
// Project Name: 
// Target Devices: Nexys 3 
// Tool versions: 
// Description: Provides Navigational Processing of Motor Controller with the data from 2 Ultrasonic
//	Sensors. Displaying the reading in the seven-segment display. 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Navigation(
		input CLK,
		input SCLK_50MHz,
		input DEBOUCED_SCLK, 
		inout US_FRONT, //Top Side Sensor
		inout US_BACK,	//Bottom Side Sensor
		inout US_SIDE_FRONT, //Left Side, Front Sensor
		inout US_SIDE_BACK,//Left Side, Back Sensor
		input [4:0] DIR_STATE,
		input [4:0] PWM_STATE,
		output PWM_MC1, //MC1 Pulse Width Modulator
		output PWM_MC2, //MC2 Pulse Width Modulator
		output [7:0] DISTANCE_FRONT,
		output [7:0] DISTANCE_BACK,
		output [7:0] DISTANCE_SIDE_BACK,
		output [7:0] DISTANCE_SIDE_FRONT,
		output [7:0] ANGLE,
		output [7:0] ANGLE_DIRECTION,
		output [4:0] MC1,
		output [4:0] MC2
    );
	 
//	reg [18:0] count;
	wire SCLK_50MHz,DEBOUCED_SCLK;
	wire [4:0] MC1,MC2; //Current Status of Motor Controllers
	wire [7:0] DISTANCE_FRONT, DISTANCE_BACK, DISTANCE_SIDE_BACK, DISTANCE_SIDE_FRONT;
	wire [7:0] ANGLE;
	wire [1:0] ANGLE_DIRECTION;
	wire [4:0] DIR_STATE, PWM_STATE;
	
	
	
//	parameter [4:0] NEUTRAL = 			5'b 00000;
//	parameter [4:0] FORWARD = 			5'b 00001;
//	parameter [4:0] REVERSE = 			5'b 00010;
//	parameter [4:0] FORWARD_RIGHT = 	5'b 00011;
//	parameter [4:0] BACK_RIGHT = 		5'b 00111;
//	parameter [4:0] FORWARD_LEFT = 	5'b 11000;
//	parameter [4:0] BACK_LEFT = 		5'b 10000;
//	parameter [4:0] R_360 = 			5'b 10011;
//	parameter [4:0] L_360 = 			5'b 11001;
//	
//	parameter [4:0] BOTH_100 = 	5'b 11111;
//	parameter [4:0] BOTH_88 = 		5'b 11011;
//	parameter [4:0] BOTH_75 = 		5'b 10111;
//	parameter [4:0] BOTH_62 = 		5'b 10011;
//	parameter [4:0] BOTH_50 = 		5'b 01111;
//	parameter [4:0] BOTH_38 = 		5'b 01011;
//	parameter [4:0] BOTH_25 = 		5'b 00111;
//	parameter [4:0] BOTH_17 = 		5'b 00011;
	 
//	initial begin
//		count = 0;
//		state = 0;
//	end
	
//	assign SCLK_50MHz = count[0]; //50 MHz Signal for US sensors
//	assign DEBOUCED_SCLK = count[16];
			 
			 
	
		 
	//Directional and Power Controller using directional buttons
	direction_control CONTROL (
		 .CLK(CLK), 
		 .DIR_STATE(DIR_STATE), 
		 .PWM_STATE(PWM_STATE), 
		 .MC1(MC1), 
		 .MC2(MC2)
		 );
	
	//Motor Controller Signal Manager
	mc MC(
		 .CLK(CLK), 
		 .DESIRED_MC1(MC1), 
		 .DESIRED_MC2(MC2), 
		 .PWM_MC1(PWM_MC1),
		 .PWM_MC2(PWM_MC2)
		 );

	// Instantiate the module
	
	US_Sensors US_DATA (
    .CLK(CLK), 
    .SIG1(US_SIDE_BACK), 
    .SIG2(US_SIDE_FRONT), 
    .SIG3(US_FRONT), 
    .SIG4(US_BACK), 
    .SCLK_50MHz(SCLK_50MHz), 
    .DEBOUCED_SCLK(DEBOUCED_SCLK), 
    .ANGLE(ANGLE), 
    .ANGLE_DIRECTION(ANGLE_DIRECTION), 
    .DISTANCE1_DEBOUNCED(DISTANCE_SIDE_BACK), 
    .DISTANCE2_DEBOUNCED(DISTANCE_SIDE_FRONT), 
    .DISTANCE3_DEBOUNCED(DISTANCE_FRONT), 
    .DISTANCE4_DEBOUNCED(DISTANCE_BACK)
    );
			
endmodule
