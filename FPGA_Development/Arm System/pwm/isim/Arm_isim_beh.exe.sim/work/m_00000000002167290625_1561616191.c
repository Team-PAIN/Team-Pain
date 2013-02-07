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
static const char *ng0 = "//dbfsvs02/HomeDB2/RIVERAB/CEC 330 FPGA/Rivera_VendingMachine/pwm/Arm.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2000000, 0};
static int ng4[] = {2, 0};
static int ng5[] = {4, 0};



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = (t0 + 3704);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 20);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 880);
    t2 = *((char **)t1);
    t1 = (t0 + 3864);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 20);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1152);
    t2 = *((char **)t1);
    t1 = (t0 + 4024);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 20);

LAB1:    return;
}

static void Cont_51_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3544);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 6016);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 5920);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_53_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    int t20;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5936);
    *((int *)t2) = 1;
    t3 = (t0 + 5632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(56, ng0);

LAB15:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 28, t5, 32);
    t6 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 28, 0LL);

LAB13:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);

LAB16:    t2 = ((char*)((ng1)));
    t20 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t20 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t20 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t20 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t20 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t20 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t20 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t20 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(54, ng0);

LAB14:    xsi_set_current_line(55, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 28, 0LL);
    goto LAB13;

LAB17:    xsi_set_current_line(62, ng0);

LAB26:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t2 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t2 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(71, ng0);

LAB27:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t2 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t2 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(80, ng0);

LAB28:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1152);
    t4 = *((char **)t2);
    t2 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(87, ng0);

LAB29:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 20, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1152);
    t4 = *((char **)t2);
    t2 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 20, 0LL);
    goto LAB25;

}


extern void work_m_00000000002167290625_1561616191_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Cont_51_1,(void *)Always_53_2};
	xsi_register_didat("work_m_00000000002167290625_1561616191", "isim/Arm_isim_beh.exe.sim/work/m_00000000002167290625_1561616191.didat");
	xsi_register_executes(pe);
}
