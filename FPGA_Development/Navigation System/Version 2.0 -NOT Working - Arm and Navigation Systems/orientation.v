`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:33 11/25/2012 
// Design Name: 
// Module Name:    orientation 
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
module orientation(
		input CLK,
		input [7:0] DIST1,
		input [7:0] DIST2,
		output reg [7:0] ANGLE,
		output reg [1:0] DIRECTION 
    );
	
	reg [7:0] X;
	
	always @(posedge CLK) begin
		if(DIST1 < DIST2) begin //Positive Side of Angle
			X <= DIST2-DIST1;
			DIRECTION <= 2'b 01; 
		end else if(DIST1 > DIST2)begin //Negative Side of Angle
			X <= DIST1-DIST2;
			DIRECTION <= 2'b 10; 
		end else if (DIST1 == DIST2) begin //Equal Distance, Angle is Zero
			X <= 0;
			DIRECTION <= 2'b 00;
		end else begin //BAD DATA
			X <= 2'h FF;
			DIRECTION <= 2'b 11;
		end
		
		case(X) //Table of angle definition, based off excel table of calculated angle using atan() function
			0: ANGLE <= 	0;
			1: ANGLE <=		2;
			2: ANGLE <=		4;
			3: ANGLE <=		6;
			4: ANGLE <=		8;
			5: ANGLE <=		10;
			6: ANGLE <=		12;
			7: ANGLE <=		14;
			8: ANGLE <=		16;
			9: ANGLE <=		18;
			10: ANGLE <=	20;
			11: ANGLE <=	21;
			12: ANGLE <=	23;
			13: ANGLE <=	25;
			14: ANGLE <=	27;
			15: ANGLE <=	28;
			16: ANGLE <=	30;
			17: ANGLE <=	31;
			18: ANGLE <=	33;
			19: ANGLE <=	34;
			20: ANGLE <=	36;
			21: ANGLE <=	37;
			22: ANGLE <=	38;
			23: ANGLE <=	39;
			24: ANGLE <=	41;
			25: ANGLE <=	42;
			26: ANGLE <=	43;
			27: ANGLE <=	44;
			28: ANGLE <=	45;
			29: ANGLE <=	46;
			30: ANGLE <=	47;
			31: ANGLE <=	48;
			32: ANGLE <=	49;
			33: ANGLE <=	50;
			34: ANGLE <=	51;
			35: ANGLE <=	51;
			36: ANGLE <=	52;
			37: ANGLE <=	53;
			38: ANGLE <=	54;
			39: ANGLE <=	54;
			40: ANGLE <=	55;
			41: ANGLE <=	56;
			42: ANGLE <=	56;
			43: ANGLE <=	57;
			44: ANGLE <=	58;
			45: ANGLE <=	58;
			46: ANGLE <=	59;
			47: ANGLE <=	59;
			48: ANGLE <=	60;
			49: ANGLE <=	60;
			50: ANGLE <=	61;
			51: ANGLE <=	61;
			52: ANGLE <=	62;
			53: ANGLE <=	62;
			54: ANGLE <=	63;
			55: ANGLE <=	63;
			56: ANGLE <=	63;
			57: ANGLE <=	64;
			58: ANGLE <=	64;
			59: ANGLE <=	65;
			60: ANGLE <=	65;
			61: ANGLE <=	65;
			62: ANGLE <=	66;
			63: ANGLE <=	66;
			64: ANGLE <=	66;
			65: ANGLE <=	67;
			66: ANGLE <=	67;
			67: ANGLE <=	67;
			68: ANGLE <=	68;
			69: ANGLE <=	68;
			70: ANGLE <=	68;
			default:ANGLE <= 2'h FF;
		endcase
	end

endmodule
