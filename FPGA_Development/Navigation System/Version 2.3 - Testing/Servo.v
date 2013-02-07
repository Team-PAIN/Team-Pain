`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:42:33 11/27/2012 
// Design Name: 
// Module Name:    Servo 
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
module Servo(
		input CLK,
		input SLK,
		input [26:0] COUNT,
		input [19:0] DESIRED,
		output reg PWM,
		output reg FLAG		
    );
	
	reg [19:0] value;
	
	initial begin
		value = 0;
		FLAG = 0;
		PWM = 0;
	end
//	assign PWM = (COUNT <= value) ? 1 : 0;
//	assign FLAG = (value == DESIRED) ? 1 : 0;
	
	always @(posedge SLK) begin
		if(value < DESIRED) begin
			value <= value + 1;
		end else if(value > DESIRED) begin
			value <= value - 1;
		end else begin
			value <= value;
		end	
		//value <= DESIRED;
	end
	
	always @(posedge CLK) begin
		if(COUNT <= value) 
			PWM <= 1;
		else
			PWM <= 0;
			
		if(value == DESIRED)
			FLAG <= 1;
		else
			FLAG <= 0;
	end

endmodule
