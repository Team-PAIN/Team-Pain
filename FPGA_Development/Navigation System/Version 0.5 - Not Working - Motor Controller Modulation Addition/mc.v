`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:52:20 10/21/2012 
// Design Name: 
// Module Name:    mc 
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
module mc(
	input CLK,
	input [4:0] MC1,
	input [4:0] MC2,
	output PWM
    );
	 
	pulseout MCSignal (
		 .CLK(CLK), 
		 .MC1(MC1), 
		 .MC2(MC2),
		 .PWM(PWM)
		 );
		 

endmodule



