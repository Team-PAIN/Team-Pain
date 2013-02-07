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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version 2.0 - Working - Arm and Navigation Systems/PulseModulation2.v";
static unsigned int ng1[] = {100000000U, 0U};
static int ng2[] = {1000, 0};
static int ng3[] = {0, 0};
static int ng4[] = {150000, 0};
static int ng5[] = {1, 0};
static int ng6[] = {500, 0};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static int ng9[] = {6, 0};
static int ng10[] = {12, 0};
static int ng11[] = {18, 0};
static int ng12[] = {4, 0};
static int ng13[] = {7, 0};
static int ng14[] = {9, 0};
static int ng15[] = {14, 0};
static int ng16[] = {22, 0};
static int ng17[] = {11, 0};
static int ng18[] = {15, 0};
static int ng19[] = {21, 0};
static int ng20[] = {23, 0};
static int ng21[] = {5, 0};
static int ng22[] = {10, 0};
static int ng23[] = {13, 0};
static int ng24[] = {17, 0};
static int ng25[] = {19, 0};
static int ng26[] = {16, 0};



static void Initial_30_0(char *t0)
{
    char t3[8];
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t24;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_divide(t3, 32, t1, 28, t2, 32);
    t4 = (t0 + 2064);
    t7 = (t0 + 2064);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2064);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2064);
    t4 = (t0 + 2064);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2064);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t3 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (!(t15));
    t14 = (t5 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = ((char*)((ng6)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_divide(t3, 32, t1, 28, t2, 32);
    t4 = (t0 + 2064);
    t7 = (t0 + 2064);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2064);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    if (t20 == 1)
        goto LAB7;

LAB8:
LAB1:    return;
LAB3:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t6), t24);
    goto LAB4;

LAB5:    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t5);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t5), t24);
    goto LAB6;

LAB7:    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t6);
    t23 = (t21 - t22);
    t24 = (t23 + 1);
    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t6), t24);
    goto LAB8;

}

static void Always_36_1(char *t0)
{
    char t4[8];
    char t22[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
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
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    int t51;
    int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 3232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3552);
    *((int *)t2) = 1;
    t3 = (t0 + 3264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 7U);

LAB6:    t14 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t16 = (t0 + 1504U);
    t17 = *((char **)t16);

LAB24:    t16 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t17, 5, t16, 32);
    if (t18 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t17, 5, t2, 32);
    if (t15 == 1)
        goto LAB27;

LAB28:    t3 = ((char*)((ng9)));
    t18 = xsi_vlog_unsigned_case_compare(t17, 5, t3, 32);
    if (t18 == 1)
        goto LAB29;

LAB30:    t5 = ((char*)((ng10)));
    t40 = xsi_vlog_unsigned_case_compare(t17, 5, t5, 32);
    if (t40 == 1)
        goto LAB31;

LAB32:    t6 = ((char*)((ng11)));
    t41 = xsi_vlog_unsigned_case_compare(t17, 5, t6, 32);
    if (t41 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 2064);
    t14 = (t7 + 56U);
    t16 = *((char **)t14);
    t19 = (t0 + 2064);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t23 = (t0 + 2064);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t16, t21, t25, 2, 1, t26, 32, 1);
    t27 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t27, t22, 0, 0, 21, 0LL);

LAB37:    goto LAB23;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1504U);
    t5 = *((char **)t3);

LAB38:    t3 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 32);
    if (t18 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t15 == 1)
        goto LAB41;

LAB42:    t3 = ((char*)((ng13)));
    t18 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 32);
    if (t18 == 1)
        goto LAB43;

LAB44:    t6 = ((char*)((ng14)));
    t40 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 32);
    if (t40 == 1)
        goto LAB45;

LAB46:    t7 = ((char*)((ng15)));
    t41 = xsi_vlog_unsigned_case_compare(t5, 5, t7, 32);
    if (t41 == 1)
        goto LAB47;

LAB48:    t14 = ((char*)((ng11)));
    t42 = xsi_vlog_unsigned_case_compare(t5, 5, t14, 32);
    if (t42 == 1)
        goto LAB49;

LAB50:    t16 = ((char*)((ng16)));
    t43 = xsi_vlog_unsigned_case_compare(t5, 5, t16, 32);
    if (t43 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(44, ng0);
    t19 = (t0 + 2064);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 2064);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2064);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t21, t25, t28, 2, 1, t30, 32, 1);
    t31 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t31, t22, 0, 0, 21, 0LL);

LAB55:    goto LAB23;

LAB11:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1504U);
    t6 = *((char **)t3);

LAB56:    t3 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t18 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t15 == 1)
        goto LAB59;

