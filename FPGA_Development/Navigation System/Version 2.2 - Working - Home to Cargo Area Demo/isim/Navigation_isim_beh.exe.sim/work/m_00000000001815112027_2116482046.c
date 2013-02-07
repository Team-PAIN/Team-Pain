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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/orientation.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {2, 0};
static int ng8[] = {4, 0};
static int ng9[] = {3, 0};
static int ng10[] = {6, 0};
static int ng11[] = {8, 0};
static int ng12[] = {5, 0};
static int ng13[] = {10, 0};
static int ng14[] = {12, 0};
static int ng15[] = {7, 0};
static int ng16[] = {14, 0};
static int ng17[] = {16, 0};
static int ng18[] = {9, 0};
static int ng19[] = {18, 0};
static int ng20[] = {20, 0};
static int ng21[] = {11, 0};
static int ng22[] = {21, 0};
static int ng23[] = {23, 0};
static int ng24[] = {13, 0};
static int ng25[] = {25, 0};
static int ng26[] = {27, 0};
static int ng27[] = {15, 0};
static int ng28[] = {28, 0};
static int ng29[] = {30, 0};
static int ng30[] = {17, 0};
static int ng31[] = {31, 0};
static int ng32[] = {33, 0};
static int ng33[] = {19, 0};
static int ng34[] = {34, 0};
static int ng35[] = {36, 0};
static int ng36[] = {37, 0};
static int ng37[] = {22, 0};
static int ng38[] = {38, 0};
static int ng39[] = {39, 0};
static int ng40[] = {24, 0};
static int ng41[] = {41, 0};
static int ng42[] = {42, 0};
static int ng43[] = {26, 0};
static int ng44[] = {43, 0};
static int ng45[] = {44, 0};
static int ng46[] = {45, 0};
static int ng47[] = {29, 0};
static int ng48[] = {46, 0};
static int ng49[] = {47, 0};
static int ng50[] = {48, 0};
static int ng51[] = {32, 0};
static int ng52[] = {49, 0};
static int ng53[] = {50, 0};
static int ng54[] = {51, 0};
static int ng55[] = {35, 0};
static int ng56[] = {52, 0};
static int ng57[] = {53, 0};
static int ng58[] = {54, 0};
static int ng59[] = {40, 0};
static int ng60[] = {55, 0};
static int ng61[] = {56, 0};
static int ng62[] = {57, 0};
static int ng63[] = {58, 0};
static int ng64[] = {59, 0};
static int ng65[] = {60, 0};
static int ng66[] = {61, 0};
static int ng67[] = {62, 0};
static int ng68[] = {63, 0};
static int ng69[] = {64, 0};
static int ng70[] = {65, 0};
static int ng71[] = {66, 0};
static int ng72[] = {67, 0};
static int ng73[] = {68, 0};
static int ng74[] = {69, 0};
static int ng75[] = {70, 0};



static void Always_31_0(char *t0)
{
    char t7[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
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
    int t32;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB8;

LAB9:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB15:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB17;

LAB18:    t8 = (t7 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t4);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t5);
    t20 = (t14 ^ t15);
    t21 = (t13 | t20);
    t22 = *((unsigned int *)t2);
    t23 = *((unsigned int *)t5);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB27;

LAB24:    if (t24 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t7) = 1;

LAB27:    t8 = (t7 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(41, ng0);

LAB32:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB30:
LAB22:
LAB13:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB33:    t5 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t32 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng10)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng15)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng11)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng18)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng13)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng21)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng14)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng24)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng16)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng27)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng17)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng30)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng19)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng33)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng20)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng22)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng37)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng23)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng40)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng25)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng43)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng26)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng28)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng47)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng29)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng31)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng51)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng32)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng34)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng55)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng35)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng36)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng38)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng39)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng59)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng41)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB116;

