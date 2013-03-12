`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:45:18 10/22/2012 
// Design Name: 
// Module Name:    SerialIn 
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
module SerialIn(
		input CLK,
		input RCLK,
		input RDATA,
		input RESET,
		output reg [7:0] DATA
    );
	 
	reg [2:0] bitCounter; //8-bit Counter for Receiving 8-bits of Data
	
	initial begin
		bitCounter = 0;
	end
	
	always @(posedge RCLK) begin
		if (RESET) //Reset Counter to Place Data Transmitted to Proper Location
			bitCounter <= 0;
		else begin
			DATA[bitCounter] <= RDATA;
			bitCounter <= bitCounter+1;
		end
	end
	
	
	
endmodule
