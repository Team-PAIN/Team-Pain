/***********************************************************************
*  ping.v
*  Version: 0.1.1 beta
*  RevDate: 2008-08-21
*  
*  Web Site: http://4llamas.com/arr/code
*  Engineer: Justin DeFields (prototyped by Andrew Kalemkarian)
*            Temple University Engineering Department
*   
*  Description:
*  This module creates an FPGA interface with the Parallax PING)))
*  sensor.  It is manually configurable to determine distances in 
*  inches or cenitimeters (see documentation)
*
*  License:
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
***********************************************************************/


module ping(clk, reset, sig, dist, enable);

	input clk;		// 50 MHz Clock
	input reset;	// Synchronous reset - active high
	output [7:0] dist;	// distance output
	inout tri sig;  // bi-directional wire
	output enable;
	
	reg test;
	reg [25:0]count;	// timing counter
	reg [7:0] distCount, inRead;
	reg RW; 			// direction of sig pin(read=1 or 0=write)
	reg WriteData; 		// bit to be latched by sig
	reg [15:0] i; 
	reg ReadData;
	
	parameter INCH = 7231; 		// clk cycles to pass per inch
	parameter CENT = 2847; 		// clk cycles to pass per centimeter
	parameter UNIT_CLKS = CENT;	// set to clk cycles for desired unit
	
	// Parameters based on PING))) specifications
	parameter trigger = 250; 			// 5us = 250 clk cycles
	parameter pause_for_input = 37500; 	// 750us = 37500 clk cycles
	parameter min_input = 1000;//5750;		// 115us = 5750 clk cycles
	parameter max_input = 925000;		// 18500us = 925000 clk cycles
	parameter cycle_time = 1500000;		// 20000us = 1000000 clk cycles
	
	reg ENABLE;
	assign enable = ENABLE;
	
	assign dist[7:0] = inRead[7:0];
	assign sig = RW ? 1'bz : WriteData;

	initial
	begin
			WriteData <= 0;
			count <= 0;
			RW <= 0;
			inRead <= 8'b01010101;
			distCount <= 0;
			i <= 0;
	end
		
	
	always @(posedge clk)
	begin
		
		if((count < cycle_time)  && (reset == 0))begin
			count <= count + 1;
		end else begin
			count <= 0;
		end
		
		if (count < 1000000)begin
			test <= 1;
		end else begin	
			test <= 0;
		end
			
		if (reset == 1)begin  // reset all signals
			ENABLE <=0;
			test <= 0;
			WriteData <= 0;
			count <= 0;
			RW <= 0;
			inRead <= 8'b01010101;
			distCount <= 0;
			i <= 0;
		end else if(count < trigger) begin
			WriteData <= 1;  // send high to sonar when writing
			RW <= 0;      // sig = output
			i <= 0;
			distCount <= 0;
			
			if(count == 1) //insures that enable is registered for at least one clock cycle
				ENABLE <= 0; //We are not ready to transmit length data
			
		end else if(count == trigger)begin
			WriteData <= 0;  // send low to sonar when writing
			RW <= 0;      // sig = output
		end else if(count < (pause_for_input + trigger)) begin
			WriteData <= 0;  // send low to sonar when writing
			RW <= 0;      // sig = output
		end else if(count == (pause_for_input + trigger))begin 
			WriteData <= 0;  // send low to sonar when writing
			RW <= 1;      // sig = input
		end else if(count < (min_input + pause_for_input + trigger))begin
			WriteData <= 0;  // send low to sonar when writing
			RW <= 1;      // sig = input
		end else if(count < (max_input + min_input + pause_for_input + trigger))begin
			WriteData <= 0;  // send low to sonar when writing
			RW <= 1;      // sig = input

			if(sig)begin
				if(i < UNIT_CLKS) // use inch or centimeter variable
					i <= i + 1;
				
				if (i == UNIT_CLKS) begin // use inch or centimeter variable
					distCount <= distCount + 1;
					i <= 0;
				end
			end
		end else if(count == (max_input + min_input + pause_for_input + trigger))begin
			WriteData <= 0;  // send low to sonar when writing
			RW <= 1;      // sig = input
			inRead <= distCount; // THIS IS THE OUTPUT, THE LEDS ARE ATTACHED TO inRead                                                                                                                                                                          
		end else if(count < cycle_time)begin
			WriteData <= 0;  // send low to sonar when writing
			RW <= 1;      // sig = input
		end else begin
			WriteData <= 0;  // send low to sonar when writing
			RW <= 1;      // sig = input
			count <= 0;
			distCount <= 0;
			i <= 0;
			ENABLE <= 1;  // We are ready to transmit length data
		end
		
	end
endmodule
