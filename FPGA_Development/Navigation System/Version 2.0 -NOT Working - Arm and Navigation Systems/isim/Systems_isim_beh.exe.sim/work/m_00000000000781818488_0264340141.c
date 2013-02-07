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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version 2.0 - Working - Arm and Navigation Systems/US_Sensor.v";
static unsigned int ng1[] = {0U, 1U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {85U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {1000000, 0};



static void Cont_59_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6688);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_61_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 6880);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 6704);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_62_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 5872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3816);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 6944);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 6720);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t23 = (t0 + 3976);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Initial_64_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(65, ng0);

LAB2:    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 26, 0LL);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);

LAB1:    return;
}

static void Always_75_4(char *t0)
{
    char t9[8];
    char t12[8];
    char t26[8];
    char t42[8];
    char t50[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
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
    unsigned int t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;

LAB0:    t1 = (t0 + 6368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6736);
    *((int *)t2) = 1;
    t3 = (t0 + 6400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1424);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB8;

LAB9:    memset(t12, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t50, t12, 8);

LAB17:    t82 = (t50 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t50);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(80, ng0);

LAB33:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);

LAB31:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB35;

LAB34:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB36;

LAB37:    t10 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(86, ng0);

LAB43:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB41:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t4);
    t29 = *((unsigned int *)t5);
    t30 = (t23 | t29);
    t31 = (~(t30));
    t32 = (t22 & t31);
    if (t32 != 0)
        goto LAB47;

LAB44:    if (t30 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t9) = 1;

LAB47:    t7 = (t9 + 4);
    t33 = *((unsigned int *)t7);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB53;

LAB52:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB54;

LAB55:    t10 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t7);
    t30 = (t23 | t29);
    t31 = (~(t30));
    t32 = (t22 & t31);
    if (t32 != 0)
        goto LAB71;

LAB68:    if (t30 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t9) = 1;

LAB71:    t10 = (t9 + 4);
    t33 = *((unsigned int *)t10);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    t5 = (t0 + 880);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB77;

LAB76:    t8 = (t9 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB77;

LAB80:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB78;

LAB79:    t11 = (t12 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    t5 = (t0 + 880);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    t8 = (t9 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t8);
    t30 = (t23 | t29);
    t31 = (~(t30));
    t32 = (t22 & t31);
    if (t32 != 0)
        goto LAB88;

LAB85:    if (t30 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t12) = 1;

LAB88:    t11 = (t12 + 4);
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = *((unsigned int *)t12);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1152);
    t6 = *((char **)t5);
    t5 = (t0 + 1016);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t5 = (t0 + 880);
    t8 = *((char **)t5);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t9, 32, t8, 32);
    memset(t26, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB94;

LAB93:    t10 = (t12 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB94;

LAB97:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB95;

LAB96:    t13 = (t26 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t26);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t6 = *((char **)t5);
    t5 = (t0 + 1152);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t5 = (t0 + 1016);
    t8 = *((char **)t5);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t9, 32, t8, 32);
    t5 = (t0 + 880);
    t10 = *((char **)t5);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t12, 32, t10, 32);
    memset(t42, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB103;

LAB102:    t11 = (t26 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t4) < *((unsigned int *)t26))
        goto LAB104;

LAB105:    t19 = (t42 + 4);
    t14 = *((unsigned int *)t19);
    t15 = (~(t14));
    t16 = *((unsigned int *)t42);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t6 = *((char **)t5);
    t5 = (t0 + 1152);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t5 = (t0 + 1016);
    t8 = *((char **)t5);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t9, 32, t8, 32);
    t5 = (t0 + 880);
    t10 = *((char **)t5);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t12, 32, t10, 32);
    memset(t42, 0, 8);
    t5 = (t4 + 4);
    t11 = (t26 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t26);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t11);
    t30 = (t23 | t29);
    t31 = (~(t30));
    t32 = (t22 & t31);
    if (t32 != 0)
        goto LAB134;

LAB131:    if (t30 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t42) = 1;

LAB134:    t19 = (t42 + 4);
    t33 = *((unsigned int *)t19);
    t34 = (~(t33));
    t35 = *((unsigned int *)t42);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB140;

LAB139:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB140;

LAB143:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB141;

LAB142:    t10 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(140, ng0);

LAB148:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB146:
LAB137:
LAB109:
LAB100:
LAB91:
LAB83:
LAB74:
LAB59:
LAB50:    goto LAB2;

LAB7:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t24 = (t0 + 2296U);
    t25 = *((char **)t24);
    t24 = ((char*)((ng2)));
    memset(t26, 0, 8);
    t27 = (t25 + 4);
    t28 = (t24 + 4);
    t29 = *((unsigned int *)t25);
    t30 = *((unsigned int *)t24);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB21;

LAB18:    if (t38 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t26) = 1;

LAB21:    memset(t42, 0, 8);
    t43 = (t26 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t26);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t43) != 0)
        goto LAB24;

