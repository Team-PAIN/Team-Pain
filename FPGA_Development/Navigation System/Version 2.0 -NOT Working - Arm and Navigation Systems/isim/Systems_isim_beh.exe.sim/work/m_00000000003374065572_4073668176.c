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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version 2.0 - Working - Arm and Navigation Systems/Navigation.v";
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
static unsigned int ng11[] = {0U, 0U};
static int ng12[] = {25, 0};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {16U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {19U, 0U};
static int ng18[] = {16, 0};
static unsigned int ng19[] = {23U, 0U};



static void Initial_66_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(66, ng0);

LAB2:    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7120);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 19);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 7760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Cont_71_1(char *t0)
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

LAB0:    t1 = (t0 + 8928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
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
    t14 = (t0 + 10120);
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
    t27 = (t0 + 9992);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_72_2(char *t0)
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

LAB0:    t1 = (t0 + 9176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
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
    t14 = (t0 + 10184);
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
    t27 = (t0 + 10008);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_122_3(char *t0)
{
    char t8[8];
    char t27[8];
    char t28[8];
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
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 9424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 10024);
    *((int *)t2) = 1;
    t3 = (t0 + 9456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(122, ng0);

LAB5:    xsi_set_current_line(124, ng0);
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

LAB12:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 19, t5, 32);
    t6 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 19, 0LL);

LAB13:    xsi_set_current_line(128, ng0);
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

LAB15:    xsi_set_current_line(137, ng0);

LAB30:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5760U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB32;

LAB31:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;

LAB34:    t9 = (t0 + 6240U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng12)));
    memset(t27, 0, 8);
    t11 = (t10 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB37;

LAB36:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t10) > *((unsigned int *)t9))
        goto LAB39;

LAB38:    *((unsigned int *)t27) = 1;

LAB39:    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t27);
    t15 = (t13 | t14);
    *((unsigned int *)t28) = t15;
    t19 = (t8 + 4);
    t29 = (t27 + 4);
    t30 = (t28 + 4);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t29);
    t20 = (t16 | t17);
    *((unsigned int *)t30) = t20;
    t21 = *((unsigned int *)t30);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB41;

LAB42:
LAB43:    t43 = (t28 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t28);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(146, ng0);

LAB58:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB46:
LAB16:    xsi_set_current_line(152, ng0);
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
    t33 = (t21 & t25);
    if (t33 != 0)
        goto LAB62;

LAB59:    if (t24 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t8) = 1;

LAB62:    t9 = (t8 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(154, ng0);
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
    t33 = (t21 & t25);
    if (t33 != 0)
        goto LAB69;

LAB66:    if (t24 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t8) = 1;

LAB69:    t9 = (t8 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(156, ng0);
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
    t33 = (t21 & t25);
    if (t33 != 0)
        goto LAB76;

LAB73:    if (t24 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t8) = 1;

LAB76:    t9 = (t8 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(158, ng0);
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
    t33 = (t21 & t25);
    if (t33 != 0)
        goto LAB83;

LAB80:    if (t24 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t8) = 1;

LAB83:    t9 = (t8 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(160, ng0);
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
    t33 = (t21 & t25);
    if (t33 != 0)
        goto LAB90;

LAB87:    if (t24 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t8) = 1;

LAB90:    t9 = (t8 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
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
    t33 = (t21 & t25);
    if (t33 != 0)
        goto LAB97;

LAB94:    if (t24 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t8) = 1;

LAB97:    t9 = (t8 + 4);
    t34 = *((unsigned int *)t9);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t37 = (t36 & t35);
    t39 = (t37 != 0);
    if (t39 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB100:
LAB93:
LAB86:
LAB79:
LAB72:
LAB65:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(125, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 7120);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 19, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(128, ng0);

LAB17:    xsi_set_current_line(129, ng0);
    t6 = (t0 + 4320U);
    t7 = *((char **)t6);

LAB18:    t6 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 4, t6, 32);
    if (t26 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t26 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t26 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t26 = xsi_vlog_unsigned_case_compare(t7, 4, t2, 32);
    if (t26 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB29:    goto LAB16;

LAB19:    xsi_set_current_line(130, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    goto LAB29;

LAB32:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB37:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB39;

LAB41:    t23 = *((unsigned int *)t28);
    t24 = *((unsigned int *)t30);
    *((unsigned int *)t28) = (t23 | t24);
    t31 = (t8 + 4);
    t32 = (t27 + 4);
    t25 = *((unsigned int *)t31);
    t33 = (~(t25));
    t34 = *((unsigned int *)t8);
    t26 = (t34 & t33);
    t35 = *((unsigned int *)t32);
    t36 = (~(t35));
    t37 = *((unsigned int *)t27);
    t38 = (t37 & t36);
    t39 = (~(t26));
    t40 = (~(t38));
    t41 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t41 & t39);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t42 & t40);
    goto LAB43;

LAB44:    xsi_set_current_line(139, ng0);

LAB47:    xsi_set_current_line(140, ng0);
    t49 = ((char*)((ng11)));
    t50 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 5, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB49;

LAB48:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB51;

LAB50:    *((unsigned int *)t8) = 1;

LAB51:    t9 = (t8 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(143, ng0);

LAB57:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB55:    goto LAB46;

LAB49:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(141, ng0);

LAB56:    xsi_set_current_line(142, ng0);
    t10 = ((char*)((ng13)));
    t11 = (t0 + 7280);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB55;

LAB61:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(153, ng0);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB65;

LAB68:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(155, ng0);
    t10 = ((char*)((ng13)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB72;

LAB75:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(157, ng0);
    t10 = ((char*)((ng15)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB79;

LAB82:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(159, ng0);
    t10 = ((char*)((ng16)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB86;

LAB89:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(161, ng0);
    t10 = ((char*)((ng17)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB93;

LAB96:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(163, ng0);
    t10 = ((char*)((ng19)));
    t11 = (t0 + 7440);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 5, 0LL);
    goto LAB100;

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

LAB0:    t1 = (t0 + 9672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5760U);
    t4 = *((char **)t2);
    t2 = (t0 + 6080U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 16, 16, 2U, t5, 8, t4, 8);
    t2 = (t0 + 10248);
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
    t18 = (t0 + 10040);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003374065572_4073668176_init()
{
	static char *pe[] = {(void *)Initial_66_0,(void *)Cont_71_1,(void *)Cont_72_2,(void *)Always_122_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003374065572_4073668176", "isim/Systems_isim_beh.exe.sim/work/m_00000000003374065572_4073668176.didat");
	xsi_register_executes(pe);
}
