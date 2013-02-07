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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version 2.0 - Working - Arm and Navigation Systems/Arm.v";
static int ng1[] = {0, 0};
static int ng2[] = {2000000, 0};
static int ng3[] = {1, 0};
static int ng4[] = {5, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};



static void Initial_49_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng0);

LAB2:    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 28);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = (t0 + 4184);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 20);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 880);
    t2 = *((char **)t1);
    t1 = (t0 + 4344);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 20);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1152);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 20);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5464);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_59_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 7824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 7696);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_60_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 7888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 1, 1);
    t16 = (t0 + 7712);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_61_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 7128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 7952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 2, 2);
    t16 = (t0 + 7728);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_63_4(char *t0)
{
    char t8[8];
    char t21[8];
    char t74[8];
    char t78[8];
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
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
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
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;

LAB0:    t1 = (t0 + 7376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 7744);
    *((int *)t2) = 1;
    t3 = (t0 + 7408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
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

LAB12:    xsi_set_current_line(66, ng0);

LAB15:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 28, t5, 32);
    t6 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 28, 0LL);

LAB13:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    t20 = (t17 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2184U);
    t6 = *((char **)t5);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t6);
    t24 = (t22 & t23);
    *((unsigned int *)t21) = t24;
    t5 = (t8 + 4);
    t7 = (t6 + 4);
    t9 = (t21 + 4);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t7);
    t27 = (t25 | t26);
    *((unsigned int *)t9) = t27;
    t28 = *((unsigned int *)t9);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB16;

LAB17:
LAB18:    t12 = (t21 + 4);
    t48 = *((unsigned int *)t12);
    t49 = (~(t48));
    t50 = *((unsigned int *)t21);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(64, ng0);

LAB14:    xsi_set_current_line(65, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 28, 0LL);
    goto LAB13;

LAB16:    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t9);
    *((unsigned int *)t21) = (t30 | t31);
    t10 = (t8 + 4);
    t11 = (t6 + 4);
    t32 = *((unsigned int *)t8);
    t33 = (~(t32));
    t34 = *((unsigned int *)t10);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t37 = (~(t36));
    t38 = *((unsigned int *)t11);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t44 & t42);
    t45 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t45 & t43);
    t46 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t46 & t42);
    t47 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t47 & t43);
    goto LAB18;

LAB19:    xsi_set_current_line(69, ng0);

LAB22:    xsi_set_current_line(70, ng0);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 5464);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(73, ng0);

LAB26:    xsi_set_current_line(74, ng0);
    t6 = (t0 + 4664);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);

LAB27:    t10 = ((char*)((ng1)));
    t40 = xsi_vlog_unsigned_case_compare(t9, 3, t10, 32);
    if (t40 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng3)));
    t40 = xsi_vlog_unsigned_case_compare(t9, 3, t2, 32);
    if (t40 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng5)));
    t40 = xsi_vlog_unsigned_case_compare(t9, 3, t2, 32);
    if (t40 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng6)));
    t40 = xsi_vlog_unsigned_case_compare(t9, 3, t2, 32);
    if (t40 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng7)));
    t40 = xsi_vlog_unsigned_case_compare(t9, 3, t2, 32);
    if (t40 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB25;

LAB28:    xsi_set_current_line(75, ng0);

LAB39:    xsi_set_current_line(76, ng0);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    t11 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 20, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB40;

LAB41:
LAB42:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB43;

LAB44:
LAB45:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB47;

LAB46:    t76 = (t73 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t72) < *((unsigned int *)t73))
        goto LAB48;

LAB49:    t79 = *((unsigned int *)t21);
    t80 = *((unsigned int *)t74);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB51;

LAB52:
LAB53:    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB58;

LAB59:
LAB60:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB61;

LAB62:
LAB63:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    t76 = (t73 + 4);
    t79 = *((unsigned int *)t72);
    t80 = *((unsigned int *)t73);
    t81 = (t79 ^ t80);
    t85 = *((unsigned int *)t75);
    t86 = *((unsigned int *)t76);
    t87 = (t85 ^ t86);
    t88 = (t81 | t87);
    t89 = *((unsigned int *)t75);
    t90 = *((unsigned int *)t76);
    t91 = (t89 | t90);
    t94 = (~(t91));
    t95 = (t88 & t94);
    if (t95 != 0)
        goto LAB67;

LAB64:    if (t91 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t74) = 1;

LAB67:    t96 = *((unsigned int *)t21);
    t97 = *((unsigned int *)t74);
    t98 = (t96 & t97);
    *((unsigned int *)t78) = t98;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t99 = *((unsigned int *)t82);
    t100 = *((unsigned int *)t83);
    t101 = (t99 | t100);
    *((unsigned int *)t84) = t101;
    t104 = *((unsigned int *)t84);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB68;

