`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:18:22 10/24/2012 
// Design Name: 
// Module Name:    Navigation 
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
module Navigation(
		input CLK,
		input [7:0] SW,
		input [4:0] BTN,
		input RCLK,
		input RDATA1,
		input RDATA2,
		input SensorReset,
		output PWM,
		output LED,
		output [7:0] SSEG_CA,
		output [3:0] SSEG_AN
    );
	 
	reg [18:0] count;
	wire [7:0] distance1, distance2;
	wire [4:0] MC1,MC2;

	initial begin
	count = 0;
	end
	//Sensors 1 Data
	SerialIn Sensor1 (
		 .CLK(CLK), 
		 .RCLK(RCLK), 
		 .RDATA(RDATA1),
		 .RESET(SensorReset),
		 .DATA(distance1)
		 );

	//Sensors 2 Data
	SerialIn Sensor2 (
			 .CLK(CLK), 
			 .RCLK(RCLK), 
			 .RDATA(RDATA2), 
		    .RESET(SensorReset),
			 .DATA(distance2)
			 );
			 
	// Display of Sensor Data
	SevenDisplay DataDisplay (
		 .CLK(CLK), 
		 .SCLK(count[16:15]), 
		 .DISPLAY({distance1,distance2}), 
		 .SSEG_CA(SSEG_CA), 
		 .SSEG_AN(SSEG_AN)
		 );
		 
		 	// Directional and Power Controller using directional buttons
	direction_control control (
		 .CLK(CLK), 
		 .BTN(BTN), 
		 .SW(SW), 
		 .MC1(MC1), 
		 .MC2(MC2)
		 );
	
	// Instantiate the module
	mc MC (
		 .CLK(CLK), 
		 .DESIRED_MC1(MC1), 
		 .DESIRED_MC2(MC2), 
		 .PWM(PWM)
		 );


	always @(posedge CLK) begin
		count <= count+1;
		if(count>= 262100)
			count <=0;
	end
endmodule
