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
	
	reg [19:0] value;		//Contains the position of the arm, based on the width of the PWM pulse
	
	initial begin
		value = 0;
		FLAG = 0;
		PWM = 0;
	end
	
	always @(posedge SLK) begin				//Increment or decrement the width of the signal at
		if(value < DESIRED) begin				//the desired rate (currently every 1.28us) until the 
			value <= value + 1;					//desired value is reached.
		end else if(value > DESIRED) begin
			value <= value - 1;
		end else begin
			value <= value;
		end	
	end
	
	always @(posedge CLK) begin
		if(COUNT <= value) 		//Create the PWM pulse
			PWM <= 1;
		else
			PWM <= 0;
			
		if(value == DESIRED)		//Raise a flag when the desired value is reached.
			FLAG <= 1;
		else
			FLAG <= 0;
	end

endmodule
