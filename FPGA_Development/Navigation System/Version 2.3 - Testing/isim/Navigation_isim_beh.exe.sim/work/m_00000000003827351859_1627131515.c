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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/MC_Pulse_Modulation.v";
static unsigned int ng1[] = {100000000U, 0U};
static int ng2[] = {1000, 0};
static int ng3[] = {0, 0};
static int ng4[] = {150000, 0};
static int ng5[] = {1, 0};
static int ng6[] = {500, 0};
static int ng7[] = {2, 0};
static int ng8[] = {6, 0};
static int ng9[] = {12, 0};
static int ng10[] = {18, 0};
static int ng11[] = {4, 0};
static int ng12[] = {9, 0};
static int ng13[] = {14, 0};
static int ng14[] = {22, 0};
static int ng15[] = {3, 0};
static int ng16[] = {15, 0};
static int ng17[] = {21, 0};
static int ng18[] = {23, 0};
static int ng19[] = {5, 0};
static int ng20[] = {7, 0};
static int ng21[] = {11, 0};
static int ng22[] = {13, 0};
static int ng23[] = {17, 0};
static int ng24[] = {19, 0};
static int ng25[] = {16, 0};



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
    char *t46;
    int t47;
    int t48;
    int t49;
    int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;

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

LAB12:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng20)));
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

LAB32:
LAB34:
LAB33:    xsi_set_current_line(40, ng0);
    t6 = (t0 + 2064);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t16 = (t0 + 2064);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2064);
    t23 = (t21 + 64U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t14, t20, t24, 2, 1, t25, 32, 1);
    t26 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t26, t22, 0, 0, 21, 0LL);

LAB35:    goto LAB23;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1504U);
    t5 = *((char **)t3);

LAB36:    t3 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 32);
    if (t18 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t15 == 1)
        goto LAB39;

LAB40:    t3 = ((char*)((ng12)));
    t18 = xsi_vlog_unsigned_case_compare(t5, 5, t3, 32);
    if (t18 == 1)
        goto LAB41;

LAB42:    t6 = ((char*)((ng13)));
    t40 = xsi_vlog_unsigned_case_compare(t5, 5, t6, 32);
    if (t40 == 1)
        goto LAB43;

LAB44:    t7 = ((char*)((ng10)));
    t41 = xsi_vlog_unsigned_case_compare(t5, 5, t7, 32);
    if (t41 == 1)
        goto LAB45;

LAB46:    t14 = ((char*)((ng14)));
    t42 = xsi_vlog_unsigned_case_compare(t5, 5, t14, 32);
    if (t42 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(44, ng0);
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

LAB51:    goto LAB23;

LAB11:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1504U);
    t6 = *((char **)t3);

LAB52:    t3 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t18 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t15 == 1)
        goto LAB55;

LAB56:    t3 = ((char*)((ng8)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 5, t3, 32);
    if (t18 == 1)
        goto LAB57;

LAB58:    t7 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 32);
    if (t40 == 1)
        goto LAB59;

LAB60:    t14 = ((char*)((ng9)));
    t41 = xsi_vlog_unsigned_case_compare(t6, 5, t14, 32);
    if (t41 == 1)
        goto LAB61;

LAB62:    t16 = ((char*)((ng16)));
    t42 = xsi_vlog_unsigned_case_compare(t6, 5, t16, 32);
    if (t42 == 1)
        goto LAB63;

LAB64:    t19 = ((char*)((ng10)));
    t43 = xsi_vlog_unsigned_case_compare(t6, 5, t19, 32);
    if (t43 == 1)
        goto LAB65;

LAB66:    t20 = ((char*)((ng17)));
    t44 = xsi_vlog_unsigned_case_compare(t6, 5, t20, 32);
    if (t44 == 1)
        goto LAB67;

LAB68:    t21 = ((char*)((ng18)));
    t45 = xsi_vlog_unsigned_case_compare(t6, 5, t21, 32);
    if (t45 == 1)
        goto LAB69;

LAB70:
LAB72:
LAB71:    xsi_set_current_line(48, ng0);
    t23 = (t0 + 2064);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2064);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t30 = (t0 + 2064);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t39 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 21, t25, t28, t32, 2, 1, t39, 32, 1);
    t46 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t46, t22, 0, 0, 21, 0LL);

LAB73:    goto LAB23;

LAB13:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1504U);
    t7 = *((char **)t3);

LAB74:    t3 = ((char*)((ng5)));
    t18 = xsi_vlog_unsigned_case_compare(t7, 5, t3, 32);
    if (t18 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t7, 5, t2, 32);
    if (t15 == 1)
        goto LAB77;

LAB78:    t3 = ((char*)((ng19)));
    t18 = xsi_vlog_unsigned_case_compare(t7, 5, t3, 32);
    if (t18 == 1)
        goto LAB79;

LAB80:    t14 = ((char*)((ng20)));
    t40 = xsi_vlog_unsigned_case_compare(t7, 5, t14, 32);
    if (t40 == 1)
        goto LAB81;

