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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/Navigation_Directional_Button_Control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {24U, 0U};
static unsigned int ng9[] = {16U, 0U};
static unsigned int ng10[] = {19U, 0U};
static unsigned int ng11[] = {25U, 0U};
static int ng12[] = {4, 0};
static int ng13[] = {2, 0};



static void Always_48_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t57[8];
    char t58[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;

LAB0:    t1 = (t0 + 5160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 5192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 3520U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(87, ng0);

LAB73:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4080);
    t4 = (t0 + 4080);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB76;

LAB77:
LAB27:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3680U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t21 = (t18 >> 0);
    *((unsigned int *)t9) = t21;
    t25 = *((unsigned int *)t4);
    t28 = (t25 >> 0);
    *((unsigned int *)t2) = t28;
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 3U);
    t31 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t31 & 3U);
    t7 = ((char*)((ng6)));
    memset(t10, 0, 8);
    t8 = (t9 + 4);
    t12 = (t7 + 4);
    t34 = *((unsigned int *)t9);
    t35 = *((unsigned int *)t7);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t12);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t8);
    t42 = *((unsigned int *)t12);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB81;

LAB78:    if (t43 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t10) = 1;

LAB81:    t14 = (t10 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t10);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(97, ng0);

LAB90:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4080);
    t4 = (t0 + 4080);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng12)));
    t13 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB91;

LAB92:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng12)));
    t13 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB93;

LAB94:
LAB84:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);

LAB28:    xsi_set_current_line(52, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 4080);
    t12 = (t0 + 4080);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB31;

LAB32:    goto LAB27;

LAB9:    xsi_set_current_line(55, ng0);

LAB33:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB36;

LAB37:    goto LAB27;

LAB11:    xsi_set_current_line(59, ng0);

LAB38:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB41;

LAB42:    goto LAB27;

LAB13:    xsi_set_current_line(63, ng0);

LAB43:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB46;

LAB47:    goto LAB27;

LAB15:    xsi_set_current_line(67, ng0);

LAB48:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB51;

LAB52:    goto LAB27;

LAB17:    xsi_set_current_line(71, ng0);

LAB53:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB56;

LAB57:    goto LAB27;

LAB19:    xsi_set_current_line(75, ng0);

LAB58:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB61;

LAB62:    goto LAB27;

LAB21:    xsi_set_current_line(79, ng0);

LAB63:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB66;

LAB67:    goto LAB27;

LAB23:    xsi_set_current_line(83, ng0);

LAB68:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4080);
    t7 = (t0 + 4080);
    t8 = (t7 + 72U);
    t12 = *((char **)t8);
    t13 = ((char*)((ng3)));
    t14 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t9 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t10 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t17 = (t11 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4240);
    t4 = (t0 + 4240);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB71;

LAB72:    goto LAB27;

LAB29:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t8, t7, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB30;

LAB31:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB32;

LAB34:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB35;

LAB36:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB37;

LAB39:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB40;

LAB41:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB42;

LAB44:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB45;

LAB46:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB47;

LAB49:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB50;

LAB51:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB52;

LAB54:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB55;

LAB56:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB57;

LAB59:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB60;

LAB61:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB62;

LAB64:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB65;

LAB66:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB67;

LAB69:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t4, t3, t29, *((unsigned int *)t10), t33, 0LL);
    goto LAB70;

LAB71:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB72;

LAB74:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB75;

LAB76:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB77;

LAB80:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(94, ng0);

LAB85:    xsi_set_current_line(95, ng0);
    t15 = (t0 + 3680U);
    t16 = *((char **)t15);
    memset(t11, 0, 8);
    t15 = (t11 + 4);
    t17 = (t16 + 4);
    t51 = *((unsigned int *)t16);
    t52 = (t51 >> 2);
    *((unsigned int *)t11) = t52;
    t53 = *((unsigned int *)t17);
    t54 = (t53 >> 2);
    *((unsigned int *)t15) = t54;
    t55 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t55 & 7U);
    t56 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t56 & 7U);
    t20 = (t0 + 4080);
    t24 = (t0 + 4080);
    t60 = (t24 + 72U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng12)));
    t63 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t61)), 2, t62, 32, 1, t63, 32, 1);
    t64 = (t57 + 4);
    t65 = *((unsigned int *)t64);
    t6 = (!(t65));
    t66 = (t58 + 4);
    t67 = *((unsigned int *)t66);
    t19 = (!(t67));
    t22 = (t6 && t19);
    t68 = (t59 + 4);
    t69 = *((unsigned int *)t68);
    t23 = (!(t69));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3680U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t21 = (t18 >> 2);
    *((unsigned int *)t9) = t21;
    t25 = *((unsigned int *)t4);
    t28 = (t25 >> 2);
    *((unsigned int *)t2) = t28;
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 7U);
    t31 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t31 & 7U);
    t7 = (t0 + 4240);
    t8 = (t0 + 4240);
    t12 = (t8 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng12)));
    t15 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t10, t11, t57, ((int*)(t13)), 2, t14, 32, 1, t15, 32, 1);
    t16 = (t10 + 4);
    t34 = *((unsigned int *)t16);
    t6 = (!(t34));
    t17 = (t11 + 4);
    t35 = *((unsigned int *)t17);
    t19 = (!(t35));
    t22 = (t6 && t19);
    t20 = (t57 + 4);
    t36 = *((unsigned int *)t20);
    t23 = (!(t36));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB88;

LAB89:    goto LAB84;

LAB86:    t70 = *((unsigned int *)t59);
    t27 = (t70 + 0);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t58);
    t29 = (t71 - t72);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t20, t11, t27, *((unsigned int *)t58), t32, 0LL);
    goto LAB87;

LAB88:    t37 = *((unsigned int *)t57);
    t27 = (t37 + 0);
    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t11);
    t29 = (t38 - t39);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t7, t9, t27, *((unsigned int *)t11), t32, 0LL);
    goto LAB89;

LAB91:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB92;

LAB93:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t27, *((unsigned int *)t10), t32, 0LL);
    goto LAB94;

}


extern void work_m_00000000000876690702_0630495469_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_00000000000876690702_0630495469", "isim/Navigation_isim_beh.exe.sim/work/m_00000000000876690702_0630495469.didat");
	xsi_register_executes(pe);
}
