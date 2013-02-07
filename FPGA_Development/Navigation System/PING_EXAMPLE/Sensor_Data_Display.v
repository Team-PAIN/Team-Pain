`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:   16:21:05 09/24/2012 
// Design Name: 	Yosvany Alonso
// Module Name:    SevenDisplay 
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
module SevenDisplay(
	 input CLK,
	 input [2:1] SCLK,
    input [15:0] DISPLAY,
    output reg [7:0] SSEG_CA,
    output reg [3:0] SSEG_AN
    );
	
	//Set Display SettingS
	reg [7:0] SSEG_DISPLAY [15:0];
	reg [3:0] SSEG_LED [3:0];
	
	initial begin
		SSEG_DISPLAY [0] = 8'b 11000000; //0
		SSEG_DISPLAY [1] = 8'b 11111001; //1
		SSEG_DISPLAY [2] = 8'b 10100100; //2
		SSEG_DISPLAY [3] = 8'b 10110000; //3
		SSEG_DISPLAY [4] = 8'b 10011001; //4
		SSEG_DISPLAY [5] = 8'b 10010010; //5
		SSEG_DISPLAY [6] = 8'b 10000010; //6
		SSEG_DISPLAY [7] = 8'b 11111000; //7
		SSEG_DISPLAY [8] = 8'b 10000000; //8
		SSEG_DISPLAY [9] = 8'b 10011000; //9
		SSEG_DISPLAY [10] = 8'b 10001000; //A
		SSEG_DISPLAY [11] = 8'b 10000011; //B
		SSEG_DISPLAY [12] = 8'b 11000110; //C
		SSEG_DISPLAY [13] = 8'b 10100001; //D
		SSEG_DISPLAY [14] = 8'b 10000110; //E
		SSEG_DISPLAY [15] = 8'b 10001110;  //F
		SSEG_LED [0] = 4'b 1110; //Right Most SSEG
		SSEG_LED [1] = 4'b 1101; 
		SSEG_LED [2] = 4'b 1011;
		SSEG_LED [3] = 4'b 0111; //Left Most SSEG
	end 	

	always @(posedge CLK) begin
		//Cycle through each Seven Segment Display
		case (SCLK)
			0: begin
					SSEG_AN <= SSEG_LED[SCLK];
					SSEG_CA <= SSEG_DISPLAY[DISPLAY[3:0]];
				end
			1: begin 
					SSEG_AN <= SSEG_LED[SCLK];
					SSEG_CA <= SSEG_DISPLAY[DISPLAY[7:4]];
				end
			2: begin 
					SSEG_AN <= SSEG_LED[SCLK];
					SSEG_CA <= SSEG_DISPLAY[DISPLAY[11:8]];
				end
			3: begin 
					SSEG_AN <= SSEG_LED[SCLK];
					SSEG_CA <= SSEG_DISPLAY[DISPLAY[15:12]];
				end
		endcase
	end

endmodule