LAB117:    t2 = ((char*)((ng42)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB118;

LAB119:    t2 = ((char*)((ng44)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB120;

LAB121:    t2 = ((char*)((ng45)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB122;

LAB123:    t2 = ((char*)((ng46)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB124;

LAB125:    t2 = ((char*)((ng48)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB126;

LAB127:    t2 = ((char*)((ng49)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB128;

LAB129:    t2 = ((char*)((ng50)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB130;

LAB131:    t2 = ((char*)((ng52)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB132;

LAB133:    t2 = ((char*)((ng53)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB134;

LAB135:    t2 = ((char*)((ng54)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB136;

LAB137:    t2 = ((char*)((ng56)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB138;

LAB139:    t2 = ((char*)((ng57)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB140;

LAB141:    t2 = ((char*)((ng58)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB142;

LAB143:    t2 = ((char*)((ng60)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB144;

LAB145:    t2 = ((char*)((ng61)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB146;

LAB147:    t2 = ((char*)((ng62)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB148;

LAB149:    t2 = ((char*)((ng63)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB150;

LAB151:    t2 = ((char*)((ng64)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB152;

LAB153:    t2 = ((char*)((ng65)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB154;

LAB155:    t2 = ((char*)((ng66)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB156;

LAB157:    t2 = ((char*)((ng67)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB158;

LAB159:    t2 = ((char*)((ng68)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB160;

LAB161:    t2 = ((char*)((ng69)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB162;

LAB163:    t2 = ((char*)((ng70)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB164;

LAB165:    t2 = ((char*)((ng71)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB166;

LAB167:    t2 = ((char*)((ng72)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB168;

LAB169:    t2 = ((char*)((ng73)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB170;

LAB171:    t2 = ((char*)((ng74)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB172;

LAB173:    t2 = ((char*)((ng75)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t32 == 1)
        goto LAB174;

LAB175:
LAB177:
LAB176:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB178:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(32, ng0);

LAB14:    xsi_set_current_line(33, ng0);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 8, t17, 8, t18, 8);
    t16 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB13;

LAB16:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(35, ng0);

LAB23:    xsi_set_current_line(36, ng0);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 1368U);
    t16 = *((char **)t9);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 8, t10, 8, t16, 8);
    t9 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t9, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB22;

LAB26:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(38, ng0);

LAB31:    xsi_set_current_line(39, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 8, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB30;

LAB34:    xsi_set_current_line(47, ng0);
    t6 = ((char*)((ng3)));
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);
    goto LAB178;

LAB36:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB38:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB40:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB42:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB44:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB46:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB48:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB50:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB52:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB54:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB56:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB58:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB60:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB62:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB64:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB66:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB68:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng31)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB70:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB72:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng34)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB74:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng35)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB76:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng36)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB78:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng38)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB80:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng39)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB82:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng41)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB84:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng42)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB86:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng44)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB88:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng45)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB90:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng46)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB92:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng48)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB94:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng49)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB96:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng50)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB98:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng52)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB100:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng53)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB102:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng54)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB104:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng54)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB106:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng56)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB108:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng57)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB110:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng58)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB112:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng58)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB114:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng60)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB116:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng61)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB118:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng61)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB120:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng62)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB122:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng63)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB124:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng63)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB126:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng64)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB128:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng64)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB130:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng65)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB132:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng65)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB134:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng66)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB136:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng66)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB138:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng67)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB140:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng67)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB142:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng68)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB144:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng68)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB146:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng68)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB148:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng69)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB150:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng69)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB152:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng70)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB154:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng70)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB156:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng70)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB158:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng71)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB160:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng71)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB162:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng71)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB164:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng72)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB166:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng72)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB168:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng72)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB170:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng73)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB172:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng73)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

LAB174:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng73)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 8, 0LL);
    goto LAB178;

}


extern void work_m_00000000001815112027_2116482046_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001815112027_2116482046", "isim/Navigation_isim_beh.exe.sim/work/m_00000000001815112027_2116482046.didat");
	xsi_register_executes(pe);
}
