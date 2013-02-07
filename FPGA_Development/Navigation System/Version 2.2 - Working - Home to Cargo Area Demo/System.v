`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:46:08 12/02/2012 
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
module System(
		input CLK,
		inout US_FRONT, //Top Side Sensor
		inout US_BACK,	//Bottom Side Sensor
		inout US_SIDE_FRONT, //Left Side, Front Sensor
		inout US_SIDE_BACK,//Left Side, Back Sensor
		input [7:0] SW,
		input [4:0] BTN,
		output PWM, //Pulse to Motor Controllers
		output [7:0] SSEG_CA,
		output [3:0] SSEG_AN,
		output [7:0] LED,
		output CLAW,
		output JOINTHIGH,
		output JOINTLOW
    );

	//*** Sub-Systems ***//
		// Navigational System
		Navigation NAV (
			 .CLK(CLK), 
			 .US_FRONT(US_FRONT), 
			 .US_BACK(US_BACK), 
			 .US_SIDE_FRONT(US_SIDE_FRONT), 
			 .US_SIDE_BACK(US_SIDE_BACK), 
			 .SW(SW), 
			 .BTN(BTN), 
			 .PWM(PWM), 
			 .SSEG_CA(SSEG_CA), 
			 .SSEG_AN(SSEG_AN),
			 .LED(LED[7:4])
			 );

		// Arm System
		Arm ARM (
			 .CLK(CLK), 
			 .SW(SW), 
			 .LED0(LED[0]), 
			 .LED(LED[3:1]), 
			 .CLAW(CLAW), 
			 .JOINTHIGH(JOINTHIGH), 
			 .JOINTLOW(JOINTLOW)
			 );
			 
endmodule
