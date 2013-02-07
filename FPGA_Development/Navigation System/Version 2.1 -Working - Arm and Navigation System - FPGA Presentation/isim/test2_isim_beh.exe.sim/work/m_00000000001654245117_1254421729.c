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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/sin.v";
static int ng1[] = {0, 0};
static int ng2[] = {180, 0, 0, 0};



static void Always_31_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    double t5;
    char *t6;
    double t7;
    unsigned int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    double t20;
    double t21;
    char *t22;
    double t23;
    double t24;
    double t25;
    double t26;
    char *t27;
    char *t28;
    double t29;
    double t30;
    double t31;
    char *t32;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value_double(t4, 1.0000000000000000, 0);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t5 = xsi_vlog_convert_to_real(t3, 1, 2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value_double(t2, t5, 0);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_convert_to_real(t6, 32, 1);
    t8 = (t5 < t7);
    *((unsigned int *)t9) = t8;
    t10 = (t9 + 4);
    *((unsigned int *)t10) = 0U;
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(39, ng0);

LAB10:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t7 = (3.1415926500000002 / 2.0000000000000000);
    t8 = (t5 > t7);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t7 = (t5 * 2.0000000000000000);
    t20 = (t7 / 3.1415926500000002);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value_double(t6, t20, 0);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = (t0 + 1928);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t7 = *((double *)t11);
    t20 = (t5 * t7);
    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value_double(t17, t20, 0);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = (t0 + 2088);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t7 = *((double *)t11);
    t20 = (t5 * t7);
    t17 = (t0 + 2248);
    xsi_vlogvar_assign_value_double(t17, t20, 0);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = (t0 + 2088);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t7 = *((double *)t11);
    t20 = (t5 * t7);
    t17 = (t0 + 2408);
    xsi_vlogvar_assign_value_double(t17, t20, 0);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = (t0 + 2088);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t7 = *((double *)t11);
    t20 = (t5 * t7);
    t17 = (t0 + 2568);
    xsi_vlogvar_assign_value_double(t17, t20, 0);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t7 = (1.5707940000000000 * t5);
    t6 = (t0 + 2248);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t20 = *((double *)t11);
    t21 = (0.64596200000000004 * t20);
    t23 = (t7 - t21);
    t17 = (t0 + 2408);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t24 = *((double *)t19);
    t25 = (0.079691999999999999 * t24);
    t26 = (t23 + t25);
    t22 = (t0 + 2568);
    t27 = (t22 + 56U);
    t28 = *((char **)t27);
    t29 = *((double *)t28);
    t30 = (0.0046817120000000002 * t29);
    t31 = (t26 - t30);
    t32 = (t0 + 2728);
    xsi_vlogvar_assign_value_double(t32, t31, 0);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = (t0 + 2728);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t7 = *((double *)t11);
    t20 = (t5 * t7);
    t17 = ((char*)((ng2)));
    t21 = xsi_vlog_convert_to_real(t17, 32, 1);
    t23 = (t20 * t21);
    t24 = (t23 / 3.1415926500000002);
    t18 = (t0 + 1608);
    xsi_vlogvar_assign_value_double(t18, t24, 0);
    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t17 = (t0 + 1768);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = *((double *)t19);
    t21 = (-(t20));
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value_double(t22, t21, 0);
    xsi_set_current_line(36, ng0);
    t5 = (-(1.0000000000000000));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value_double(t2, t5, 0);
    goto LAB8;

LAB11:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t11 = (t0 + 1768);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t20 = *((double *)t18);
    t21 = (t20 - 3.1415926500000002);
    t19 = (t0 + 1768);
    xsi_vlogvar_assign_value_double(t19, t21, 0);
    xsi_set_current_line(41, ng0);
    t5 = (-(1.0000000000000000));
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = *((double *)t4);
    t20 = (t5 * t7);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value_double(t6, t20, 0);
    goto LAB10;

}


extern void work_m_00000000001654245117_1254421729_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001654245117_1254421729", "isim/test2_isim_beh.exe.sim/work/m_00000000001654245117_1254421729.didat");
	xsi_register_executes(pe);
}
