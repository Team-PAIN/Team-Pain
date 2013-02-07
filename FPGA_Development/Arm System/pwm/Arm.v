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
		input [3:0] SW,
		output reg LED0,
		output wire [3:1]LED,
		output wire CLAW,
		output wire JOINTHIGH,
		output wire JOINTLOW
    );
	 
	reg [27:0] COUNT;	
	reg [19:0] CLAW_DESIRED, JOINTLOW_DESIRED, JOINTHIGH_DESIRED;
	reg [2:0] state;																//Hold the state of the arm
	reg [2:0] debounce;															//Used to count the times a flag has been raised consecutively
	reg JOINTLOW_FLAG0, JOINTHIGH_FLAG0, CLAW_FLAG0;
	
	wire CLK_SERVO;
	wire JOINTLOW_FLAG, JOINTHIGH_FLAG, CLAW_FLAG;
	
	parameter CLAW_CLOSE = 199218; 		//CLAW close = 199219 counts at 100 MHz
	parameter CLAW_OPEN = 1; 				//CLAW open = 0 counts at 100 MHz
	parameter UPPER_PICKUP = 31248; 		//Upper Pick up block at 31248 counts at 100 MHz
	parameter UPPER_DROPOFF = 191394; 	//Upper Drop block at 191394 counts at 100 MHz
	parameter LOWER_PICKUP = 183400; 	//Lower Pick up block at 183582 counts at 100 MHz*
	parameter LOWER_DROPOFF = 113274; 	//Lower Drop block at 113274 counts at 100 MHz
	
	initial begin
		COUNT = 0;
		state = 0;
		CLAW_DESIRED = CLAW_OPEN; 
		JOINTLOW_DESIRED = UPPER_DROPOFF;
		JOINTHIGH_DESIRED = LOWER_DROPOFF;
	end
	
	assign LED[1] = CLAW_FLAG;
	assign LED[2] = JOINTHIGH_FLAG;
	assign LED[3] = JOINTLOW_FLAG;
	
	always @(posedge CLK) begin			//Create a 2ms clock for the PWM signal frequency,
		if(COUNT >= 2000000) begin			//since 2ms is the frequency expected by the servo.
			COUNT <= 0;
		end else begin
			COUNT <= COUNT +1;
		end
		
//		if(BTN | (state != 0))
			case(state)
				0:begin
					CLAW_DESIRED <= CLAW_OPEN;
					JOINTHIGH_DESIRED <= UPPER_PICKUP;
					JOINTLOW_DESIRED <= LOWER_PICKUP;
					
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
					JOINTHIGH_DESIRED <= UPPER_PICKUP;
					JOINTLOW_DESIRED <= LOWER_PICKUP;
					
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
					
					state <= state;
					LED0 = !LED0;
					end
			endcase
	end
		
	// Instantiate the module
	Servo claw (
		 .CLK(CLK),
		 .SLK(COUNT[8]), //1.28us slow clock
		 .COUNT(COUNT),
		 .DESIRED(CLAW_DESIRED), 
		 .PWM(CLAW), 
		 .FLAG(CLAW_FLAG)
		 );
	
	Servo jointhigh (
		 .CLK(CLK),
		 .SLK(COUNT[8]),  //1.28us slow clock
		 .COUNT(COUNT),
		 .DESIRED(JOINTHIGH_DESIRED), 
		 .PWM(JOINTHIGH), 
		 .FLAG(JOINTHIGH_FLAG)
		 );
	
	Servo jointlow (
		 .CLK(CLK),
		 .SLK(COUNT[8]),  //1.28us slow clock
		 .COUNT(COUNT),
		 .DESIRED(JOINTLOW_DESIRED), 
		 .PWM(JOINTLOW), 
		 .FLAG(JOINTLOW_FLAG)
		 );
	
endmodule