LAB25:    t51 = *((unsigned int *)t12);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t12 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB20:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t42) = 1;
    goto LAB25;

LAB24:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB25;

LAB26:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t12 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t12);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB28;

LAB29:    xsi_set_current_line(78, ng0);

LAB32:    xsi_set_current_line(79, ng0);
    t88 = (t0 + 3336);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng4)));
    memset(t92, 0, 8);
    xsi_vlog_unsigned_add(t92, 32, t90, 26, t91, 32);
    t93 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t93, t92, 0, 0, 26, 0LL);
    goto LAB31;

LAB35:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(84, ng0);

LAB42:    xsi_set_current_line(85, ng0);
    t11 = ((char*)((ng4)));
    t13 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 1, 0LL);
    goto LAB41;

LAB46:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(90, ng0);

LAB51:    xsi_set_current_line(91, ng0);
    t8 = ((char*)((ng2)));
    t10 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 26, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB50;

LAB53:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t9) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(99, ng0);

LAB60:    xsi_set_current_line(100, ng0);
    t11 = ((char*)((ng4)));
    t13 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t7);
    t30 = (t23 | t29);
    t31 = (~(t30));
    t32 = (t22 & t31);
    if (t32 != 0)
        goto LAB64;

LAB61:    if (t30 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t9) = 1;

LAB64:    t10 = (t9 + 4);
    t33 = *((unsigned int *)t10);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB65;

LAB66:
LAB67:    goto LAB59;

LAB63:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(106, ng0);
    t11 = ((char*)((ng2)));
    t13 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 1, 0LL);
    goto LAB67;

LAB70:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(108, ng0);

LAB75:    xsi_set_current_line(109, ng0);
    t11 = ((char*)((ng2)));
    t13 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB77:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB79;

LAB78:    *((unsigned int *)t12) = 1;
    goto LAB79;

LAB81:    xsi_set_current_line(111, ng0);

LAB84:    xsi_set_current_line(112, ng0);
    t13 = ((char*)((ng2)));
    t19 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB83;

LAB87:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(114, ng0);

LAB92:    xsi_set_current_line(115, ng0);
    t13 = ((char*)((ng2)));
    t19 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB91;

LAB94:    t11 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB96;

LAB95:    *((unsigned int *)t26) = 1;
    goto LAB96;

LAB98:    xsi_set_current_line(117, ng0);

LAB101:    xsi_set_current_line(118, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB100;

LAB103:    t13 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB105;

LAB104:    *((unsigned int *)t42) = 1;
    goto LAB105;

LAB107:    xsi_set_current_line(120, ng0);

LAB110:    xsi_set_current_line(121, ng0);
    t20 = ((char*)((ng2)));
    t24 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t24, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB111;

LAB112:
LAB113:    goto LAB109;

LAB111:    xsi_set_current_line(124, ng0);

LAB114:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 4136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 744);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB116;

LAB115:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB116;

LAB119:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB117;

LAB118:    t13 = (t9 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t9);
    t29 = (t23 & t22);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB120;

LAB121:
LAB122:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t7);
    t30 = (t23 | t29);
    t31 = (~(t30));
    t32 = (t22 & t31);
    if (t32 != 0)
        goto LAB126;

LAB123:    if (t30 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t9) = 1;

LAB126:    t10 = (t9 + 4);
    t33 = *((unsigned int *)t10);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB127;

LAB128:
LAB129:    goto LAB113;

LAB116:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB118;

LAB117:    *((unsigned int *)t9) = 1;
    goto LAB118;

LAB120:    xsi_set_current_line(126, ng0);
    t19 = (t0 + 4136);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng4)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t24, 16, t25, 32);
    t27 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t27, t12, 0, 0, 16, 0LL);
    goto LAB122;

LAB125:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB126;

LAB127:    xsi_set_current_line(128, ng0);

LAB130:    xsi_set_current_line(129, ng0);
    t11 = (t0 + 3496);
    t13 = (t11 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng4)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t19, 8, t20, 32);
    t24 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t24, t12, 0, 0, 8, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB129;

LAB133:    t13 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(133, ng0);

LAB138:    xsi_set_current_line(134, ng0);
    t20 = ((char*)((ng2)));
    t24 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t24, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB137;

LAB140:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB142;

LAB141:    *((unsigned int *)t9) = 1;
    goto LAB142;

LAB144:    xsi_set_current_line(137, ng0);

LAB147:    xsi_set_current_line(138, ng0);
    t11 = ((char*)((ng2)));
    t13 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB146;

}


extern void work_m_00000000000781818488_0264340141_init()
{
	static char *pe[] = {(void *)Cont_59_0,(void *)Cont_61_1,(void *)Cont_62_2,(void *)Initial_64_3,(void *)Always_75_4};
	xsi_register_didat("work_m_00000000000781818488_0264340141", "isim/Systems_isim_beh.exe.sim/work/m_00000000000781818488_0264340141.didat");
	xsi_register_executes(pe);
}
