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
module PulseModulation2(
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
			0:case(State) //8.33% of Power
					0,12:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			1: case(State) //12.5% of Power
					0,9,18:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			2: case(State) //16.67% of Power
					0,6,12,18:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			3:	case(State) //20.83% of Power
					0,5,10,15,20:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			4:	case(State) //25.0% of Power
					0,4,8,12,16,20:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			5:	case(State) //29.17% of Power
					0,4,7,11,14,18,21:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			6:	case(State) //33.33% of Power
					0,3,6,9,12,15,18,21:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			7: case(State) //37.50% of Power
					0,3,6,8,11,14,16,19,22:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
			8: case(State) //41.67% of Power
					0,3,5,8,10,13,15,18,20,22:Pulse <= direction[ModInfo[1:0]];
					default:Pulse <= direction[1]; //Neutral(off) state
				endcase
//			0: case(State) //16.67% of Power
//					0,6,12,18:Pulse <= direction[ModInfo[1:0]];
//					default:Pulse <= direction[1]; //Neutral(off) state
//				endcase
//			1: case(State) //20.83% of Power
//					0,5,10,15,20:Pulse <= direction[ModInfo[1:0]];
//					default:Pulse <= direction[1]; //Neutral(off) state
//				endcase
//			0: case(State) //20.83% of Power
//					0,5,10,15,20:Pulse <= direction[ModInfo[1:0]];
//					default:Pulse <= direction[1]; //Neutral(off) state
//				endcase
//			1: case(State) //25% of Power
//					0,4,9,14,18,22:Pulse <= direction[ModInfo[1:0]];
//					default:Pulse <= direction[1]; //Neutral(off) state
//				endcase
//			2:	case(State) //29.17% of Power
//					0,4,7,9,14,18,22:Pulse <= direction[ModInfo[1:0]];
//					default:Pulse <= direction[1]; //Neutral(off) state
//				endcase
//			3:	case(State) //41.67% of Power
//					0,3,6,9,11,12,15,18,21,23:Pulse <= direction[ModInfo[1:0]];
//					default:Pulse <= direction[1]; //Neutral(off) state
//				endcase
//			4:	case(State) //54.17% of Power
//					1,3,5,7,9,10,11,13,15,17,18,19,21,23:Pulse <= direction[1]; //Neutral(off) state
//					default:Pulse <= direction[ModInfo[1:0]];
//				endcase
//			5:	case(State) //66.67% of Power
//					1,4,6,9,14,16,19,23:Pulse <= direction[1]; //Neutral(off) state
//					default:Pulse <= direction[ModInfo[1:0]];
//				endcase
//			6:	case(State) //79.17% of Power
//					3,7,11,19,23:Pulse <= direction[1]; //Neutral(off) state
//					default:Pulse <= direction[ModInfo[1:0]];
//				endcase
//			7:	case(State) //91.67% of Power
//					7,15:Pulse <= direction[1]; //Neutral(off) state
//					default:Pulse <= direction[ModInfo[1:0]];
//				endcase
			//8:Pulse <= direction[ModInfo[1:0]]; //No PWM, 100% of Power		
		endcase		
	end
endmodule
