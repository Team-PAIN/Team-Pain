`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:18:33 11/27/2012 
// Design Name: 
// Module Name:    Arm 
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
module Arm(
		input CLK,
		input [7:0] SW,
		output reg LED0,
		output wire [2:0] LED,
		output wire CLAW,
		output wire JOINTHIGH,
		output wire JOINTLOW
    );
	 
	reg [27:0] COUNT;	
	reg [19:0] CLAW_DESIRED, JOINTLOW_DESIRED, JOINTHIGH_DESIRED;
	reg [2:0] state;
	reg [2:0] debounce;
	reg JOINTLOW_FLAG0, JOINTHIGH_FLAG0, CLAW_FLAG0;
	reg [1:0] old_flag;
	
	wire CLK_SERVO,new_flag;
	wire JOINTLOW_FLAG, JOINTHIGH_FLAG, CLAW_FLAG;
	
	//Define Parameters for Servo Locations
	parameter CLAW_CLOSE = 199218; //CLAW close = 199219 counts at 100 MHz
	parameter CLAW_OPEN = 1; //CLAW open = 0 counts at 100 MHz
	parameter UPPER_PICKUP = 31248; //Upper Servo position for pick-up at 31248 counts at 100 MHz
	parameter UPPER_DROPOFF = 191394; //Upper Servo upright position for first block at 191394 counts at 100 MHz 
	parameter UPPER_DROPOFF2 = 191200; //Upper Servo upright position with second block at 100Mhz
	parameter LOWER_PICKUP = 183400; //Lower Servo position for pick-up at 183582 counts at 100 MHz
	parameter LOWER_DROPOFF = 113100; //Lower Servo upright position for first block at 113274 counts at 100 MHz(Changed from 113274 to current)
	//parameter LOWER_DROPOFF2 = 113000; //Lower Servo upright position for second block at 113274 counts at 100 MHz
	
	//Define Parameters for States
//	parameter BLOCK1_DROP = 00;
//	parameter BLOCK1_PICK = 01;
//	parameter BLOCK2_DROP = 10;
//	parameter BLOCK2_PICK = 11;	
	
	initial begin
		COUNT = 0;
		state = 0;
		CLAW_DESIRED = CLAW_OPEN; 
		JOINTLOW_DESIRED = UPPER_DROPOFF;
		JOINTHIGH_DESIRED = LOWER_DROPOFF;
	end
	
	assign LED[0] = CLAW_FLAG;
	assign LED[1] = JOINTHIGH_FLAG;
	assign LED[2] = JOINTLOW_FLAG;
	
	always @(posedge CLK) begin
		if(COUNT >= 2000000) begin
			COUNT <= 0;
		end else begin
			COUNT <= COUNT +1;
		end
		
			case(state)
				0:begin
					if (old_flag[0]==1) begin
						CLAW_DESIRED <= CLAW_OPEN;
						JOINTHIGH_DESIRED <= UPPER_PICKUP;
						JOINTLOW_DESIRED <= LOWER_PICKUP;
					end else begin
						CLAW_DESIRED <= CLAW_CLOSE;
						JOINTHIGH_DESIRED <= UPPER_PICKUP;
						JOINTLOW_DESIRED <= LOWER_PICKUP;
					end
					
					if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce<5)) begin
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
						debounce <= debounce + 1;
					end else if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce==5))begin
						CLAW_FLAG0 <= 0;
						JOINTHIGH_FLAG0 <= 0;
						JOINTLOW_FLAG0 <= 0;
						debounce <= 0;
						state <= state + 1;
					end else begin
						state <= state;
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
					end
				  end
				1:begin
					if (old_flag[0]==1) begin
						CLAW_DESIRED <= CLAW_CLOSE;
						JOINTHIGH_DESIRED <= UPPER_PICKUP;
						JOINTLOW_DESIRED <= LOWER_PICKUP;
					end else begin
						CLAW_DESIRED <= CLAW_OPEN;
						JOINTHIGH_DESIRED <= UPPER_PICKUP;
						JOINTLOW_DESIRED <= LOWER_PICKUP;
					end
					
					if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce<5))begin
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
						debounce <= debounce + 1;
					end else if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce==5))begin
						CLAW_FLAG0 <= 0;
						JOINTHIGH_FLAG0 <= 0;
						JOINTLOW_FLAG0 <= 0;
						debounce <= 0;
						state <= state + 1;
					end else begin
						state <= state;
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
					end
				  end
				2:begin
					if (old_flag[0]==1) begin
						CLAW_DESIRED <= CLAW_CLOSE;
					end else begin
						CLAW_DESIRED <= CLAW_OPEN;
					end
					if (old_flag[1]==1) begin
						JOINTHIGH_DESIRED <= UPPER_DROPOFF2;
					end else begin
						JOINTHIGH_DESIRED <= UPPER_DROPOFF;
					end
					JOINTLOW_DESIRED <= LOWER_DROPOFF;

					if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce<5))begin
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
						debounce <= debounce + 1;
					end else if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce==5))begin
						CLAW_FLAG0 <= 0;
						JOINTHIGH_FLAG0 <= 0;
						JOINTLOW_FLAG0 <= 0;
						debounce <= 0;
						state <= state + 1;
					end else begin
						state <= state;
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
					end
				  end
				3:begin
					if (old_flag[1]==1) begin
						CLAW_DESIRED <= CLAW_CLOSE;
						JOINTHIGH_DESIRED <= UPPER_DROPOFF2;
					end else begin
						CLAW_DESIRED <= CLAW_OPEN;
						JOINTHIGH_DESIRED <= UPPER_DROPOFF;
					end
					JOINTLOW_DESIRED <= LOWER_DROPOFF;
					
					if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce<5))begin
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
						debounce <= debounce + 1;
					end else if ((JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG)&(debounce==5))begin
						debounce <= 0;
						state <= state + 1;
					end else begin
						state <= state;
						CLAW_FLAG0 <= CLAW_FLAG;
						JOINTHIGH_FLAG0 <= JOINTHIGH_FLAG;
						JOINTLOW_FLAG0 <= JOINTLOW_FLAG;
					end
				  end
				4:begin
					CLAW_DESIRED <= CLAW_OPEN;
					JOINTHIGH_DESIRED <= UPPER_DROPOFF;
					JOINTLOW_DESIRED <= LOWER_DROPOFF;
					if(old_flag != new_flag)
						state <= 0;
					else
						state <= state;
					LED0 = !LED0;
					end
			endcase
			
			old_flag <= new_flag;
	end
		
	// Instantiate the module
	Servo claw (
		 .CLK(CLK),
		 .SLK(COUNT[8]), 
		 .COUNT(COUNT),
		 .DESIRED(CLAW_DESIRED), 
		 .PWM(CLAW), 
		 .FLAG(CLAW_FLAG)
		 );
	
	Servo jointhigh (
		 .CLK(CLK),
		 .SLK(COUNT[8]),  
		 .COUNT(COUNT),
		 .DESIRED(JOINTHIGH_DESIRED), 
		 .PWM(JOINTHIGH), 
		 .FLAG(JOINTHIGH_FLAG)
		 );
	
	Servo jointlow (
		 .CLK(CLK),
		 .SLK(COUNT[8]),  
		 .COUNT(COUNT),
		 .DESIRED(JOINTLOW_DESIRED), 
		 .PWM(JOINTLOW), 
		 .FLAG(JOINTLOW_FLAG)
		 );
	// Instantiate the module
debounce sw_debounce (
    .SCLK(COUNT[10]), 
    .IN(SW[1:0]), 
    .OUT(new_flag)
    );
	
endmodule
