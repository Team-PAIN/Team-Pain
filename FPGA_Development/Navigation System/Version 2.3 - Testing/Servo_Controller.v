`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:57:33 11/26/2012 
// Design Name: 
// Module Name:    Servo_Controller 
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
module Servo_Controller(
		input CLK,
		input [7:0]SW,
		input [4:0] BTN,
		output reg CLAW,
		output reg JOINTHIGH,
		output reg JOINTLOW
    );

	reg [21:0]count = 0;
	reg [21:0]count_hi = 0;
	reg [7:0] CLAW_value,JOINTHIGH_value, JOINTLOW_value;
	wire DESIRED;
	
	initial begin
		CLAW_value = 0;
		JOINTHIGH_value = 0;
		JOINTLOW_value = 0;
	end
	
	

	assign DESIRED = 180/SW;
	
	always@(posedge CLK) begin
			
			if(count <= 2000000)
				count <= count + 1 ;
			else
				count <= 0;
	
		case(BTN)  
			4: begin 
					if(CLAW_value < DESIRED)
						CLAW_value <= CLAW_value + 1;
					else if(CLAW_value > DESIRED)
						CLAW_value <= CLAW_value - 1;
					else 
						CLAW_value <= CLAW_value;
						
					CLAW <= (count < (100000 + 555 * CLAW_value))? 1:0;
				end
			1: begin 
					if(JOINTHIGH_value < DESIRED)
						JOINTHIGH_value <= JOINTHIGH_value + 1;
					else if(JOINTHIGH_value > DESIRED)
						JOINTHIGH_value <= JOINTHIGH_value - 1;
					else 
						JOINTHIGH_value <= JOINTHIGH_value;
					
					JOINTHIGH <= (count < (100000 + 555 * JOINTHIGH_value))? 1:0;
				end
			2: begin 
					if(JOINTLOW_value < DESIRED)
						JOINTLOW_value <= JOINTLOW_value + 1;
					else if(JOINTLOW_value > DESIRED)
						JOINTLOW_value <= JOINTLOW_value - 1;
					else 
						JOINTLOW_value <= JOINTLOW_value;
						
					JOINTLOW <= (count < (100000 + 555 * JOINTLOW_value))? 1:0;
				end
				
		endcase
	end
endmodule