LAB60:    t3 = ((char*)((ng9)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t18 == 1)
        goto LAB61;

LAB62:    t7 = ((char*)((ng14)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 32);
    if (t40 == 1)
        goto LAB63;

LAB64:    t14 = ((char*)((ng17)));
    t41 = xsi_vlog_unsigned_case_compare(t6, 5, t14, 32);
    if (t41 == 1)
        goto LAB65;

LAB66:    t16 = ((char*)((ng10)));
    t42 = xsi_vlog_unsigned_case_compare(t6, 5, t16, 32);
    if (t42 == 1)
        goto LAB67;

LAB68:    t19 = ((char*)((ng18)));
    t43 = xsi_vlog_unsigned_case_compare(t6, 5, t19, 32);
    if (t43 == 1)
        goto LAB69;

LAB70:    t20 = ((char*)((ng11)));
    t44 = xsi_vlog_unsigned_case_compare(t6, 5, t20, 32);
    if (t44 == 1)
        goto LAB71;

LAB72:    t21 = ((char*)((ng19)));
    t45 = xsi_vlog_unsigned_case_compare(t6, 5, t21, 32);
    if (t45 == 1)
        goto LAB73;

LAB74:    t23 = ((char*)((ng20)));
    t46 = xsi_vlog_unsigned_case_compare(t6, 5, t23, 32);
    if (t46 == 1)
        goto LAB75;

LAB76:
LAB78:
LAB77:    xsi_set_current_line(48, ng0);
    t24 = (t0 + 2064);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2064);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t0 + 2064);
    t32 = (t31 + 64U);
    t39 = *((char **)t32);
    t47 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t26, t30, t39, 2, 1, t47, 32, 1);
    t48 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t48, t22, 0, 0, 21, 0LL);

LAB79:    goto LAB23;

LAB13:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1504U);
    t7 = *((char **)t3);

LAB80:    t3 = ((char*)((ng5)));
    t18 = xsi_vlog_unsigned_case_compare(t7, 5, t3, 32);
    if (t18 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 32);
    if (t15 == 1)
        goto LAB83;

LAB84:    t3 = ((char*)((ng21)));
    t18 = xsi_vlog_unsigned_case_compare(t7, 5, t3, 32);
    if (t18 == 1)
        goto LAB85;

LAB86:    t14 = ((char*)((ng13)));
    t40 = xsi_vlog_unsigned_case_compare(t7, 5, t14, 32);
    if (t40 == 1)
        goto LAB87;

LAB88:    t16 = ((char*)((ng14)));
    t41 = xsi_vlog_unsigned_case_compare(t7, 5, t16, 32);
    if (t41 == 1)
        goto LAB89;

LAB90:    t19 = ((char*)((ng22)));
    t42 = xsi_vlog_unsigned_case_compare(t7, 5, t19, 32);
    if (t42 == 1)
        goto LAB91;

LAB92:    t20 = ((char*)((ng17)));
    t43 = xsi_vlog_unsigned_case_compare(t7, 5, t20, 32);
    if (t43 == 1)
        goto LAB93;

LAB94:    t21 = ((char*)((ng23)));
    t44 = xsi_vlog_unsigned_case_compare(t7, 5, t21, 32);
    if (t44 == 1)
        goto LAB95;

LAB96:    t23 = ((char*)((ng18)));
    t45 = xsi_vlog_unsigned_case_compare(t7, 5, t23, 32);
    if (t45 == 1)
        goto LAB97;

LAB98:    t24 = ((char*)((ng24)));
    t46 = xsi_vlog_unsigned_case_compare(t7, 5, t24, 32);
    if (t46 == 1)
        goto LAB99;

LAB100:    t25 = ((char*)((ng11)));
    t49 = xsi_vlog_unsigned_case_compare(t7, 5, t25, 32);
    if (t49 == 1)
        goto LAB101;

LAB102:    t26 = ((char*)((ng25)));
    t50 = xsi_vlog_unsigned_case_compare(t7, 5, t26, 32);
    if (t50 == 1)
        goto LAB103;

LAB104:    t27 = ((char*)((ng19)));
    t51 = xsi_vlog_unsigned_case_compare(t7, 5, t27, 32);
    if (t51 == 1)
        goto LAB105;

LAB106:    t28 = ((char*)((ng20)));
    t52 = xsi_vlog_unsigned_case_compare(t7, 5, t28, 32);
    if (t52 == 1)
        goto LAB107;

LAB108:
LAB110:
LAB109:    xsi_set_current_line(52, ng0);
    t30 = (t0 + 2064);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t39 = (t0 + 2064);
    t47 = (t39 + 72U);
    t48 = *((char **)t47);
    t53 = (t0 + 2064);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t56 = (t0 + 1344U);
    t57 = *((char **)t56);
    memset(t29, 0, 8);
    t56 = (t29 + 4);
    t58 = (t57 + 4);
    t8 = *((unsigned int *)t57);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t58);
    t11 = (t10 >> 0);
    *((unsigned int *)t56) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t32, t48, t55, 2, 1, t29, 2, 2);
    t59 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t59, t22, 0, 0, 21, 0LL);

