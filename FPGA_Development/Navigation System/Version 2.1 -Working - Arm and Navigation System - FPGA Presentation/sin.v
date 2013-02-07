`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:31 11/20/2012 
// Design Name: 
// Module Name:    sin 
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
module sin(
		input CLK,
		input x,
		output theta
    );
	 
	wire x;
	real theta;
	real x1,y,y2,y3,y5,y7,sum,sign;
	
	always @(posedge CLK) begin
		sign = 1.0;
		x1 = x;
		if(x1 < 0)begin
			x1 = -x1;
			sign = -1.0;
		end
		
		while(x1 > (3.14159265/2.0)) begin
			x1 = x1 - 3.14159265;
			sign = -1.0*sign;
		end
		
		y = (x1*2.0)/3.14159265;
		y2 = y*y;
		y3 = y*y2;
		y5 = y3*y2;
		y7 = y5*y2;
		sum = 1.570794*y - 0.645962*y3 + 0.079692*y5 - 0.004681712*y7;
		theta = (sign*sum*180)/3.14159265;
	end
		
	multiplier your_instance_name (
  .clk(clk), // input clk
  .a(a), // input [17 : 0] a
  .b(b), // input [17 : 0] b
  .p(p) // output [35 : 0] p
);
endmodule
