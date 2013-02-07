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
	MCP = 5'b00001;
	end

	always @(posedge CLK) begin
		if(count < 8800000)
			count <= count + 1;
		else begin
			count <= 0;
			
			if(CURRENT_MC[1:0] == DESIRED_MC[1:0]) begin
				if(CURRENT_MC[4:2] > DESIRED_MC[4:2])
					MCP[4:2] <= CURRENT_MC[4:2] - 1;
				else if (CURRENT_MC[4:2] < DESIRED_MC[4:2])
					MCP[4:2] <= CURRENT_MC[4:2] + 1;
				else
					MCP <= CURRENT_MC;
			end
			else begin
				if(CURRENT_MC[1:0] == 2'b01)
					
					MCP <= {3'b 111,DESIRED_MC[1:0]};
				else
					if(CURRENT_MC[4:2] < 3'b1111)
						MCP[4:2] <= CURRENT_MC[4:2] + 1;
					else 
						MCP[1:0] <= 2'b01;	
			end
		end
	end

endmodule