LAB111:    goto LAB23;

LAB15:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1504U);
    t14 = *((char **)t3);

LAB112:    t3 = ((char*)((ng5)));
    t18 = xsi_vlog_unsigned_case_compare(t14, 5, t3, 32);
    if (t18 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t14, 5, t2, 32);
    if (t15 == 1)
        goto LAB115;

LAB116:    t3 = ((char*)((ng9)));
    t18 = xsi_vlog_unsigned_case_compare(t14, 5, t3, 32);
    if (t18 == 1)
        goto LAB117;

LAB118:    t16 = ((char*)((ng14)));
    t40 = xsi_vlog_unsigned_case_compare(t14, 5, t16, 32);
    if (t40 == 1)
        goto LAB119;

LAB120:    t19 = ((char*)((ng15)));
    t41 = xsi_vlog_unsigned_case_compare(t14, 5, t19, 32);
    if (t41 == 1)
        goto LAB121;

LAB122:    t20 = ((char*)((ng26)));
    t42 = xsi_vlog_unsigned_case_compare(t14, 5, t20, 32);
    if (t42 == 1)
        goto LAB123;

LAB124:    t21 = ((char*)((ng25)));
    t43 = xsi_vlog_unsigned_case_compare(t14, 5, t21, 32);
    if (t43 == 1)
        goto LAB125;

LAB126:    t23 = ((char*)((ng20)));
    t44 = xsi_vlog_unsigned_case_compare(t14, 5, t23, 32);
    if (t44 == 1)
        goto LAB127;

LAB128:
LAB130:
LAB129:    xsi_set_current_line(56, ng0);
    t24 = (t0 + 2064);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2064);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t0 + 2064);
    t32 = (t31 + 64U);
    t39 = *((char **)t32);
    t47 = (t0 + 1344U);
    t48 = *((char **)t47);
    memset(t29, 0, 8);
    t47 = (t29 + 4);
    t53 = (t48 + 4);
    t8 = *((unsigned int *)t48);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t53);
    t11 = (t10 >> 0);
    *((unsigned int *)t47) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t26, t30, t39, 2, 1, t29, 2, 2);
    t54 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t54, t22, 0, 0, 21, 0LL);

LAB131:    goto LAB23;

LAB17:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1504U);
    t16 = *((char **)t3);

LAB132:    t3 = ((char*)((ng8)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 5, t3, 32);
    if (t18 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 5, t2, 32);
    if (t15 == 1)
        goto LAB135;

LAB136:    t3 = ((char*)((ng17)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 5, t3, 32);
    if (t18 == 1)
        goto LAB137;

LAB138:    t19 = ((char*)((ng25)));
    t40 = xsi_vlog_unsigned_case_compare(t16, 5, t19, 32);
    if (t40 == 1)
        goto LAB139;

LAB140:    t20 = ((char*)((ng20)));
    t41 = xsi_vlog_unsigned_case_compare(t16, 5, t20, 32);
    if (t41 == 1)
        goto LAB141;

LAB142:
LAB144:
LAB143:    xsi_set_current_line(60, ng0);
    t21 = (t0 + 2064);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 2064);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2064);
    t30 = (t28 + 64U);
    t31 = *((char **)t30);
    t32 = (t0 + 1344U);
    t39 = *((char **)t32);
    memset(t29, 0, 8);
    t32 = (t29 + 4);
    t47 = (t39 + 4);
    t8 = *((unsigned int *)t39);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t47);
    t11 = (t10 >> 0);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t24, t27, t31, 2, 1, t29, 2, 2);
    t48 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t48, t22, 0, 0, 21, 0LL);

LAB145:    goto LAB23;

LAB19:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1504U);
    t19 = *((char **)t3);

LAB146:    t3 = ((char*)((ng13)));
    t18 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t18 == 1)
        goto LAB147;

LAB148:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 5, t2, 32);
    if (t15 == 1)
        goto LAB149;

LAB150:
LAB152:
LAB151:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2064);
    t20 = (t3 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 2064);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2064);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t30 = (t0 + 1344U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t8 = *((unsigned int *)t31);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t32);
    t11 = (t10 >> 0);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t21, t25, t28, 2, 1, t29, 2, 2);
    t39 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t39, t22, 0, 0, 21, 0LL);

LAB153:    goto LAB23;

