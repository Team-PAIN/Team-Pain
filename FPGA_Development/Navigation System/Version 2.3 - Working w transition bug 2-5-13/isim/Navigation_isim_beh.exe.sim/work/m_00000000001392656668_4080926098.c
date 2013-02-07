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
static const char *ng0 = "C:/fa12sp13_SourceCode/team2/branches/FPGA_Development/Navigation System/Version1.1-Working/MC_Acceleration_Modulation.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {8800000, 0};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {0U, 0U};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 25);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t8[8];
    char t22[8];
    char t31[8];
    char t49[8];
    char t56[8];
    char t64[8];
    char t74[8];
    char t85[8];
    char t87[8];
    char t88[8];
    char t89[8];
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
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t32;
    unsigned int t33;
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
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t86;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    int t97;
    char *t98;
    unsigned int t99;
    int t100;
    int t101;
    char *t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    int t111;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1928);
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
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(38, ng0);

LAB14:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 25, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 3U);
    t24 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t24 & 3U);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t7 = (t6 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (t25 >> 0);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t7);
    t28 = (t27 >> 0);
    *((unsigned int *)t5) = t28;
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 & 3U);
    memset(t31, 0, 8);
    t9 = (t8 + 4);
    t10 = (t22 + 4);
    t32 = *((unsigned int *)t8);
    t33 = *((unsigned int *)t22);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t10);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t9);
    t40 = *((unsigned int *)t10);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB18;

LAB15:    if (t41 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t31) = 1;

LAB18:    t12 = (t31 + 4);
    t44 = *((unsigned int *)t12);
    t45 = (~(t44));
    t46 = *((unsigned int *)t31);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(48, ng0);

LAB43:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 3U);
    t24 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t24 & 3U);
    t5 = ((char*)((ng2)));
    memset(t22, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t5);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t7);
    t30 = (t28 ^ t29);
    t32 = (t27 | t30);
    t33 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t7);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB47;

LAB44:    if (t35 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t22) = 1;

LAB47:    t10 = (t22 + 4);
    t38 = *((unsigned int *)t10);
    t39 = (~(t38));
    t40 = *((unsigned int *)t22);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 2);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 2);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 7U);
    t24 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t24 & 7U);
    t5 = ((char*)((ng7)));
    memset(t22, 0, 8);
    t6 = (t8 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB52;

LAB51:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t8) > *((unsigned int *)t5))
        goto LAB53;

LAB54:    t10 = (t22 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    t4 = (t0 + 1768);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    t9 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t8, t22, t31, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t97 = (!(t13));
    t11 = (t22 + 4);
    t14 = *((unsigned int *)t11);
    t100 = (!(t14));
    t101 = (t97 && t100);
    t12 = (t31 + 4);
    t15 = *((unsigned int *)t12);
    t104 = (!(t15));
    t105 = (t101 && t104);
    if (t105 == 1)
        goto LAB61;

LAB62:
LAB58:
LAB50:
LAB21:
LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(37, ng0);
    t18 = (t0 + 1928);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 25, t21, 32);
    t23 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 25, 0LL);
    goto LAB13;

LAB17:    t11 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(41, ng0);

LAB22:    xsi_set_current_line(42, ng0);
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t49, 0, 8);
    t18 = (t49 + 4);
    t20 = (t19 + 4);
    t50 = *((unsigned int *)t19);
    t51 = (t50 >> 2);
    *((unsigned int *)t49) = t51;
    t52 = *((unsigned int *)t20);
    t53 = (t52 >> 2);
    *((unsigned int *)t18) = t53;
    t54 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t54 & 7U);
    t55 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t55 & 7U);
    t21 = (t0 + 1208U);
    t23 = *((char **)t21);
    memset(t56, 0, 8);
    t21 = (t56 + 4);
    t57 = (t23 + 4);
    t58 = *((unsigned int *)t23);
    t59 = (t58 >> 2);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 2);
    *((unsigned int *)t21) = t61;
    t62 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t62 & 7U);
    t63 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t63 & 7U);
    memset(t64, 0, 8);
    t65 = (t49 + 4);
    if (*((unsigned int *)t65) != 0)
        goto LAB24;

LAB23:    t66 = (t56 + 4);
    if (*((unsigned int *)t66) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t49) < *((unsigned int *)t56))
        goto LAB25;

LAB26:    t68 = (t64 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 2);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 2);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 7U);
    t24 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t24 & 7U);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t7 = (t6 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (t25 >> 2);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t7);
    t28 = (t27 >> 2);
    *((unsigned int *)t5) = t28;
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 7U);
    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 & 7U);
    memset(t31, 0, 8);
    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB34;

LAB33:    t10 = (t22 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t8) > *((unsigned int *)t22))
        goto LAB35;

LAB36:    t12 = (t31 + 4);
    t32 = *((unsigned int *)t12);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB40:
LAB30:    goto LAB21;