LAB82:    t16 = ((char*)((ng12)));
    t41 = xsi_vlog_unsigned_case_compare(t7, 5, t16, 32);
    if (t41 == 1)
        goto LAB83;

LAB84:    t19 = ((char*)((ng21)));
    t42 = xsi_vlog_unsigned_case_compare(t7, 5, t19, 32);
    if (t42 == 1)
        goto LAB85;

LAB86:    t20 = ((char*)((ng22)));
    t43 = xsi_vlog_unsigned_case_compare(t7, 5, t20, 32);
    if (t43 == 1)
        goto LAB87;

LAB88:    t21 = ((char*)((ng16)));
    t44 = xsi_vlog_unsigned_case_compare(t7, 5, t21, 32);
    if (t44 == 1)
        goto LAB89;

LAB90:    t23 = ((char*)((ng23)));
    t45 = xsi_vlog_unsigned_case_compare(t7, 5, t23, 32);
    if (t45 == 1)
        goto LAB91;

LAB92:    t24 = ((char*)((ng10)));
    t47 = xsi_vlog_unsigned_case_compare(t7, 5, t24, 32);
    if (t47 == 1)
        goto LAB93;

LAB94:    t25 = ((char*)((ng24)));
    t48 = xsi_vlog_unsigned_case_compare(t7, 5, t25, 32);
    if (t48 == 1)
        goto LAB95;

LAB96:    t26 = ((char*)((ng17)));
    t49 = xsi_vlog_unsigned_case_compare(t7, 5, t26, 32);
    if (t49 == 1)
        goto LAB97;

LAB98:    t27 = ((char*)((ng18)));
    t50 = xsi_vlog_unsigned_case_compare(t7, 5, t27, 32);
    if (t50 == 1)
        goto LAB99;

LAB100:
LAB102:
LAB101:    xsi_set_current_line(52, ng0);
    t28 = (t0 + 2064);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2064);
    t39 = (t32 + 72U);
    t46 = *((char **)t39);
    t51 = (t0 + 2064);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t54 = (t0 + 1344U);
    t55 = *((char **)t54);
    memset(t29, 0, 8);
    t54 = (t29 + 4);
    t56 = (t55 + 4);
    t8 = *((unsigned int *)t55);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t56);
    t11 = (t10 >> 0);
    *((unsigned int *)t54) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t31, t46, t53, 2, 1, t29, 2, 2);
    t57 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t57, t22, 0, 0, 21, 0LL);

LAB103:    goto LAB23;

LAB15:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1504U);
    t14 = *((char **)t3);

LAB104:    t3 = ((char*)((ng5)));
    t18 = xsi_vlog_unsigned_case_compare(t14, 5, t3, 32);
    if (t18 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t14, 5, t2, 32);
    if (t15 == 1)
        goto LAB107;

LAB108:    t3 = ((char*)((ng8)));
    t18 = xsi_vlog_unsigned_case_compare(t14, 5, t3, 32);
    if (t18 == 1)
        goto LAB109;

LAB110:    t16 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t14, 5, t16, 32);
    if (t40 == 1)
        goto LAB111;

LAB112:    t19 = ((char*)((ng21)));
    t41 = xsi_vlog_unsigned_case_compare(t14, 5, t19, 32);
    if (t41 == 1)
        goto LAB113;

LAB114:    t20 = ((char*)((ng13)));
    t42 = xsi_vlog_unsigned_case_compare(t14, 5, t20, 32);
    if (t42 == 1)
        goto LAB115;

LAB116:    t21 = ((char*)((ng25)));
    t43 = xsi_vlog_unsigned_case_compare(t14, 5, t21, 32);
    if (t43 == 1)
        goto LAB117;

LAB118:    t23 = ((char*)((ng24)));
    t44 = xsi_vlog_unsigned_case_compare(t14, 5, t23, 32);
    if (t44 == 1)
        goto LAB119;

LAB120:    t24 = ((char*)((ng18)));
    t45 = xsi_vlog_unsigned_case_compare(t14, 5, t24, 32);
    if (t45 == 1)
        goto LAB121;

LAB122:
LAB124:
LAB123:    xsi_set_current_line(56, ng0);
    t25 = (t0 + 2064);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2064);
    t30 = (t28 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2064);
    t39 = (t32 + 64U);
    t46 = *((char **)t39);
    t51 = (t0 + 1344U);
    t52 = *((char **)t51);
    memset(t29, 0, 8);
    t51 = (t29 + 4);
    t53 = (t52 + 4);
    t8 = *((unsigned int *)t52);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t53);
    t11 = (t10 >> 0);
    *((unsigned int *)t51) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t27, t31, t46, 2, 1, t29, 2, 2);
    t54 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t54, t22, 0, 0, 21, 0LL);

LAB125:    goto LAB23;

LAB17:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1504U);
    t16 = *((char **)t3);