LAB21:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2064);
    t20 = (t3 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 2064);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2064);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t30 = (t0 + 1344U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t8 = *((unsigned int *)t31);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t32);
    t11 = (t10 >> 0);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t21, t25, t28, 2, 1, t29, 2, 2);
    t39 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t39, t22, 0, 0, 21, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(39, ng0);
    t19 = (t0 + 2064);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 2064);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2064);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t30 = (t0 + 1344U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 3U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t21, t25, t28, 2, 1, t29, 2, 2);
    t39 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t39, t22, 0, 0, 21, 0LL);
    goto LAB37;

LAB27:    goto LAB25;

LAB29:    goto LAB25;

LAB31:    goto LAB25;

LAB33:    goto LAB25;

LAB39:    xsi_set_current_line(43, ng0);
    t6 = (t0 + 2064);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 2064);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2064);
    t23 = (t21 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 1344U);
    t26 = *((char **)t25);
    memset(t29, 0, 8);
    t25 = (t29 + 4);
    t27 = (t26 + 4);
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t27);
    t11 = (t10 >> 0);
    *((unsigned int *)t25) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t14, t20, t24, 2, 1, t29, 2, 2);
    t28 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 21, 0LL);
    goto LAB55;

LAB41:    goto LAB39;

LAB43:    goto LAB39;

LAB45:    goto LAB39;

LAB47:    goto LAB39;

LAB49:    goto LAB39;

LAB51:    goto LAB39;

LAB57:    xsi_set_current_line(47, ng0);
    t7 = (t0 + 2064);
    t14 = (t7 + 56U);
    t16 = *((char **)t14);
    t19 = (t0 + 2064);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t23 = (t0 + 2064);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1344U);
    t27 = *((char **)t26);
    memset(t29, 0, 8);
    t26 = (t29 + 4);
    t28 = (t27 + 4);
    t8 = *((unsigned int *)t27);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t28);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t16, t21, t25, 2, 1, t29, 2, 2);
    t30 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t30, t22, 0, 0, 21, 0LL);
    goto LAB79;

LAB59:    goto LAB57;

LAB61:    goto LAB57;

LAB63:    goto LAB57;

LAB65:    goto LAB57;

LAB67:    goto LAB57;

LAB69:    goto LAB57;

LAB71:    goto LAB57;

LAB73:    goto LAB57;

LAB75:    goto LAB57;

LAB81:    xsi_set_current_line(51, ng0);
    t14 = (t0 + 2064);
    t16 = (t14 + 56U);
    t19 = *((char **)t16);
    t20 = (t0 + 2064);
    t21 = (t20 + 72U);
    t23 = *((char **)t21);
    t24 = (t0 + 2064);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t19, t23, t26, 2, 1, t27, 32, 1);
    t28 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 21, 0LL);
    goto LAB111;

LAB83:    goto LAB81;

LAB85:    goto LAB81;

LAB87:    goto LAB81;

LAB89:    goto LAB81;

LAB91:    goto LAB81;

LAB93:    goto LAB81;

LAB95:    goto LAB81;

LAB97:    goto LAB81;

LAB99:    goto LAB81;

LAB101:    goto LAB81;

LAB103:    goto LAB81;

LAB105:    goto LAB81;

LAB107:    goto LAB81;

LAB113:    xsi_set_current_line(55, ng0);
    t16 = (t0 + 2064);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2064);
    t23 = (t21 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2064);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t20, t24, t27, 2, 1, t28, 32, 1);
    t30 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t30, t22, 0, 0, 21, 0LL);
    goto LAB131;

LAB115:    goto LAB113;

LAB117:    goto LAB113;

LAB119:    goto LAB113;

LAB121:    goto LAB113;

LAB123:    goto LAB113;

LAB125:    goto LAB113;

LAB127:    goto LAB113;

LAB133:    xsi_set_current_line(59, ng0);
    t19 = (t0 + 2064);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 2064);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2064);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t21, t25, t28, 2, 1, t30, 32, 1);
    t31 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t31, t22, 0, 0, 21, 0LL);
    goto LAB145;

LAB135:    goto LAB133;

LAB137:    goto LAB133;

LAB139:    goto LAB133;

LAB141:    goto LAB133;

LAB147:    xsi_set_current_line(63, ng0);
    t20 = (t0 + 2064);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    t24 = (t0 + 2064);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 2064);
    t28 = (t27 + 64U);
    t30 = *((char **)t28);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t23, t26, t30, 2, 1, t31, 32, 1);
    t32 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t32, t22, 0, 0, 21, 0LL);
    goto LAB153;

LAB149:    goto LAB147;

}


extern void work_m_00000000003827351859_1739414686_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_36_1};
	xsi_register_didat("work_m_00000000003827351859_1739414686", "isim/Systems_isim_beh.exe.sim/work/m_00000000003827351859_1739414686.didat");
	xsi_register_executes(pe);
}