LAB69:
LAB70:    t110 = (t78 + 4);
    t125 = *((unsigned int *)t110);
    t126 = (~(t125));
    t127 = *((unsigned int *)t78);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(94, ng0);

LAB75:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB73:
LAB56:    goto LAB38;

LAB30:    xsi_set_current_line(101, ng0);

LAB76:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB77;

LAB78:
LAB79:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB80;

LAB81:
LAB82:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB84;

LAB83:    t76 = (t73 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t72) < *((unsigned int *)t73))
        goto LAB85;

LAB86:    t79 = *((unsigned int *)t21);
    t80 = *((unsigned int *)t74);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB88;

LAB89:
LAB90:    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB95;

LAB96:
LAB97:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB98;

LAB99:
LAB100:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    t76 = (t73 + 4);
    t79 = *((unsigned int *)t72);
    t80 = *((unsigned int *)t73);
    t81 = (t79 ^ t80);
    t85 = *((unsigned int *)t75);
    t86 = *((unsigned int *)t76);
    t87 = (t85 ^ t86);
    t88 = (t81 | t87);
    t89 = *((unsigned int *)t75);
    t90 = *((unsigned int *)t76);
    t91 = (t89 | t90);
    t94 = (~(t91));
    t95 = (t88 & t94);
    if (t95 != 0)
        goto LAB104;

LAB101:    if (t91 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t74) = 1;

LAB104:    t96 = *((unsigned int *)t21);
    t97 = *((unsigned int *)t74);
    t98 = (t96 & t97);
    *((unsigned int *)t78) = t98;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t99 = *((unsigned int *)t82);
    t100 = *((unsigned int *)t83);
    t101 = (t99 | t100);
    *((unsigned int *)t84) = t101;
    t104 = *((unsigned int *)t84);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB105;

LAB106:
LAB107:    t110 = (t78 + 4);
    t125 = *((unsigned int *)t110);
    t126 = (~(t125));
    t127 = *((unsigned int *)t78);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(120, ng0);

LAB112:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB110:
LAB93:    goto LAB38;

LAB32:    xsi_set_current_line(127, ng0);

LAB113:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB114;

LAB115:
LAB116:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB117;

LAB118:
LAB119:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB121;

LAB120:    t76 = (t73 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB121;

LAB124:    if (*((unsigned int *)t72) < *((unsigned int *)t73))
        goto LAB122;

LAB123:    t79 = *((unsigned int *)t21);
    t80 = *((unsigned int *)t74);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB125;

LAB126:
LAB127:    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB132;

LAB133:
LAB134:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB135;

LAB136:
LAB137:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    t76 = (t73 + 4);
    t79 = *((unsigned int *)t72);
    t80 = *((unsigned int *)t73);
    t81 = (t79 ^ t80);
    t85 = *((unsigned int *)t75);
    t86 = *((unsigned int *)t76);
    t87 = (t85 ^ t86);
    t88 = (t81 | t87);
    t89 = *((unsigned int *)t75);
    t90 = *((unsigned int *)t76);
    t91 = (t89 | t90);
    t94 = (~(t91));
    t95 = (t88 & t94);
    if (t95 != 0)
        goto LAB141;

LAB138:    if (t91 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t74) = 1;

LAB141:    t96 = *((unsigned int *)t21);
    t97 = *((unsigned int *)t74);
    t98 = (t96 & t97);
    *((unsigned int *)t78) = t98;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t99 = *((unsigned int *)t82);
    t100 = *((unsigned int *)t83);
    t101 = (t99 | t100);
    *((unsigned int *)t84) = t101;
    t104 = *((unsigned int *)t84);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB142;

LAB143:
LAB144:    t110 = (t78 + 4);
    t125 = *((unsigned int *)t110);
    t126 = (~(t125));
    t127 = *((unsigned int *)t78);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(144, ng0);

LAB149:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB147:
LAB130:    goto LAB38;

LAB34:    xsi_set_current_line(151, ng0);

LAB150:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 608);
    t4 = *((char **)t3);
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB151;

LAB152:
LAB153:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB154;

LAB155:
LAB156:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB158;

LAB157:    t76 = (t73 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB158;

LAB161:    if (*((unsigned int *)t72) < *((unsigned int *)t73))
        goto LAB159;

LAB160:    t79 = *((unsigned int *)t21);
    t80 = *((unsigned int *)t74);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB162;

LAB163:
LAB164:    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t4);
    t15 = (t13 & t14);
    *((unsigned int *)t8) = t15;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t20 = (t16 | t17);
    *((unsigned int *)t6) = t20;
    t22 = *((unsigned int *)t6);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB169;

