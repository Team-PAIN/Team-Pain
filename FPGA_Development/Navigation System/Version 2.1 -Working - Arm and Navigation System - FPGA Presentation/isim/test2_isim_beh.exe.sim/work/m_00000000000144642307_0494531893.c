/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/test2.v";
static int ng1[] = {0, 0, 0, 0};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;
    double t3;
    char *t4;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB4:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value_double(t2, 1.0000000000000000, 0);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = xsi_vlog_convert_to_real(t2, 32, 1);
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value_double(t4, t3, 0);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value_double(t2, 2.0000000000000000, 0);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value_double(t2, 1.7000000000000000, 0);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value_double(t2, 2.8999999999999999, 0);
    goto LAB1;

}


extern void work_m_00000000000144642307_0494531893_init()
{
	static char *pe[] = {(void *)Initial_35_0};
	xsi_register_didat("work_m_00000000000144642307_0494531893", "isim/test2_isim_beh.exe.sim/work/m_00000000000144642307_0494531893.didat");
	xsi_register_executes(pe);
}
