`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:46:11 11/29/2012 
// Design Name: 
// Module Name:    System 
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
module Systems(
		input CLK,
		inout US_FRONT, //Top Side Sensor
		inout US_BACK,	//Bottom Side Sensor
		inout US_SIDE_FRONT, //Left Side, Front Sensor
		inout US_SIDE_BACK,//Left Side, Back Sensor
		input [7:0] SW,
		input [4:0] BTN,
		output PWM_MC1, //MC1 Pulse Width Modulator
		output PWM_MC2, //MC2 Pulse Width Modulator
		output [7:0] SSEG_CA,
		output [3:0] SSEG_AN,
		output CLAW,
		output JOINTHIGH,
		output JOINTLOW,
		output [3:0] LED
    );

	// Instantiate the module
	Navigation nav (
		 .CLK(CLK), 
		 .US_FRONT(US_FRONT), 
		 .US_BACK(US_BACK), 
		 .US_SIDE_FRONT(US_SIDE_FRONT), 
		 .US_SIDE_BACK(US_SIDE_BACK), 
		 .SW(SW), 
		 .BTN(BTN[3:0]), 
		 .PWM_MC1(PWM_MC1), 
		 .PWM_MC2(PWM_MC2), 
		 .SSEG_CA(SSEG_CA), 
		 .SSEG_AN(SSEG_AN)
		 );
	
	// Instantiate the module
	Arm arm (
		 .CLK(CLK), 
		 .SW(SW), 
		 .BTN(BTN[4]), 
		 .CLAW(CLAW), 
		 .JOINTHIGH(JOINTHIGH), 
		 .JOINTLOW(JOINTLOW)
		 );

endmodule
