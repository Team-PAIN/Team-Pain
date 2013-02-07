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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/Navigation.v";
static int ng1[] = {0, 0};
static int ng2[] = {262100, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {24U, 0U};
static int ng11[] = {16, 0};
static unsigned int ng12[] = {19U, 0U};
static unsigned int ng13[] = {0U, 0U};
static unsigned int ng14[] = {25U, 0U};
static int ng15[] = {20, 0};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {11U, 0U};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {23U, 0U};



static void Initial_63_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(63, ng0);

LAB2:    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7120);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 19);

LAB1:    return;
}

static void Cont_67_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 8608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 7120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 9800);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9672);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_68_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 8856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 7120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 9864);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 9688);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_118_3(char *t0)
{
    char t8[8];
    char t33[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 9104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 9704);
    *((int *)t2) = 1;
    t3 = (t0 + 9136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 7120);
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

LAB12:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 19, t5, 32);
    t6 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 19, 0LL);

LAB13:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4160U);
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
    t5 = (t8 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(134, ng0);

LAB32:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 6560U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB36;

LAB33:    if (t24 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t8) = 1;

LAB36:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6560U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB44;

LAB41:    if (t24 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t8) = 1;

LAB44:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(140, ng0);

LAB49:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 5760U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB51;

LAB50:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB53;

LAB52:    *((unsigned int *)t8) = 1;

LAB53:    t9 = (t8 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(147, ng0);

LAB68:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB57:
LAB47:
LAB39:
LAB16:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB72;

LAB69:    if (t24 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t8) = 1;

LAB72:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB79;

LAB76:    if (t24 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t8) = 1;

LAB79:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB86;

LAB83:    if (t24 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t8) = 1;

LAB86:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB93;

LAB90:    if (t24 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t8) = 1;

LAB93:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB100;

LAB97:    if (t24 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t8) = 1;

LAB100:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t27 = (t21 & t25);
    if (t27 != 0)
        goto LAB107;

LAB104:    if (t24 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t8) = 1;

LAB107:    t9 = (t8 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB110:
LAB103:
LAB96:
LAB89:
LAB82:
LAB75:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(121, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 19, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(124, ng0);

LAB17:    xsi_set_current_line(125, ng0);
    t6 = (t0 + 4320U);
    t7 = *((char **)t6);

LAB18:    t6 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 5, t6, 32);
    if (t26 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 32);
    if (t26 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 32);
    if (t26 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 32);
    if (t26 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 32);
    if (t26 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB31:    goto LAB16;

LAB19:    xsi_set_current_line(126, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    goto LAB31;

LAB21:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB31;

LAB23:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB31;

LAB35:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(136, ng0);

LAB40:    xsi_set_current_line(137, ng0);
    t10 = ((char*)((ng12)));
    t11 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB39;

LAB43:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(138, ng0);

LAB48:    xsi_set_current_line(139, ng0);
    t10 = ((char*)((ng14)));
    t11 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB47;

LAB51:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(141, ng0);

LAB58:    xsi_set_current_line(142, ng0);
    t10 = (t0 + 7280);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = ((char*)((ng8)));
    memset(t33, 0, 8);
    t19 = (t12 + 4);
    t34 = (t18 + 4);
    t20 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t18);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t34);
    t25 = (t23 ^ t24);
    t27 = (t22 | t25);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t34);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB62;

LAB59:    if (t30 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t33) = 1;

LAB62:    t36 = (t33 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t33);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(144, ng0);

LAB67:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB65:    goto LAB57;

LAB61:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(142, ng0);

LAB66:    xsi_set_current_line(143, ng0);
    t42 = ((char*)((ng13)));
    t43 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 5, 0LL);
    goto LAB65;

LAB71:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(156, ng0);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB75;

LAB78:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(158, ng0);
    t10 = ((char*)((ng16)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB82;

LAB85:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(160, ng0);
    t10 = ((char*)((ng17)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB89;

LAB92:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(162, ng0);
    t10 = ((char*)((ng18)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB96;

LAB99:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(164, ng0);
    t10 = ((char*)((ng12)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB103;

LAB106:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB107;

LAB108:    xsi_set_current_line(166, ng0);
    t10 = ((char*)((ng19)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB110;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 9352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5760U);
    t4 = *((char **)t2);
    t2 = (t0 + 6080U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 16, 16, 2U, t5, 8, t4, 8);
    t2 = (t0 + 9928);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t18 = (t0 + 9720);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001517704032_4073668176_init()
{
	static char *pe[] = {(void *)Initial_63_0,(void *)Cont_67_1,(void *)Cont_68_2,(void *)Always_118_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001517704032_4073668176", "isim/Navigation_isim_beh.exe.sim/work/m_00000000001517704032_4073668176.didat");
	xsi_register_executes(pe);
}
