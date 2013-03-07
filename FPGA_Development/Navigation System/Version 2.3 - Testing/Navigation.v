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
		inout US_FRONT, //Top Side Sensor
		inout US_SIDE_FRONT, //Left Side, Front Sensor
		inout US_SIDE_BACK,//Left Side, Back Sensor
		input [7:0] SW,
		input [4:0] BTN,
		input [4:0] COMMAND,
		input [7:0] PATH,
		input [7:0] COMPARE_DISTANCE,
		output NEXT_FLAG,
		output PWM, //Pulse to Motor Controllers
		output [7:0] SSEG_CA,
		output [3:0] SSEG_AN,
		output [7:0] LED,
		input [1:0] RUN_FLAG,
		output [7:0] DISTANCE_SIDE_FRONT,
		output [7:0] DISTANCE_SIDE_BACK,
		output [7:0] DISTANCE_FRONT
    );
	 
	reg [18:0] count;
	wire SCLK_50MHz,DEBOUCED_SCLK;
	wire [4:0] MC1,MC2;
	wire [7:0] ANGLE;
	wire [1:0] ANGLE_DIRECTION;
	
	
	
	initial begin
		count = 0;
	end
	
	assign SCLK_50MHz = count[0]; //50 MHz Signal for US sensors
	assign DEBOUCED_SCLK = count[16];
			 
			 
	//Display of Data
	SevenDisplay DataDisplay (
		 .CLK(CLK), 
		 .SCLK(count[16:15]), 
		 .DISPLAY({DISTANCE_SIDE_BACK,DISTANCE_FRONT}), 
		 .SSEG_CA(SSEG_CA), 
		 .SSEG_AN(SSEG_AN)
		 );
		 
	//Directional and Power Controller using directional buttons
	direction_control CONTROL (
		 .CLK(CLK), 
		 .SW(SW), 
		 .BTN(BTN), 
		 .DISTANCE_FRONT(DISTANCE_FRONT), 
		 .DISTANCE_BACK(DISTANCE_BACK), 
		 .DISTANCE_SIDE_BACK(DISTANCE_SIDE_BACK), 
		 .DISTANCE_SIDE_FRONT(DISTANCE_SIDE_FRONT), 
		 .ANGLE(ANGLE), 
		 .ANGLE_DIRECTION(ANGLE_DIRECTION), 
		 .COMMAND(COMMAND),
		 .PATH(PATH),
		 .DISTANCE_CHECK(COMPARE_DISTANCE),
		 .NEXT_FLAG(NEXT_FLAG),
		 .MC1(MC1), 
		 .MC2(MC2),
		 .LED(LED),
		 .RUN_FLAG(RUN_FLAG)
		 );
	
	//Motor Controller Signal Manager
	mc MC(
		 .CLK(CLK), 
		 .DESIRED_MC1(MC1), 
		 .DESIRED_MC2(MC2), 
		 .PWM(PWM)
		 );

	// Sensor Processing 
	US_Sensors US_DATA (
    .CLK(CLK), 
    .SIG1(US_SIDE_BACK), 
    .SIG2(US_SIDE_FRONT), 
    .SIG3(US_FRONT), 
    .SCLK_50MHz(SCLK_50MHz), 
    .DEBOUCED_SCLK(DEBOUCED_SCLK), 
    .ANGLE(ANGLE), 
    .ANGLE_DIRECTION(ANGLE_DIRECTION), 
    .DISTANCE1_DEBOUNCED(DISTANCE_SIDE_BACK), 
    .DISTANCE2_DEBOUNCED(DISTANCE_SIDE_FRONT), 
    .DISTANCE3_DEBOUNCED(DISTANCE_FRONT), 
    .DISTANCE4_DEBOUNCED(DISTANCE_BACK)
    );
	
	 	
	//Counter to derive slower clocks
	always @(posedge CLK) begin
		
		if(count >= 262100) //262100 Fits in an 18 bit reg
			count <= 0;
		else
			count <= count + 1;
			
	end 
	
	
		
endmodule
