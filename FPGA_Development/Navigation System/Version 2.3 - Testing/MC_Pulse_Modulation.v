`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:43 10/22/2012 
// Design Name: 
// Module Name:    PullseModulation 
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
module PulseModulation1(
	input CLK,
	input [4:0] ModInfo,
	input [4:0] State,
	output reg[20:0] Pulse
	);
	parameter [27:0] CLK_RATE = 100000000; //Clock Rate, 100 MHz for Nexys 3
	reg [19:0] direction [2:0];

	initial begin
		direction[0] = CLK_RATE/1000; //Forward, 1 ms
		direction[1] = 150000;  //CLK_RATE/667, Neutral, 1.5 ms
		direction[2] = CLK_RATE/500; //Reverse, 2 ms
	end
	
	always @(posedge CLK) begin
		case(ModInfo[4:2]) //Bits with PWM info
			0: case(State) //8.33% of Power
					0:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			1: case(State) //16.67% of Power
					0,6:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			2:	case(State) //25% of Power
					0,4,8:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			3:	case(State) //37.5% of Power
					0,3,6,9:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			4:	case(State) //50% of Power
					1,2,5,7,10:Pulse <= direction[1]; //Neutral(off) state
					default:Pulse <= direction[ModInfo[1:0]];
				endcase
			5:	case(State) //62.5% of Power
					1,4,6,9,11,14,16,19,23:Pulse <= direction[1]; //Neutral(off) state
					default:Pulse <= direction[ModInfo[1:0]];
				endcase
			6:	case(State) //75% of Power
					3,7,11,15,19,23:Pulse <= direction[1]; //Neutral(off) state
					default:Pulse <= direction[ModInfo[1:0]];
				endcase
			7:	case(State) //87.5% of Power
					7,15,23:Pulse <= direction[1]; //Neutral(off) state
					default:Pulse <= direction[ModInfo[1:0]];
				endcase
		endcase		
	end
endmodule
