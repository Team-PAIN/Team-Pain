`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:03:59 11/27/2012 
// Design Name: 
// Module Name:    US_Sensors 
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
module US_Sensors(
		input CLK,
		inout SIG1, //side back
		inout SIG2, //side front
		inout SIG3, //front
		input SCLK_50MHz,
		input DEBOUCED_SCLK,
		output [7:0] ANGLE,
		output [1:0] ANGLE_DIRECTION,
		output [7:0] DISTANCE1_DEBOUNCED, //side back
		output [7:0] DISTANCE2_DEBOUNCED, //side front
		output [7:0] DISTANCE3_DEBOUNCED //front
    );

	wire reset, enable1, enable2, enable3;
	wire [7:0] distance1, distance2, distance3;
	
	//***Ultra Sonic Sensor 1 ***//
			//Send & Receive Signal
			ping sensor1 (
			 .clk(SCLK_50MHz), 
			 .reset(reset), 
			 .sig(SIG1), 
			 .dist(distance1), 
			 .enable(enable1)
			 );
		
			//Debounce Signal
			debounce sensor1_debounce (
			 .SCLK(DEBOUCED_SCLK), 
			 .IN(distance1), 
			 .OUT(DISTANCE1_DEBOUNCED)
			 );
	 
	//*** Ultra Sonic Sensor 2 ***//
			//Send & Receive Signal
			ping sensor2 (
			 .clk(~SCLK_50MHz), 
			 .reset(reset), 
			 .sig(SIG2), 
			 .dist(distance2), 
			 .enable(enable2)
			 );
			 
			//Debounce Signal
			debounce sensor2_debounce (
			 .SCLK(DEBOUCED_SCLK), 
			 .IN(distance2), 
			 .OUT(DISTANCE2_DEBOUNCED)
			 );	 
	
	//*** Ultra Sonic Sensor 3 ***//
			//Send & Receive Signal
			ping sensor3 (
			 .clk(SCLK_50MHz), 
			 .reset(reset), 
			 .sig(SIG3), 
			 .dist(distance3), 
			 .enable(enable3)
			 );
		
			//Debounce Signal
			debounce sensor3_debounce (
			 .SCLK(DEBOUCED_SCLK), 
			 .IN(distance3), 
			 .OUT(DISTANCE3_DEBOUNCED)
			 );
	 
	 //*** Orientation Calculation ***//
			orientation angle_calculator (
			 .CLK(CLK), 
			 .DIST1(DISTANCE1_DEBOUNCED), 
			 .DIST2(DISTANCE2_DEBOUNCED), 
			 .ANGLE(ANGLE), 
			 .DIRECTION(ANGLE_DIRECTION)
			 );
			 
endmodule
