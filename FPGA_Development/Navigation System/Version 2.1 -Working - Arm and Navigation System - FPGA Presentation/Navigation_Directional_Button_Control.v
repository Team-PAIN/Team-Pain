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
		input [4:0] DIR_STATE, 
		input [4:0] PWM_STATE,
		output reg [4:0] MC1, //Bits 1:0 control Direction, Bits 4:2 Control Power
		output reg [4:0] MC2	 //Bits 1:0 control Direction, Bits 4:2 Control Power
    );
	 
	parameter [4:0] NEUTRAL = 		5'b 00000;
	parameter [4:0] FORWARD = 		5'b 00001;
	parameter [4:0] REVERSE = 		5'b 00010;
	parameter [4:0] FORWARD_RIGHT = 5'b 00011;
	parameter [4:0] BACK_RIGHT = 	5'b 00111;
	parameter [4:0] FORWARD_LEFT = 	5'b 11000;
	parameter [4:0] BACK_LEFT = 		5'b 10000;
	parameter [4:0] R_360 = 			5'b 10011;
	parameter [4:0] L_360 = 			5'b 11001;
	 
	parameter [4:0] BOTH_100 = 	5'b 11111;
	parameter [4:0] BOTH_88 = 		5'b 11011;
	parameter [4:0] BOTH_75 = 		5'b 10111;
	parameter [4:0] BOTH_62 = 		5'b 10011;
	parameter [4:0] BOTH_50 = 		5'b 01111;
	parameter [4:0] BOTH_38 = 		5'b 01011;
	parameter [4:0] BOTH_25 = 		5'b 00111;
	parameter [4:0] BOTH_17 = 		5'b 00011;

	always @(posedge CLK) begin
		//Direction Control
		case(DIR_STATE) //MC1 is on right side, MC2 is on left side 
			NEUTRAL:begin //Neutral
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 01; //Neutral
						end
			FORWARD:begin //FORWARD
							MC1[1:0] <= 2'b 00; //Forward
							MC2[1:0] <= 2'b 00; //Forward
						end
			REVERSE:begin //REVERSE
							MC1[1:0] <= 2'b 10; //Reverse
							MC2[1:0] <= 2'b 10; //Reverse
						end
			FORWARD_RIGHT:begin //FORWARD RIGHT
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 00; //Forward
						end
			BACK_RIGHT:begin //BACKWARDS RIGHT
							MC1[1:0] <= 2'b 10; //Reverse
							MC2[1:0] <= 2'b 01; //Neutral
						end
			FORWARD_LEFT:begin //FORWARD LEFT
							MC1[1:0] <= 2'b 00; //Forward
							MC2[1:0] <= 2'b 01; //Neutral
						end
			BACK_LEFT:begin //BACKWARDS LEFT
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 10; //Reverse
						end
			R_360:begin //Right 360
						MC1[1:0] <= 2'b 10; //Reverse
						MC2[1:0] <= 2'b 00; //Forward
			end
			L_360:begin //Left 360
						MC1[1:0] <= 2'b 00; //Forward
						MC2[1:0] <= 2'b 10; //Reverse
			end
			default:begin //Default Neutral
							MC1[1:0] <= 2'b 01; //Neutral
							MC2[1:0] <= 2'b 01; //Neutral
						end
		endcase
		
		//Power Control
		if(PWM_STATE[1:0] == 2'b 11) begin //Both MC Receive Same Power
			MC1[4:2] <= PWM_STATE[4:2];
			MC2[4:2] <= PWM_STATE[4:2];
		end else begin //Default Power for both MC 12.5%
			MC1[4:2] <= 3'b 111;
			MC2[4:2] <= 3'b 111;
		end
		
		
	end

endmodule
