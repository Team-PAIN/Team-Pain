`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:50:49 11/27/2012 
// Design Name: 
// Module Name:    localization 
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
module localization(
		input CLK,
		input [7:0] ANGLE,
		input [1:0] ANGLE_DIRECTION,
		input [7:0] DISTANCE_FRONT,
		input [7:0] DISTANCE_SIDE_FRONT,
		input [7:0] DISTANCE_SIDE_BACK,
		input [7:0] COMMAND,
		input [1:0] TILT,
		input [7:0] INITIAL_X,
		input [7:0] INITIAL_Y,
		output reg [1:0] ORIENTATION,
		output reg [2:0] SECTOR
		);
		
		reg [4:0] old_command;
		reg [7:0] X_A_B, X_B_A, Y_A_C;
		reg [7:0] COURSE_W_2_E, COURSE_N_2_S_SECTORS_AC, COURSE_N_2_S_SECTOR_B;
		reg [7:0] MISSING_X_B, MISSING_Y_A, MISSING_Y_B;
		reg [7:0] S_1, S_2, S_3, S_4, S_5, S_6; 
		reg [7:0] R_1, R_2, R_3, R_4, R_5, R_6;
		reg [7:0] C_1, C_2, C_3, C_4, C_5, C_6, C_7, C_8, C_9, C_10, C_11, C_12, C_13, C_14;
		
		// Robot Size Parameters  *************************************
		parameter [7:0] ROBOT_SIZE_W_2_E = 8'b 00011010; //26 cm
		parameter [7:0] ROBOT_SIZE_N_2_S = 8'b 00011100; //28 cm
		
		// Course Parameters
		parameter [7:0] START_COVERAGE 		= 8'b 00100000; //12.5 inches = 31.75 cm ~= 32 cm
		parameter [7:0] SEA_COVERAGE 			= 8'b 00101111; //18.5 inches = 46.99 cm ~= 47 cm
		parameter [7:0] CARGO_AREA_COVERAGE = 8'b 01101100; //42.5 inches = 107.95 cm ~= 108 cm
		parameter [7:0] RAIL_COVERAGE 		= 8'b 00101111; //18.5 inches = 46.99 cm ~= 47 cm
		parameter [7:0] ZONE_SEPERATION		= 8'b 00001000; //3 inches = 7.62 cm ~= 8 cm
		
		//	Command Parameters
		parameter [4:0] TURN_RIGHT = 5'b 01100;
		parameter [4:0] TURN_LEFT 	= 5'b 00110;
		parameter [4:0] STRAIGHT 	= 5'b 01110;
		
		// Orientation Parameters
		parameter [1:0] NORTH 	= 2'b 00; //0 represents North
		parameter [1:0] EAST 	= 2'b 01; //1 represents East
		parameter [1:0] SOUTH 	= 2'b 10; //2 represents South
		parameter [1:0] WEST 	= 2'b 11; //3 represents West
		
		// Sector Parameters
		parameter [2:0] SECTOR_A	= 3'b 001; //1 represents Sector A
		parameter [2:0] SECTOR_B	= 3'b 010; //2 represents Sector B
		parameter [2:0] SECTOR_C	= 3'b 011; //3 represents Sector C
		parameter [2:0] SECTOR_D	= 3'b 100; //4 represents Sector D
		parameter [2:0] SECTOR_E	= 3'b 101; //5 represents Sector E
		parameter [2:0] SECTOR_F	= 3'b 110; //6 represents Sector F
		parameter [2:0] SECTOR_G	= 3'b 111; //7 represents Sector G
		
		initial begin
			old_command = 0;
			ORIENTATION = NORTH;
			SECTOR = SECTOR_A;
		end
		
		// Course Turning Point Distances
		assign X_A_2_B = ;
		assign X_B_2_A = ;
		assign Y_A_2_C = ;
		
		// Course Distances
		assign COURSE_W_2_E = INITIAL_X + ROBOT_SIZE_W_2_E;
		assign COURSE_N_2_S_SECTORS_AC = INITIAL_Y + ROBOT_SIZE_N_2_S;
		assign COURSE_N_2_S_SECTOR_B = COURSE_N_2_S_SECTORS_AC - 57; //57.15 cm is difference in Y distances
		
		//Missing Information Determination
		assign MISSING_X_B = ((COURSE_W_2_E - SEA_COVERAGE - START_COVERAGE)/(2));
		assign MISSING_Y_A = ((COURSE_N_2_S_SECTORS_AC - RAIL_COVERAGE - START_COVERAGE)/(2));
		assign MISSING_Y_B = ((COURSE_N_2_S_SECTOR_B - CARGO_AREA_COVERAGE)/(2));
		
		//Stopping Location Distances
		assign S_6 = MISSING_X_B + 4; 			  //1.75 inches = 4.445 cm ~= 4, Sea Zone 6
		assign S_5 = S_6 + ZONE_SEPERATION; //Sea Zone 5
		assign S_4 = S_5 + ZONE_SEPERATION; //Sea Zone 4
		assign S_3 = S_4 + ZONE_SEPERATION; //Sea Zone 3
		assign S_2 = S_3 + ZONE_SEPERATION; //Sea Zone 2
		assign S_1 = S_2 + ZONE_SEPERATION; //Sea Zone 1
		
		assign R_6 = MISSING_Y_A + 4; 			  //1.75 inches = 4.445 cm ~= 4, Rail Zone 6
		assign R_5 = R_6 + ZONE_SEPERATION; //Rail Zone 5
		assign R_4 = R_5 + ZONE_SEPERATION; //Rail Zone 4
		assign R_3 = R_4 + ZONE_SEPERATION; //Rail Zone 3
		assign R_2 = R_3 + ZONE_SEPERATION; //Rail Zone 2
		assign R_1 = R_2 + ZONE_SEPERATION; //Rail Zone 1
		
		assign C_14 = MISSING_Y_B + 4; 			  //1.75 inches = 4.445 cm ~= 4, Cargo Zone 14
		assign C_13 = C_14 + ZONE_SEPERATION; //Cargo Zone 13
		assign C_12 = C_13 + ZONE_SEPERATION; //Cargo Zone 12
		assign C_11 = C_12 + ZONE_SEPERATION; //Cargo Zone 11
		assign C_10 = C_11 + ZONE_SEPERATION; //Cargo Zone 10
		assign C_9  = C_10 + ZONE_SEPERATION; //Cargo Zone 9
		assign C_8  = C_9  + ZONE_SEPERATION; //Cargo Zone 8
		assign C_7  = C_8  + ZONE_SEPERATION; //Cargo Zone 7
		assign C_6  = C_7  + ZONE_SEPERATION; //Cargo Zone 6
		assign C_5  = C_6  + ZONE_SEPERATION; //Cargo Zone 5
		assign C_4  = C_5  + ZONE_SEPERATION; //Cargo Zone 4
		assign C_3  = C_4  + ZONE_SEPERATION; //Cargo Zone 3
		assign C_2  = C_3  + ZONE_SEPERATION; //Cargo Zone 2
		assign C_1  = C_2  + ZONE_SEPERATION; //Cargo Zone 1
		
		always@(posedge CLK)begin
		
			///*** ORIENTATION SUB-SECTION ALGORITHM ***///
			old_command <= COMMAND;
			if(old_command != COMMAND)begin
				if(old_command == TURN_LEFT)begin
					ORIENTATION <= ORIENTATION - 2'b 01; //Counter Clockwise Rotation 
				end else if(old_command == TURN_RIGHT)begin
					ORIENTATION <= ORIENTATION + 2'b 01; //Clockwise Rotation
				end else begin
					ORIENTATION <= ORIENTATION; //Maintain Orientation
				end
			end else begin
				ORIENTATION <= ORIENTATION; //Maintain Orientation
			end
			///***  END OF ORIENTATION SUB-SECTION ALGORITHM ***///
			
			
			
			///*** SECTOR SUB-SECTION ALGORITHM ***///
			case(SECTOR)
				SECTOR_A:	begin
									if((ORIENTATION == WEST)&(DISTANCE_FRONT <= X_A_2_B))begin
											SECTOR <= SECTOR_B;
									end else if((ORIENTATION == NORTH)&(DISTANCE_FRONT <= Y_A_2_C))begin
											SECTOR <= SECTOR_C;
									end else begin
										SECTOR <= SECTOR_A;
									end
								end
				SECTOR_B:	begin
									if((ORIENTATION == EAST)&(DISTANCE_FRONT <= X_B_2_A))begin
											SECTOR <= SECTOR_A;
									end else begin
										SECTOR <= SECTOR_B;
									end
								end
				SECTOR_C:	begin
									if((ORIENTATION == WEST)&(TILT == 1))begin //fix tilt
											SECTOR <= SECTOR_D;
									end else if((ORIENTATION == SOTH)&(DISTANCE_FRONT <= Y_A_C))begin
											SECTOR <= SECTOR_A;
									end else begin
										SECTOR <= SECTOR_C;
									end
								end
				SECTOR_D:	begin
									if((ORIENTATION == WEST)&(TILT == 0))begin //fix tilt
											SECTOR <= SECTOR_E;
									end else if((ORIENTATION == EAST)&(TILT == 0))begin //fix tilt
											SECTOR <= SECTOR_C;
									end else begin
										SECTOR <= SECTOR_D;
									end
								end
				SECTOR_E:	begin
									if((ORIENTATION == SOUTH)&(TILT == 1))begin //fix tilt
											SECTOR <= SECTOR_F;
									end else if((ORIENTATION == EAST)&(TILT == 1))begin //fix tilt
											SECTOR <= SECTOR_D;
									end else begin
										SECTOR <= SECTOR_E;
									end
								end
				SECTOR_F:	begin
									if((ORIENTATION == SOUTH)&(TILT == 0))begin //fix tilt
											SECTOR <= SECTOR_G;
									end else if((ORIENTATION == NORTH)&(TILT == 0))begin //fix tilt
											SECTOR <= SECTOR_E;
									end else begin
										SECTOR <= SECTOR_F;
									end
								end
				SECTOR_G:	begin
									if((ORIENTATION == NORTH)&(TILT == 1))begin //fix tilt
											SECTOR <= SECTOR_F;
									end else begin
										SECTOR <= SECTOR_G;
									end
								end
			endcase
				///***  END OF SECTOR SUB-SECTION ALGORITHM ***///
		
		end


endmodule
