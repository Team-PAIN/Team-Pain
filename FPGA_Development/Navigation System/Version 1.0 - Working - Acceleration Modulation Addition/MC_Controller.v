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
	input [4:0] DESIRED_MC1,
	input [4:0] DESIRED_MC2,
	output PWM
    );
	 
	wire [4:0] MC1,MC2;
	
	pulseout MCSignal (
		 .CLK(CLK), 
		 .MC1(MC1), 
		 .MC2(MC2),
		 .PWM(PWM)
		 );
	
	acceleration_modulation AC_MOD1 (
    .CLK(CLK), 
    .DESIRED_MC(DESIRED_MC1), 
    .CURRENT_MC(MC1), 
    .MCP(MC1)
    );	
	 
	 acceleration_modulation AC_MOD2 (
    .CLK(CLK), 
    .DESIRED_MC(DESIRED_MC2), 
    .CURRENT_MC(MC2), 
    .MCP(MC2)
    );
	
	
endmodule



