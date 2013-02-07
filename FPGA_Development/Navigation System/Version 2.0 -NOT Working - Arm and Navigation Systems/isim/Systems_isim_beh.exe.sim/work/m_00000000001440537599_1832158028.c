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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version 2.0 - Working - Arm and Navigation Systems/debounce.v";



static void Always_35_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB14:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1616U);
    t7 = *((char **)t5);
    t5 = (t0 + 2496);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t7 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB18;

LAB15:    if (t23 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t11) = 1;

LAB18:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(42, ng0);

LAB23:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

LAB21:    goto LAB13;

LAB9:    xsi_set_current_line(47, ng0);

LAB24:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1616U);
    t5 = *((char **)t2);
    t2 = (t0 + 2496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB28;

LAB25:    if (t23 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t11) = 1;

LAB28:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(51, ng0);

LAB33:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

LAB31:    goto LAB13;

LAB11:    xsi_set_current_line(56, ng0);

LAB34:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1616U);
    t5 = *((char **)t2);
    t2 = (t0 + 2496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB38;

LAB35:    if (t23 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t11) = 1;

LAB38:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(60, ng0);

LAB43:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

LAB41:    goto LAB13;

LAB17:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);

LAB22:    xsi_set_current_line(40, ng0);
    t33 = (t0 + 472);
    t34 = *((char **)t33);
    t33 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t33, t34, 0, 0, 2, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB21;

LAB27:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(48, ng0);

LAB32:    xsi_set_current_line(49, ng0);
    t26 = (t0 + 472);
    t27 = *((char **)t26);
    t26 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 2, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB31;

LAB37:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(57, ng0);

LAB42:    xsi_set_current_line(58, ng0);
    t26 = (t0 + 472);
    t27 = *((char **)t26);
    t26 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 2, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2016);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB41;

}


extern void work_m_00000000001440537599_1832158028_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000001440537599_1832158028", "isim/Systems_isim_beh.exe.sim/work/m_00000000001440537599_1832158028.didat");
	xsi_register_executes(pe);
}