LAB24:    t67 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t64) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(43, ng0);
    t75 = (t0 + 1368U);
    t76 = *((char **)t75);
    memset(t74, 0, 8);
    t75 = (t74 + 4);
    t77 = (t76 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (t78 >> 2);
    *((unsigned int *)t74) = t79;
    t80 = *((unsigned int *)t77);
    t81 = (t80 >> 2);
    *((unsigned int *)t75) = t81;
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t82 & 7U);
    t83 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t83 & 7U);
    t84 = ((char*)((ng4)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 32, t74, 32, t84, 32);
    t86 = (t0 + 1768);
    t90 = (t0 + 1768);
    t91 = (t90 + 72U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng5)));
    t94 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t87, t88, t89, ((int*)(t92)), 2, t93, 32, 1, t94, 32, 1);
    t95 = (t87 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (!(t96));
    t98 = (t88 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (!(t99));
    t101 = (t97 && t100);
    t102 = (t89 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (!(t103));
    t105 = (t101 && t104);
    if (t105 == 1)
        goto LAB31;

LAB32:    goto LAB30;

LAB31:    t106 = *((unsigned int *)t89);
    t107 = (t106 + 0);
    t108 = *((unsigned int *)t87);
    t109 = *((unsigned int *)t88);
    t110 = (t108 - t109);
    t111 = (t110 + 1);
    xsi_vlogvar_wait_assign_value(t86, t85, t107, *((unsigned int *)t88), t111, 0LL);
    goto LAB32;

LAB34:    t11 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t31) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(45, ng0);
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t49, 0, 8);
    t18 = (t49 + 4);
    t20 = (t19 + 4);
    t37 = *((unsigned int *)t19);
    t38 = (t37 >> 2);
    *((unsigned int *)t49) = t38;
    t39 = *((unsigned int *)t20);
    t40 = (t39 >> 2);
    *((unsigned int *)t18) = t40;
    t41 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t41 & 7U);
    t42 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t42 & 7U);
    t21 = ((char*)((ng4)));
    memset(t56, 0, 8);
    xsi_vlog_unsigned_minus(t56, 32, t49, 32, t21, 32);
    t23 = (t0 + 1768);
    t57 = (t0 + 1768);
    t65 = (t57 + 72U);
    t66 = *((char **)t65);
    t67 = ((char*)((ng5)));
    t68 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t64, t74, t85, ((int*)(t66)), 2, t67, 32, 1, t68, 32, 1);
    t75 = (t64 + 4);
    t43 = *((unsigned int *)t75);
    t97 = (!(t43));
    t76 = (t74 + 4);
    t44 = *((unsigned int *)t76);
    t100 = (!(t44));
    t101 = (t97 && t100);
    t77 = (t85 + 4);
    t45 = *((unsigned int *)t77);
    t104 = (!(t45));
    t105 = (t101 && t104);
    if (t105 == 1)
        goto LAB41;

LAB42:    goto LAB40;

LAB41:    t46 = *((unsigned int *)t85);
    t107 = (t46 + 0);
    t47 = *((unsigned int *)t64);
    t48 = *((unsigned int *)t74);
    t110 = (t47 - t48);
    t111 = (t110 + 1);
    xsi_vlogvar_wait_assign_value(t23, t56, t107, *((unsigned int *)t74), t111, 0LL);
    goto LAB42;

LAB46:    t9 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(50, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    memset(t49, 0, 8);
    t11 = (t49 + 4);
    t18 = (t12 + 4);
    t43 = *((unsigned int *)t12);
    t44 = (t43 >> 0);
    *((unsigned int *)t49) = t44;
    t45 = *((unsigned int *)t18);
    t46 = (t45 >> 0);
    *((unsigned int *)t11) = t46;
    t47 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t47 & 3U);
    t48 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t48 & 3U);
    t19 = ((char*)((ng7)));
    xsi_vlogtype_concat(t31, 5, 5, 2U, t19, 3, t49, 2);
    t20 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t20, t31, 0, 0, 5, 0LL);
    goto LAB50;

LAB52:    t9 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t22) = 1;
    goto LAB54;

LAB56:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t31, 0, 8);
    t11 = (t31 + 4);
    t18 = (t12 + 4);
    t30 = *((unsigned int *)t12);
    t32 = (t30 >> 2);
    *((unsigned int *)t31) = t32;
    t33 = *((unsigned int *)t18);
    t34 = (t33 >> 2);
    *((unsigned int *)t11) = t34;
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t35 & 7U);
    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & 7U);
    t19 = ((char*)((ng4)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_minus(t49, 32, t31, 32, t19, 32);
    t20 = (t0 + 1768);
    t21 = (t0 + 1768);
    t23 = (t21 + 72U);
    t57 = *((char **)t23);
    t65 = ((char*)((ng5)));
    t66 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t56, t64, t74, ((int*)(t57)), 2, t65, 32, 1, t66, 32, 1);
    t67 = (t56 + 4);
    t37 = *((unsigned int *)t67);
    t97 = (!(t37));
    t68 = (t64 + 4);
    t38 = *((unsigned int *)t68);
    t100 = (!(t38));
    t101 = (t97 && t100);
    t75 = (t74 + 4);
    t39 = *((unsigned int *)t75);
    t104 = (!(t39));
    t105 = (t101 && t104);
    if (t105 == 1)
        goto LAB59;

LAB60:    goto LAB58;

LAB59:    t40 = *((unsigned int *)t74);
    t107 = (t40 + 0);
    t41 = *((unsigned int *)t56);
    t42 = *((unsigned int *)t64);
    t110 = (t41 - t42);
    t111 = (t110 + 1);
    xsi_vlogvar_wait_assign_value(t20, t49, t107, *((unsigned int *)t64), t111, 0LL);
    goto LAB60;

LAB61:    t16 = *((unsigned int *)t31);
    t107 = (t16 + 0);
    t17 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t22);
    t110 = (t17 - t24);
    t111 = (t110 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t107, *((unsigned int *)t22), t111, 0LL);
    goto LAB62;

}


extern void work_m_00000000001392656668_4080926098_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000001392656668_4080926098", "isim/Navigation_isim_beh.exe.sim/work/m_00000000001392656668_4080926098.didat");
	xsi_register_executes(pe);
}
