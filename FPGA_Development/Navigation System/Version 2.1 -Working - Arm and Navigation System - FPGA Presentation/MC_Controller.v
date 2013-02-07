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
	output PWM_MC1,
	output PWM_MC2
    );
	 
	wire [4:0] MC1,MC2;
	
	//Sends Continious Signal to Motor Controller
	pulseout MCSignal (
		 .CLK(CLK), 
		 .MC1(MC1), 
		 .MC2(MC2),
		 .PWM_MC1(PWM_MC1),
		 .PWM_MC2(PWM_MC2)
		 );
	
	//Regulates How Motor #1 Accelerates and De-accelerate
	acceleration_modulation AC_MOD1 (
    .CLK(CLK), 
    .DESIRED_MC(DESIRED_MC1), 
    .CURRENT_MC(MC1), 
    .MCP(MC1)
    );	
	 
	 //Regulates How Motor #2 Accelerates and De-accelerate
	 acceleration_modulation AC_MOD2 (
    .CLK(CLK), 
    .DESIRED_MC(DESIRED_MC2), 
    .CURRENT_MC(MC2), 
    .MCP(MC2)
    );
	
endmodule



