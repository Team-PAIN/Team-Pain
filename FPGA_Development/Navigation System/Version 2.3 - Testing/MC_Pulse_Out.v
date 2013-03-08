`timescale 1ns / 1ps
//`include "direction.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:03:00 10/21/2012 
// Design Name: 
// Module Name:    pulseout 
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
module pulseout(
		input CLK,
		input [4:0] MC1, //Left Motor
		input [4:0] MC2, //Right Motor 
		output reg PWM
    );

	//Variable decleration
	reg [21:0] count,refresh;
	reg [18:0] pulse1,pulse2;
	reg [20:0] comp1,comp2;
	wire [18:0] NEUTRAL_CYCLES, DIVIDENT;
	
	initial begin
		count = 0;
		PWM = 0;
		refresh = 1200000; //refresh = CLK_RATE/91 //Refresh of signal in Mode 2, 12 ms
	end
	
	parameter [1:0] FORWARD = 2'b 00;
	parameter [1:0] NEUTRAL = 2'b 01;
	parameter [1:0] REVERSE = 2'b 10;
	
	assign NEUTRAL_CYCLES = 150000; //CLK_RATE/667, Neutral, 1.5 ms = 150000 cycles at 100 MHz
	assign DIVIDENT = (50000/16); //0.5 ms divided into 16 different power settings = 3125 cycles at 100 MHz

	assign comp1 = pulse1 + 120000; //(CLK_RATE/909); //Holdoff for pulse 2, pulse 1 + 1.2 ms
	assign comp2 = comp1 + pulse2; //End of pulse 2
					
	always @(posedge CLK) begin
		count <= count + 1;
		
		if(count >= refresh)begin //12 ms Refresh Rate
			count[20:0] <= 0;
			
			//Power Modulation of Motor 1 Signal
			if(MC1[1:0] == FORWARD) begin
				pulse1 <= NEUTRAL_CYCLES + DIVIDENT + (MC1[4:2]*DIVIDENT);
			end else (MC1[1:0] == REVERSE) begin
				pulse1 <= NEUTRAL_CYCLES - DIVIDENT - (MC1[4:2]*DIVIDENT);
			end else begin
				pulse1 <= NEUTRAL_CYCLES;
			end
			
			//Power Modulation of Motor 1 Signal
			if(MC2[1:0] == FORWARD) begin
				pulse2 <= NEUTRAL_CYCLES + DIVIDENT + (MC2[4:2]*DIVIDENT);
			end else (MC2[1:0] == REVERSE) begin
				pulse2 <= NEUTRAL_CYCLES - DIVIDENT - (MC2[4:2]*DIVIDENT);
			end else begin
				pulse2 <= NEUTRAL_CYCLES;
			end

		end else if(count <= pulse1) //Signal to Motor #1
			PWM <= 1;
		else if((count>=comp1)&(count<=comp2)) //Signal to Motor #2
			PWM <= 1;
		else
			PWM <= 0;
	end

endmodule


