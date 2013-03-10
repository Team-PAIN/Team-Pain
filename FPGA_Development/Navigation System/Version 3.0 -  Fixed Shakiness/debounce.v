`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:03 11/19/2012 
// Design Name: 
// Module Name:    ebounce 
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
module debounce(
		input SCLK,
		input [7:0] IN, 
		output reg [7:0] OUT
    );

	parameter GOOD = 0; //Good Signal
	parameter NOISY1 = 1; //First State Noisy Signal
	parameter NOISY2 = 2; //Second State Noisy Signal

	reg [1:0] STATE, NEXT_STATE;
	reg [7:0] OLD_IN;


	always @(posedge SCLK) begin
		STATE <= NEXT_STATE;
		case(STATE)
			GOOD: begin
						if(IN == OLD_IN)begin
							NEXT_STATE <= GOOD;
							OUT <= IN;
						end else begin
							NEXT_STATE <= NOISY1;
							OUT <= OLD_IN;
						end
					end
			NOISY1:begin
					if(IN == OLD_IN)begin
						NEXT_STATE <= GOOD;
						OUT <= OLD_IN;
					end else begin
						NEXT_STATE <= NOISY2;
						OUT <= OLD_IN;
					end
				end
			NOISY2:begin
					if(IN == OLD_IN)begin
						NEXT_STATE <= GOOD;
						OUT <= OLD_IN;
					end else begin
						NEXT_STATE <= NOISY1;
						OUT <= OLD_IN;
					end
				end
		endcase
		OLD_IN = IN;
	end

endmodule