LAB126:    t3 = ((char*)((ng15)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 5, t3, 32);
    if (t18 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 5, t2, 32);
    if (t15 == 1)
        goto LAB129;

LAB130:    t3 = ((char*)((ng21)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 5, t3, 32);
    if (t18 == 1)
        goto LAB131;

LAB132:    t19 = ((char*)((ng16)));
    t40 = xsi_vlog_unsigned_case_compare(t16, 5, t19, 32);
    if (t40 == 1)
        goto LAB133;

LAB134:    t20 = ((char*)((ng24)));
    t41 = xsi_vlog_unsigned_case_compare(t16, 5, t20, 32);
    if (t41 == 1)
        goto LAB135;

LAB136:    t21 = ((char*)((ng18)));
    t42 = xsi_vlog_unsigned_case_compare(t16, 5, t21, 32);
    if (t42 == 1)
        goto LAB137;

LAB138:
LAB140:
LAB139:    xsi_set_current_line(60, ng0);
    t23 = (t0 + 2064);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 2064);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t30 = (t0 + 2064);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t39 = (t0 + 1344U);
    t46 = *((char **)t39);
    memset(t29, 0, 8);
    t39 = (t29 + 4);
    t51 = (t46 + 4);
    t8 = *((unsigned int *)t46);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t51);
    t11 = (t10 >> 0);
    *((unsigned int *)t39) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t25, t28, t32, 2, 1, t29, 2, 2);
    t52 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t52, t22, 0, 0, 21, 0LL);

LAB141:    goto LAB23;

LAB19:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1504U);
    t19 = *((char **)t3);

LAB142:    t3 = ((char*)((ng20)));
    t18 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t18 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 5, t2, 32);
    if (t15 == 1)
        goto LAB145;

LAB146:    t3 = ((char*)((ng18)));
    t18 = xsi_vlog_unsigned_case_compare(t19, 5, t3, 32);
    if (t18 == 1)
        goto LAB147;

LAB148:
LAB150:
LAB149:    xsi_set_current_line(64, ng0);
    t20 = (t0 + 2064);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    t24 = (t0 + 2064);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 2064);
    t28 = (t27 + 64U);
    t30 = *((char **)t28);
    t31 = (t0 + 1344U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t31 = (t29 + 4);
    t39 = (t32 + 4);
    t8 = *((unsigned int *)t32);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t39);
    t11 = (t10 >> 0);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 3U);
    xsi_vlog_generic_get_array_select_value(t22, 21, t23, t26, t30, 2, 1, t29, 2, 2);
    t46 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t46, t22, 0, 0, 21, 0LL);

LAB151:    goto LAB23;

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
    goto LAB35;

LAB27:    goto LAB25;

LAB29:    goto LAB25;

LAB31:    goto LAB25;

LAB37:    xsi_set_current_line(43, ng0);
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
    goto LAB51;

LAB39:    goto LAB37;

LAB41:    goto LAB37;

LAB43:    goto LAB37;

LAB45:    goto LAB37;

LAB47:    goto LAB37;

LAB53:    xsi_set_current_line(47, ng0);
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
    goto LAB73;

LAB55:    goto LAB53;

LAB57:    goto LAB53;

LAB59:    goto LAB53;

LAB61:    goto LAB53;

LAB63:    goto LAB53;

LAB65:    goto LAB53;

LAB67:    goto LAB53;

LAB69:    goto LAB53;

LAB75:    xsi_set_current_line(51, ng0);
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
    goto LAB103;

LAB77:    goto LAB75;

LAB79:    goto LAB75;

LAB81:    goto LAB75;

LAB83:    goto LAB75;

LAB85:    goto LAB75;

LAB87:    goto LAB75;

LAB89:    goto LAB75;

LAB91:    goto LAB75;

LAB93:    goto LAB75;

LAB95:    goto LAB75;

LAB97:    goto LAB75;

LAB99:    goto LAB75;

LAB105:    xsi_set_current_line(55, ng0);
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
    goto LAB125;

LAB107:    goto LAB105;

LAB109:    goto LAB105;

LAB111:    goto LAB105;

LAB113:    goto LAB105;

LAB115:    goto LAB105;

LAB117:    goto LAB105;

LAB119:    goto LAB105;

LAB121:    goto LAB105;

LAB127:    xsi_set_current_line(59, ng0);
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
    goto LAB141;

LAB129:    goto LAB127;

LAB131:    goto LAB127;

LAB133:    goto LAB127;

LAB135:    goto LAB127;

LAB137:    goto LAB127;

LAB143:    xsi_set_current_line(63, ng0);
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
    goto LAB151;

LAB145:    goto LAB143;

LAB147:    goto LAB143;

}


extern void work_m_00000000003827351859_1627131515_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_36_1};
	xsi_register_didat("work_m_00000000003827351859_1627131515", "isim/Navigation_isim_beh.exe.sim/work/m_00000000003827351859_1627131515.didat");
	xsi_register_executes(pe);
}