LAB170:
LAB171:    t11 = (t0 + 3464U);
    t12 = *((char **)t11);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t12);
    t44 = (t42 & t43);
    *((unsigned int *)t21) = t44;
    t11 = (t8 + 4);
    t18 = (t12 + 4);
    t19 = (t21 + 4);
    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t18);
    t47 = (t45 | t46);
    *((unsigned int *)t19) = t47;
    t48 = *((unsigned int *)t19);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB172;

LAB173:
LAB174:    t70 = (t0 + 4824);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    t76 = (t73 + 4);
    t79 = *((unsigned int *)t72);
    t80 = *((unsigned int *)t73);
    t81 = (t79 ^ t80);
    t85 = *((unsigned int *)t75);
    t86 = *((unsigned int *)t76);
    t87 = (t85 ^ t86);
    t88 = (t81 | t87);
    t89 = *((unsigned int *)t75);
    t90 = *((unsigned int *)t76);
    t91 = (t89 | t90);
    t94 = (~(t91));
    t95 = (t88 & t94);
    if (t95 != 0)
        goto LAB178;

LAB175:    if (t91 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t74) = 1;

LAB178:    t96 = *((unsigned int *)t21);
    t97 = *((unsigned int *)t74);
    t98 = (t96 & t97);
    *((unsigned int *)t78) = t98;
    t82 = (t21 + 4);
    t83 = (t74 + 4);
    t84 = (t78 + 4);
    t99 = *((unsigned int *)t82);
    t100 = *((unsigned int *)t83);
    t101 = (t99 | t100);
    *((unsigned int *)t84) = t101;
    t104 = *((unsigned int *)t84);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB179;

LAB180:
LAB181:    t110 = (t78 + 4);
    t125 = *((unsigned int *)t110);
    t126 = (~(t125));
    t127 = *((unsigned int *)t78);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB182;

LAB183:    xsi_set_current_line(165, ng0);

LAB186:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB184:
LAB167:    goto LAB38;

LAB36:    xsi_set_current_line(172, ng0);

LAB187:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 608);
    t4 = *((char **)t3);
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 20, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 20, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB191;

LAB189:    if (*((unsigned int *)t5) == 0)
        goto LAB188;

LAB190:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB191:    t7 = (t0 + 3864);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 1);
    goto LAB38;

LAB40:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB42;

LAB43:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB45;

LAB47:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t74) = 1;
    goto LAB49;

LAB51:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t94 = *((unsigned int *)t21);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t74);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB53;

LAB54:    xsi_set_current_line(83, ng0);

LAB57:    xsi_set_current_line(84, ng0);
    t116 = (t0 + 3464U);
    t117 = *((char **)t116);
    t116 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t116, t117, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB56;

LAB58:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB60;

LAB61:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB63;

LAB66:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB67;

LAB68:    t106 = *((unsigned int *)t78);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t106 | t107);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t108 = *((unsigned int *)t21);
    t109 = (~(t108));
    t111 = *((unsigned int *)t92);
    t112 = (~(t111));
    t113 = *((unsigned int *)t74);
    t114 = (~(t113));
    t115 = *((unsigned int *)t93);
    t118 = (~(t115));
    t102 = (t109 & t112);
    t103 = (t114 & t118);
    t119 = (~(t102));
    t120 = (~(t103));
    t121 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t121 & t119);
    t122 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t122 & t120);
    t123 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t123 & t119);
    t124 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t124 & t120);
    goto LAB70;

LAB71:    xsi_set_current_line(88, ng0);

LAB74:    xsi_set_current_line(89, ng0);
    t116 = ((char*)((ng1)));
    t117 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t117, t116, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB73;

LAB77:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB79;

LAB80:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB82;

LAB84:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB86;

LAB85:    *((unsigned int *)t74) = 1;
    goto LAB86;

LAB88:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t94 = *((unsigned int *)t21);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t74);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB90;

LAB91:    xsi_set_current_line(109, ng0);

LAB94:    xsi_set_current_line(110, ng0);
    t116 = (t0 + 3464U);
    t117 = *((char **)t116);
    t116 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t116, t117, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB93;

LAB95:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB97;

LAB98:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB100;

LAB103:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB104;

