`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:30:03 11/20/2012
// Design Name:   sin
// Module Name:   C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/test2.v
// Project Name:  Version1.1-Working
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sin
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test2;

	// Inputs
	real x;
	reg CLK;
	// Outputs
	real theta;

	

	initial begin
		// Initialize Inputs
		#100;
		x = 1.0;

		// Wait 100 ns for global reset to finish
		#100;
        
		 x = 0;
		 
		 #100;
		 
		 x = 2.0;
		 #100;
        
		 x = 1.7;
		 
		 #100;
		 
		 x = 2.9;
		// Add stimulus here

	end
     // Instantiate the Unit Under Test (UUT)
	sin uut (
		.CLK(CLK),
		.x(x), 
		.theta(theta)
	); 
endmodule

