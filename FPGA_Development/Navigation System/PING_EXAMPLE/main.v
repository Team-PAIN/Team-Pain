`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:01:30 10/25/2012 
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
	inout sig,
	output [7:0] SSEG_CA,
    output [3:0] SSEG_AN
    );

reg enable,reset;
reg [17:0] c

// Instantiate the module
ping instance_name (
    .clk(clk), 
    .reset(reset), 
    .sig(sig), 
    .dist(dist), 
    .enable(enable)
    );

// Instantiate the module
SevenDisplay instance_name (
    .CLK(CLK), 
    .SCLK(SCLK), 
    .DISPLAY(dist), 
    .SSEG_CA(SSEG_CA), 
    .SSEG_AN(SSEG_AN)
    );
	 
	 
endmodule
