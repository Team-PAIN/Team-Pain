`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:56:50 10/24/2012 
// Design Name: 
// Module Name:    acceleration_modulation 
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
module acceleration_modulation(
		input CLK,
		input [4:0] DESIRED_MC,
		input [4:0] CURRENT_MC,
		output reg [4:0] MCP 
    );

	reg [24:0] count;
	
	initial begin
		count = 0;
		MCP = 5'b 00001; //Initialize at Neutral State
	end

	always @(posedge CLK) begin
		if(count < 1200000) //Incrementation of Counter
			count <= count + 1;
		else begin //Refresh Every 88 ms = 11 ms (Refresh of MC Signal) * 12 cycle
			count <= 0;
			
			if(CURRENT_MC[1:0] == DESIRED_MC[1:0]) begin //Desired & Current Direction are Same
				if(CURRENT_MC[4:2] < DESIRED_MC[4:2]) //Increase Power
					MCP[4:2] <= CURRENT_MC[4:2] + 1;
				else if (CURRENT_MC[4:2] > DESIRED_MC[4:2]) //Decrease Power
					MCP[4:2] <= CURRENT_MC[4:2] - 1;
				else //Power Stays the Same
					MCP <= CURRENT_MC;
			end else begin //Desired & Current Direction are Different
				if(CURRENT_MC[1:0] == 2'b01) //Motor is Neutral, Set Power to 12.5% and Set Direction
					MCP <= {3'b 000,DESIRED_MC[1:0]};
				else //Motor is Not Neutral
					if(CURRENT_MC[4:2] > 3'b000) //Decrement Power Since You Need to Transition to a New Direction
						MCP[4:2] <= CURRENT_MC[4:2] - 1;
					else //Set Direction to Neutral
						MCP[1:0] <= 2'b01;	
			end
		end
	end

endmodule
