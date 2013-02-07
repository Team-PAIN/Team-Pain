`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:18:22 10/24/2012 
// Design Name: 	
// Module Name:    Navigation 
// Project Name: 
// Target Devices: Nexys 3 
// Tool versions: 
// Description: Provides Navigational Processing of Motor Controller with the data from 2 Ultrasonic
//	Sensors. Displaying the reading in the seven-segment display. 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Navigation(
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
		output [3:0] SSEG_AN
    );
	 
	reg [18:0] count;
	wire SCLK_50MHz,DEBOUCED_SCLK;
	wire [4:0] MC1,MC2;
	wire [7:0] DISTANCE_FRONT, DISTANCE_BACK, DISTANCE_SIDE_BACK, DISTANCE_SIDE_FRONT;
	wire [7:0] ANGLE;
	wire [1:0] ANGLE_DIRECTION;
	reg [4:0] DIR_STATE, PWM_STATE;
	
	reg [7:0] tmp_distance;
	reg [1:0] state;
	
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
	 
	initial begin
		count = 0;
		state = 0;
	end
	
	assign SCLK_50MHz = count[0]; //50 MHz Signal for US sensors
	assign DEBOUCED_SCLK = count[16];
			 
			 
	//Display of Data
	SevenDisplay DataDisplay (
		 .CLK(CLK), 
		 .SCLK(count[16:15]), 
		 .DISPLAY({DISTANCE_SIDE_BACK,DISTANCE_FRONT}), 
		 .SSEG_CA(SSEG_CA), 
		 .SSEG_AN(SSEG_AN)
		 );
		 
	//Directional and Power Controller using directional buttons
	direction_control CONTROL (
		 .CLK(CLK), 
		 .DIR_STATE(DIR_STATE), 
		 .PWM_STATE(PWM_STATE), 
		 .MC1(MC1), 
		 .MC2(MC2)
		 );
	
	//Motor Controller Signal Manager
	mc MC(
		 .CLK(CLK), 
		 .DESIRED_MC1(MC1), 
		 .DESIRED_MC2(MC2), 
		 .PWM_MC1(PWM_MC1),
		 .PWM_MC2(PWM_MC2)
		 );

	// Instantiate the module
	// Instantiate the module
	US_Sensors US_DATA (
    .CLK(CLK), 
    .SIG1(US_SIDE_BACK), 
    .SIG2(US_SIDE_FRONT), 
    .SIG3(US_FRONT), 
    .SIG4(US_BACK), 
    .SCLK_50MHz(SCLK_50MHz), 
    .DEBOUCED_SCLK(DEBOUCED_SCLK), 
    .ANGLE(ANGLE), 
    .ANGLE_DIRECTION(ANGLE_DIRECTION), 
    .DISTANCE1_DEBOUNCED(DISTANCE_SIDE_BACK), 
    .DISTANCE2_DEBOUNCED(DISTANCE_SIDE_FRONT), 
    .DISTANCE3_DEBOUNCED(DISTANCE_FRONT), 
    .DISTANCE4_DEBOUNCED(DISTANCE_BACK)
    );
	
	 	
	//Counter to Display Sensor Data on Seven-Segment Display
	always @(posedge CLK) begin
		
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
				16:DIR_STATE <= R_360;
				default:DIR_STATE <= NEUTRAL;
			endcase
			
		end else begin
		
//			if(ANGLE_DIRECTION == 2)begin
//				DIR_STATE <= R_360;
//			end else if(ANGLE_DIRECTION == 1) begin
//				DIR_STATE <= L_360;
//			end else begin
//				if(DISTANCE_FRONT <= 20)begin
//					if(DIR_STATE == FORWARD) begin
//						DIR_STATE <= NEUTRAL;
//					end else begin
//						DIR_STATE <= L_360;
//					end
//				end else begin
//					DIR_STATE <= FORWARD;
//				end
//			end
				
//			case(state)
//				0:	begin
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
//					end
//				1: begin
//						if(ANGLE_DIRECTION == 2)begin
//							DIR_STATE <= R_360;
//						end else if(ANGLE_DIRECTION == 1) begin
//							DIR_STATE <= L_360;
//						end else begin
//							DIR_STATE <= NEUTRAL;
//							state <= state + 1;
//						end
//					end
//				2: begin
//						if(ANGLE_DIRECTION == 0) begin
//							tmp_distance <= DISTANCE_SIDE_FRONT;
//							DIR_STATE <= L_360;
//						end else if((DISTANCE_FRONT <= (tmp_distance+2))&(DISTANCE_FRONT >= (tmp_distance-2))) begin
//							state <= state + 1;
//							DIR_STATE <= NEUTRAL;
//						end else begin
//							DIR_STATE <= L_360;
//						end
//					end
//				3: begin
//						if(ANGLE_DIRECTION == 2)begin
//							DIR_STATE <= R_360;
//						end else if(ANGLE_DIRECTION == 1) begin
//							DIR_STATE <= L_360;
//						end else begin
//							DIR_STATE <= NEUTRAL;
//							state <= state + 1;
//						end
//					end
//			endcase
			
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
