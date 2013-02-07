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
	reg [7:0] tmp_distance;
	reg ARM_FLAG;
	
	reg [18:0] count;
	wire SCLK_50MHz,DEBOUCED_SCLK;
	wire [4:0] MC1,MC2; //Current Status of Motor Controllers
	wire [7:0] DISTANCE_FRONT, DISTANCE_BACK, DISTANCE_SIDE_BACK, DISTANCE_SIDE_FRONT;
	wire [7:0] ANGLE;
	wire [1:0] ANGLE_DIRECTION;
	reg [4:0] DIR_STATE, PWM_STATE;
	
	parameter [4:0] NEUTRAL = 			5'b 00000;
	parameter [4:0] FORWARD = 			5'b 00001;
	parameter [4:0] REVERSE = 			5'b 00010;
	parameter [4:0] FORWARD_RIGHT = 	5'b 00011;
	parameter [4:0] BACK_RIGHT = 		5'b 00111;
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
	
	assign SCLK_50MHz = count[0]; //50 MHz Signal for US sensors
	assign DEBOUCED_SCLK = count[16];
	
	
	initial begin
		count = 0;
	end
	// Instantiate the module
	Navigation NAV_SYSTEM (
		 .CLK(CLK), 
		 .SCLK_50MHz(SCLK_50MHz), 
		 .DEBOUCED_SCLK(DEBOUCED_SCLK), 
		 .US_FRONT(US_FRONT), 
		 .US_BACK(US_BACK), 
		 .US_SIDE_FRONT(US_SIDE_FRONT), 
		 .US_SIDE_BACK(US_SIDE_BACK), 
		 .DIR_STATE(DIR_STATE), 
		 .PWM_STATE(PWM_STATE), 
		 .PWM_MC1(PWM_MC1), 
		 .PWM_MC2(PWM_MC2), 
		 .DISTANCE_FRONT(DISTANCE_FRONT), 
		 .DISTANCE_BACK(DISTANCE_BACK), 
		 .DISTANCE_SIDE_BACK(DISTANCE_SIDE_BACK), 
		 .DISTANCE_SIDE_FRONT(DISTANCE_SIDE_FRONT), 
		 .ANGLE(ANGLE), 
		 .ANGLE_DIRECTION(ANGLE_DIRECTION), 
		 .MC1(MC1), 
		 .MC2(MC2)
		 );

		 
		 //Display of Data
	SevenDisplay DataDisplay (
		 .CLK(CLK), 
		 .SCLK(count[16:15]), 
		 .DISPLAY({DISTANCE_SIDE_BACK,DISTANCE_FRONT}), 
		 .SSEG_CA(SSEG_CA), 
		 .SSEG_AN(SSEG_AN)
		 );
		 
	
	// Instantiate the module
	Arm ARM_SYSTEM (
		 .CLK(CLK), 
		 .START_FLAG(ARM_FLAG),
		 .LED0(LED[0]), 
		 .LED(LED[3:1]), 
		 .CLAW(CLAW), 
		 .JOINTHIGH(JOINTHIGH), 
		 .JOINTLOW(JOINTLOW)
		 );
	

	//Counter to Display Sensor Data on Seven-Segment Display
	always @(posedge CLK) begin
		ARM_FLAG <= BTN[4];
		
		if(count >= 262100) //262100 Fits in an 18 bit reg
			count <= 0;
		else
			count <= count + 1;	 
			
		if (SW[7]) begin
			case(BTN)
				1:DIR_STATE <= FORWARD_RIGHT;
				2:DIR_STATE <= REVERSE;
				4:DIR_STATE <= FORWARD;
				8:DIR_STATE <= FORWARD_LEFT;
//				16:DIR_STATE <= R_360;
				default:DIR_STATE <= NEUTRAL;
			endcase
				
		end else begin
			if((DISTANCE_FRONT <= 25)|(DISTANCE_SIDE_FRONT <= 25)) begin
				DIR_STATE <= NEUTRAL;
				if(DISTANCE_SIDE_FRONT <= 25)begin
					DIR_STATE <= BACK_RIGHT;
				end else begin
					DIR_STATE <= BACK_LEFT;
				end
			end else begin
				DIR_STATE <= FORWARD;
			end
		end
			
		if(SW == 0)
			PWM_STATE <= BOTH_17;
		else if(SW == 1)
			PWM_STATE <= BOTH_25;
		else if(SW == 2)
			PWM_STATE <= BOTH_38;
		else if(SW == 4)
			PWM_STATE <= BOTH_50;
		else if(SW == 8)
			PWM_STATE <= BOTH_62;
		else if(SW == 16)
			PWM_STATE <= BOTH_75;
		else
			PWM_STATE <= BOTH_17;
	end
endmodule
