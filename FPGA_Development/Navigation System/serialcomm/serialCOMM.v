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
module serialCOMM(
		input CLK,
		input RCLK,
		input RDATA,
		input RESET,
		output [4:0] SSEG_AN,
		output [7:0] SSEG_CA,
		output [7:0] LED
    );
	 
	reg [2:0] bitCounter; //8-bit Counter for Receiving 8-bits of Data
	reg [7:0] DATA;
	wire [3:0] size, color;
	reg [26:0] count;
	
	initial begin
		bitCounter = 0;
		DATA = 'hFF;
	end
	
	assign color = DATA[3:0];//{DATA[0],DATA[1],DATA[2],DATA[3]};
	assign size = DATA[7:4];//{DATA[4],DATA[5],DATA[6],DATA[7]};
	assign LED[0] = RESET;
	assign LED[7] = RCLK;
	assign LED[6:1] = 0;
	always @(posedge RCLK or posedge RESET) begin
		if (RESET) //Reset Counter to Place Data Transmitted to Proper Location
			bitCounter <= 0;
		else begin
			DATA[bitCounter] <= RDATA;
			bitCounter <= bitCounter + 1;
		end
	end
	
	always @(posedge CLK)begin
		if(count >= 1000000)begin
			count <= 0;
		end else begin
			count <= count + 1;
		end
	end
	
	
	// Instantiate the module
	SevenDisplay display(
    .CLK(CLK), 
    .SCLK(count[16:15]), 
    .DISPLAY({size,color}), 
    .SSEG_CA(SSEG_CA), 
    .SSEG_AN(SSEG_AN)
    );

	
	
endmodule
