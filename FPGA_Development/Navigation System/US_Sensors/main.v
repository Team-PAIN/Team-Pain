`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:31:14 11/01/2012 
// Design Name: 
// Module Name:    main 
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
module main(
		input CLK,
		inout SIG,
		input SW,
		output [7:0] SSEG_CA,
		output [3:0] SSEG_AN
    );

	wire [12:0] display;
	wire [12:0] DISTANCE;
	reg SCLK;
	reg [26:0] count;
	wire reset,enable;
	initial begin
		count = 0;
		SCLK = 0;
	end 
	assign reset = SW;
	assign display = DISTANCE;
ping instance_name (
    .clk(SCLK), 
    .reset(reset), 
    .sig(SIG), 
    .dist(DISTANCE), 
    .enable(enable)
    );

//	// Instantiate the module
//	US_Sensor Sensor1 (
//		 .CLK(CLK), 
//		 .SIG(SIG), 
//		 .DISTANCE(display)
//		 );
		 
	// Instantiate the module
	SevenDisplay show (
		 .CLK(CLK), 
		 .SCLK(count[16:15]), 
		 .DISPLAY(display), 
		 .SSEG_CA(SSEG_CA), 
		 .SSEG_AN(SSEG_AN)
		 );
		 
		 
	always @(posedge CLK)begin
		SCLK <= SCLK + 1;
		count <= count + 1;
		if(count>=100000000)
			count <= 0;
	end
endmodule