LAB105:    t106 = *((unsigned int *)t78);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t106 | t107);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t108 = *((unsigned int *)t21);
    t109 = (~(t108));
    t111 = *((unsigned int *)t92);
    t112 = (~(t111));
    t113 = *((unsigned int *)t74);
    t114 = (~(t113));
    t115 = *((unsigned int *)t93);
    t118 = (~(t115));
    t102 = (t109 & t112);
    t103 = (t114 & t118);
    t119 = (~(t102));
    t120 = (~(t103));
    t121 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t121 & t119);
    t122 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t122 & t120);
    t123 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t123 & t119);
    t124 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t124 & t120);
    goto LAB107;

LAB108:    xsi_set_current_line(114, ng0);

LAB111:    xsi_set_current_line(115, ng0);
    t116 = ((char*)((ng1)));
    t117 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t117, t116, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB110;

LAB114:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB116;

LAB117:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB119;

LAB121:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB123;

LAB122:    *((unsigned int *)t74) = 1;
    goto LAB123;

LAB125:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t94 = *((unsigned int *)t21);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t74);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB127;

LAB128:    xsi_set_current_line(133, ng0);

LAB131:    xsi_set_current_line(134, ng0);
    t116 = (t0 + 3464U);
    t117 = *((char **)t116);
    t116 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t116, t117, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB130;

LAB132:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB134;

LAB135:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB137;

LAB140:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB141;

LAB142:    t106 = *((unsigned int *)t78);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t106 | t107);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t108 = *((unsigned int *)t21);
    t109 = (~(t108));
    t111 = *((unsigned int *)t92);
    t112 = (~(t111));
    t113 = *((unsigned int *)t74);
    t114 = (~(t113));
    t115 = *((unsigned int *)t93);
    t118 = (~(t115));
    t102 = (t109 & t112);
    t103 = (t114 & t118);
    t119 = (~(t102));
    t120 = (~(t103));
    t121 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t121 & t119);
    t122 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t122 & t120);
    t123 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t123 & t119);
    t124 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t124 & t120);
    goto LAB144;

LAB145:    xsi_set_current_line(138, ng0);

LAB148:    xsi_set_current_line(139, ng0);
    t116 = ((char*)((ng1)));
    t117 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t117, t116, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB147;

LAB151:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB153;

LAB154:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB156;

LAB158:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB160;

LAB159:    *((unsigned int *)t74) = 1;
    goto LAB160;

LAB162:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t94 = *((unsigned int *)t21);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t74);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB164;

LAB165:    xsi_set_current_line(157, ng0);

LAB168:    xsi_set_current_line(158, ng0);
    t116 = (t0 + 3464U);
    t117 = *((char **)t116);
    t116 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t116, t117, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3304U);
    t3 = *((char **)t2);
    t2 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB167;

LAB169:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t24 | t25);
    t7 = (t3 + 4);
    t10 = (t4 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t40 = (t27 & t29);
    t41 = (t31 & t33);
    t34 = (~(t40));
    t35 = (~(t41));
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t34);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB171;

LAB172:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t50 | t51);
    t53 = (t8 + 4);
    t54 = (t12 + 4);
    t52 = *((unsigned int *)t8);
    t55 = (~(t52));
    t56 = *((unsigned int *)t53);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t54);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t66 & t64);
    t67 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t67 & t65);
    t68 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t68 & t64);
    t69 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t69 & t65);
    goto LAB174;

LAB177:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB178;

LAB179:    t106 = *((unsigned int *)t78);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t106 | t107);
    t92 = (t21 + 4);
    t93 = (t74 + 4);
    t108 = *((unsigned int *)t21);
    t109 = (~(t108));
    t111 = *((unsigned int *)t92);
    t112 = (~(t111));
    t113 = *((unsigned int *)t74);
    t114 = (~(t113));
    t115 = *((unsigned int *)t93);
    t118 = (~(t115));
    t102 = (t109 & t112);
    t103 = (t114 & t118);
    t119 = (~(t102));
    t120 = (~(t103));
    t121 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t121 & t119);
    t122 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t122 & t120);
    t123 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t123 & t119);
    t124 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t124 & t120);
    goto LAB181;

LAB182:    xsi_set_current_line(162, ng0);

LAB185:    xsi_set_current_line(163, ng0);
    t116 = ((char*)((ng1)));
    t117 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t117, t116, 0, 0, 3, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);
    goto LAB184;

LAB188:    *((unsigned int *)t8) = 1;
    goto LAB191;

}


extern void work_m_00000000002879580101_1561616191_init()
{
	static char *pe[] = {(void *)Initial_49_0,(void *)Cont_59_1,(void *)Cont_60_2,(void *)Cont_61_3,(void *)Always_63_4};
	xsi_register_didat("work_m_00000000002879580101_1561616191", "isim/Systems_isim_beh.exe.sim/work/m_00000000002879580101_1561616191.didat");
	xsi_register_executes(pe);
}
