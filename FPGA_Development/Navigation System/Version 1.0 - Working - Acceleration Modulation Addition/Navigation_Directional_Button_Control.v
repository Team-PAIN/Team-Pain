`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:19:41 10/23/2012 
// Design Name: 
// Module Name:    direction_control 
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
module direction_control(
		input CLK,
		input [4:0] BTN,
		input [7:0] SW,
		output reg [4:0] MC1,
		output reg [4:0] MC2		
    );

	always @(posedge CLK) begin
		//Direction Control
		case(BTN)
			5'b 1zzzz:begin //Neutral
							MC1[1:0] <= 2'b 01;
							MC2[1:0] <= 2'b 01;
						end
			5'b 00100:begin //Forward
							MC1[1:0] <= 2'b 00;
							MC2[1:0] <= 2'b 00;
						end
			5'b 00010:begin //Reverse
							MC1[1:0] <= 2'b 10;
							MC2[1:0] <= 2'b 10;
						end
			5'b 01000:begin //Stationary Left
							MC1[1:0] <= 2'b 00;
							MC2[1:0] <= 2'b 01;
						end
			5'b 00001:begin //Stationary Right
							MC1[1:0] <= 2'b 01;
							MC2[1:0] <= 2'b 00;
						end
			default:begin //Default Neutral
							MC1[1:0] <= 2'b 01;
							MC2[1:0] <= 2'b 01;
						end
		endcase
		
		//Power Control for MC1
		MC1[4:2] <= SW[2:0];
		
		//Power Control for MC2
		MC2[4:2] <= SW[7:5];
	end

endmodule
