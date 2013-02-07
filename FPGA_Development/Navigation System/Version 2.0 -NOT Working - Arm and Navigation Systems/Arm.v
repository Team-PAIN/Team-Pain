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
		input BTN,
		output wire CLAW,
		output wire JOINTHIGH,
		output wire JOINTLOW
    );
	 
	reg [27:0] COUNT;	
	reg [19:0] CLAW_DESIRED, JOINTLOW_DESIRED, JOINTHIGH_DESIRED;
	reg [2:0] state;
	reg [2:0] debounce;
	reg JOINTLOW_FLAG0, JOINTHIGH_FLAG0, CLAW_FLAG0;
	reg go_flag;
	
	wire JOINTLOW_FLAG, JOINTHIGH_FLAG, CLAW_FLAG;
	
	parameter CLAW_CLOSE = 199218; //CLAW close = 199219 counts at 100 MHz
	parameter CLAW_OPEN = 1; //CLAW open = 0 counts at 100 MHz
	parameter UPPER_PICKUP = 31248; //Upper Pick up block at 31248 counts at 100 MHz
	parameter UPPER_DROPOFF = 191394; //Upper Drop block at 191394 counts at 100 MHz
	parameter LOWER_PICKUP = 183400; //Lower Pick up block at 183582 counts at 100 MHz*
	parameter LOWER_DROPOFF = 113274; //Lower Drop block at 113274 counts at 100 MHz
	
	initial begin
		debounce = 0;
		COUNT = 0;
		state = 0;
		CLAW_DESIRED = CLAW_OPEN; 
		JOINTLOW_DESIRED = UPPER_DROPOFF;
		JOINTHIGH_DESIRED = LOWER_DROPOFF;
		go_flag = 0;
	end
	
	
	always @(posedge CLK) begin
		if(COUNT >= 2000000) begin
			COUNT <= 0;
		end else begin
			COUNT <= COUNT +1;
		end
		if(SW[7] & BTN)begin
			go_flag <= 1;
		end
		
		if(go_flag) begin
			case(state)
				0:begin
					CLAW_DESIRED <= CLAW_OPEN;
//					if(CLAW_FLAG)
//						state <= 1;
					JOINTHIGH_DESIRED <= UPPER_PICKUP;
					JOINTLOW_DESIRED <= LOWER_PICKUP;
					
//					state <= (JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG) ? state + 1 : state;
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
					CLAW_DESIRED <= CLAW_CLOSE;
//					if(CLAW_FLAG)
//						state <= 0;
					JOINTHIGH_DESIRED <= UPPER_PICKUP;
					JOINTLOW_DESIRED <= LOWER_PICKUP;
					
//					state <= (JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG) ? state + 1 : state;
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
					CLAW_DESIRED <= CLAW_CLOSE;
					JOINTHIGH_DESIRED <= UPPER_DROPOFF;
					JOINTLOW_DESIRED <= LOWER_DROPOFF;
					
//					state <= (JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG) ? state + 1 : state;
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
					CLAW_DESIRED <= CLAW_OPEN;
					JOINTHIGH_DESIRED <= UPPER_DROPOFF;
					JOINTLOW_DESIRED <= LOWER_DROPOFF;
					
//					state <= (JOINTLOW_FLAG & JOINTHIGH_FLAG & CLAW_FLAG) ? state + 1 : state;
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
					go_flag <= 0;
					state <= 0;
					end
			endcase
		end
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
	
endmodule
