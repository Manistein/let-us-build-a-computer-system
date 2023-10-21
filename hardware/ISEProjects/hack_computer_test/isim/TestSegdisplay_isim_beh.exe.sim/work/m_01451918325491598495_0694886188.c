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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/hardware/HDL/computer/hCPU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Always_42_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t47[8];
    char t61[8];
    char t77[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
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
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5024);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 16);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    t26 = (t0 + 1848U);
    t27 = *((char **)t26);

LAB14:    t26 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t26, 3);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 3, t2, 3);
    if (t28 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB12;

LAB15:    xsi_set_current_line(50, ng0);

LAB30:    xsi_set_current_line(51, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t29);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB34;

LAB31:    if (t43 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t31) = 1;

LAB34:    memset(t47, 0, 8);
    t48 = (t31 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t48) != 0)
        goto LAB37;

LAB38:    t55 = (t47 + 4);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t55);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB39;

LAB40:    memcpy(t85, t47, 8);

LAB41:    t117 = (t85 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t85);
    t121 = (t120 & t119);
    t122 = (t121 != 0);
    if (t122 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB29;

LAB17:    xsi_set_current_line(58, ng0);

LAB57:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t3 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t3);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB61;

LAB58:    if (t16 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t6) = 1;

LAB61:    memset(t31, 0, 8);
    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t26) != 0)
        goto LAB64;

LAB65:    t30 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t30);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB66;

LAB67:    memcpy(t77, t31, 8);

LAB68:    t84 = (t77 + 4);
    t96 = *((unsigned int *)t84);
    t97 = (~(t96));
    t98 = *((unsigned int *)t77);
    t101 = (t98 & t97);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB80;

LAB81:
LAB82:    goto LAB29;

LAB19:    xsi_set_current_line(66, ng0);

LAB84:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t3 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t3);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB88;

LAB85:    if (t16 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t6) = 1;

LAB88:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB89;

LAB90:
LAB91:    goto LAB29;

LAB21:    xsi_set_current_line(74, ng0);

LAB93:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t3 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t3);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB97;

LAB94:    if (t16 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t6) = 1;

LAB97:    memset(t31, 0, 8);
    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t26) != 0)
        goto LAB100;

LAB101:    t30 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t30);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB102;

LAB103:    memcpy(t77, t31, 8);

LAB104:    t84 = (t77 + 4);
    t96 = *((unsigned int *)t84);
    t97 = (~(t96));
    t98 = *((unsigned int *)t77);
    t101 = (t98 & t97);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB116;

LAB117:
LAB118:    goto LAB29;

LAB23:    xsi_set_current_line(82, ng0);

LAB120:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t3 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t3);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB124;

LAB121:    if (t16 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t6) = 1;

LAB124:    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB125;

LAB126:
LAB127:    goto LAB29;

LAB25:    xsi_set_current_line(90, ng0);

LAB129:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t19 = (t3 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t3);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t19);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB133;

LAB130:    if (t16 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t6) = 1;

LAB133:    memset(t31, 0, 8);
    t26 = (t6 + 4);
    t21 = *((unsigned int *)t26);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t26) != 0)
        goto LAB136;

LAB137:    t30 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (!(t34));
    t36 = *((unsigned int *)t30);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB138;

LAB139:    memcpy(t77, t31, 8);

LAB140:    t84 = (t77 + 4);
    t93 = *((unsigned int *)t84);
    t94 = (~(t93));
    t95 = *((unsigned int *)t77);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB152;

LAB153:
LAB154:    goto LAB29;

LAB27:    xsi_set_current_line(98, ng0);

LAB156:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB33:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t47) = 1;
    goto LAB38;

LAB37:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB38;

LAB39:    t59 = (t0 + 1528U);
    t60 = *((char **)t59);
    t59 = ((char*)((ng1)));
    memset(t61, 0, 8);
    t62 = (t60 + 4);
    t63 = (t59 + 4);
    t64 = *((unsigned int *)t60);
    t65 = *((unsigned int *)t59);
    t66 = (t64 ^ t65);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t63);
    t69 = (t67 ^ t68);
    t70 = (t66 | t69);
    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB45;

LAB42:    if (t73 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t61) = 1;

LAB45:    memset(t77, 0, 8);
    t78 = (t61 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t61);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t78) != 0)
        goto LAB48;

LAB49:    t86 = *((unsigned int *)t47);
    t87 = *((unsigned int *)t77);
    t88 = (t86 & t87);
    *((unsigned int *)t85) = t88;
    t89 = (t47 + 4);
    t90 = (t77 + 4);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t89);
    t93 = *((unsigned int *)t90);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = *((unsigned int *)t91);
    t96 = (t95 != 0);
    if (t96 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t76 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t77) = 1;
    goto LAB49;

LAB48:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB49;

LAB50:    t97 = *((unsigned int *)t85);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t85) = (t97 | t98);
    t99 = (t47 + 4);
    t100 = (t77 + 4);
    t101 = *((unsigned int *)t47);
    t102 = (~(t101));
    t103 = *((unsigned int *)t99);
    t104 = (~(t103));
    t105 = *((unsigned int *)t77);
    t106 = (~(t105));
    t107 = *((unsigned int *)t100);
    t108 = (~(t107));
    t109 = (t102 & t104);
    t110 = (t106 & t108);
    t111 = (~(t109));
    t112 = (~(t110));
    t113 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t113 & t111);
    t114 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t114 & t112);
    t115 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t115 & t111);
    t116 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t116 & t112);
    goto LAB52;

LAB53:    xsi_set_current_line(51, ng0);

LAB56:    xsi_set_current_line(52, ng0);
    t123 = (t0 + 1048U);
    t124 = *((char **)t123);
    t123 = (t0 + 3048);
    xsi_vlogvar_assign_value(t123, t124, 0, 0, 16);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB55;

LAB60:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t31) = 1;
    goto LAB65;

LAB64:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB65;

LAB66:    t32 = (t0 + 1528U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t47, 0, 8);
    t46 = (t33 + 4);
    t48 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t46);
    t41 = *((unsigned int *)t48);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t46);
    t45 = *((unsigned int *)t48);
    t49 = (t44 | t45);
    t50 = (~(t49));
    t51 = (t43 & t50);
    if (t51 != 0)
        goto LAB72;

LAB69:    if (t49 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t47) = 1;

LAB72:    memset(t61, 0, 8);
    t55 = (t47 + 4);
    t52 = *((unsigned int *)t55);
    t53 = (~(t52));
    t56 = *((unsigned int *)t47);
    t57 = (t56 & t53);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t55) != 0)
        goto LAB75;

LAB76:    t64 = *((unsigned int *)t31);
    t65 = *((unsigned int *)t61);
    t66 = (t64 & t65);
    *((unsigned int *)t77) = t66;
    t60 = (t31 + 4);
    t62 = (t61 + 4);
    t63 = (t77 + 4);
    t67 = *((unsigned int *)t60);
    t68 = *((unsigned int *)t62);
    t69 = (t67 | t68);
    *((unsigned int *)t63) = t69;
    t70 = *((unsigned int *)t63);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB68;

LAB71:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t61) = 1;
    goto LAB76;

LAB75:    t59 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB76;

LAB77:    t72 = *((unsigned int *)t77);
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t77) = (t72 | t73);
    t76 = (t31 + 4);
    t78 = (t61 + 4);
    t74 = *((unsigned int *)t31);
    t75 = (~(t74));
    t79 = *((unsigned int *)t76);
    t80 = (~(t79));
    t81 = *((unsigned int *)t61);
    t82 = (~(t81));
    t83 = *((unsigned int *)t78);
    t86 = (~(t83));
    t109 = (t75 & t80);
    t110 = (t82 & t86);
    t87 = (~(t109));
    t88 = (~(t110));
    t92 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t92 & t87);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t88);
    t94 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t94 & t87);
    t95 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t95 & t88);
    goto LAB79;

LAB80:    xsi_set_current_line(59, ng0);

LAB83:    xsi_set_current_line(60, ng0);
    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    t89 = (t0 + 3048);
    xsi_vlogvar_assign_value(t89, t90, 0, 0, 16);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB82;

LAB87:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(67, ng0);

LAB92:    xsi_set_current_line(68, ng0);
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    t29 = (t0 + 3048);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB91;

LAB96:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t31) = 1;
    goto LAB101;

LAB100:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB101;

LAB102:    t32 = (t0 + 1528U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng2)));
    memset(t47, 0, 8);
    t46 = (t33 + 4);
    t48 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t46);
    t41 = *((unsigned int *)t48);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t46);
    t45 = *((unsigned int *)t48);
    t49 = (t44 | t45);
    t50 = (~(t49));
    t51 = (t43 & t50);
    if (t51 != 0)
        goto LAB108;

LAB105:    if (t49 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t47) = 1;

LAB108:    memset(t61, 0, 8);
    t55 = (t47 + 4);
    t52 = *((unsigned int *)t55);
    t53 = (~(t52));
    t56 = *((unsigned int *)t47);
    t57 = (t56 & t53);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t55) != 0)
        goto LAB111;

LAB112:    t64 = *((unsigned int *)t31);
    t65 = *((unsigned int *)t61);
    t66 = (t64 & t65);
    *((unsigned int *)t77) = t66;
    t60 = (t31 + 4);
    t62 = (t61 + 4);
    t63 = (t77 + 4);
    t67 = *((unsigned int *)t60);
    t68 = *((unsigned int *)t62);
    t69 = (t67 | t68);
    *((unsigned int *)t63) = t69;
    t70 = *((unsigned int *)t63);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB113;

LAB114:
LAB115:    goto LAB104;

LAB107:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB108;

LAB109:    *((unsigned int *)t61) = 1;
    goto LAB112;

LAB111:    t59 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB112;

LAB113:    t72 = *((unsigned int *)t77);
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t77) = (t72 | t73);
    t76 = (t31 + 4);
    t78 = (t61 + 4);
    t74 = *((unsigned int *)t31);
    t75 = (~(t74));
    t79 = *((unsigned int *)t76);
    t80 = (~(t79));
    t81 = *((unsigned int *)t61);
    t82 = (~(t81));
    t83 = *((unsigned int *)t78);
    t86 = (~(t83));
    t109 = (t75 & t80);
    t110 = (t82 & t86);
    t87 = (~(t109));
    t88 = (~(t110));
    t92 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t92 & t87);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t88);
    t94 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t94 & t87);
    t95 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t95 & t88);
    goto LAB115;

LAB116:    xsi_set_current_line(75, ng0);

LAB119:    xsi_set_current_line(76, ng0);
    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    t89 = (t0 + 3048);
    xsi_vlogvar_assign_value(t89, t90, 0, 0, 16);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB118;

LAB123:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(83, ng0);

LAB128:    xsi_set_current_line(84, ng0);
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    t29 = (t0 + 3048);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 16);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB127;

LAB132:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB133;

LAB134:    *((unsigned int *)t31) = 1;
    goto LAB137;

LAB136:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB137;

LAB138:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng2)));
    memset(t47, 0, 8);
    t46 = (t33 + 4);
    t48 = (t32 + 4);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t32);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t46);
    t42 = *((unsigned int *)t48);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t46);
    t49 = *((unsigned int *)t48);
    t50 = (t45 | t49);
    t51 = (~(t50));
    t52 = (t44 & t51);
    if (t52 != 0)
        goto LAB144;

LAB141:    if (t50 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t47) = 1;

LAB144:    memset(t61, 0, 8);
    t55 = (t47 + 4);
    t53 = *((unsigned int *)t55);
    t56 = (~(t53));
    t57 = *((unsigned int *)t47);
    t58 = (t57 & t56);
    t64 = (t58 & 1U);
    if (t64 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t55) != 0)
        goto LAB147;

LAB148:    t65 = *((unsigned int *)t31);
    t66 = *((unsigned int *)t61);
    t67 = (t65 | t66);
    *((unsigned int *)t77) = t67;
    t60 = (t31 + 4);
    t62 = (t61 + 4);
    t63 = (t77 + 4);
    t68 = *((unsigned int *)t60);
    t69 = *((unsigned int *)t62);
    t70 = (t68 | t69);
    *((unsigned int *)t63) = t70;
    t71 = *((unsigned int *)t63);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB149;

LAB150:
LAB151:    goto LAB140;

LAB143:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB144;

LAB145:    *((unsigned int *)t61) = 1;
    goto LAB148;

LAB147:    t59 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB148;

LAB149:    t73 = *((unsigned int *)t77);
    t74 = *((unsigned int *)t63);
    *((unsigned int *)t77) = (t73 | t74);
    t76 = (t31 + 4);
    t78 = (t61 + 4);
    t75 = *((unsigned int *)t76);
    t79 = (~(t75));
    t80 = *((unsigned int *)t31);
    t109 = (t80 & t79);
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t83 = *((unsigned int *)t61);
    t110 = (t83 & t82);
    t86 = (~(t109));
    t87 = (~(t110));
    t88 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t88 & t86);
    t92 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t92 & t87);
    goto LAB151;

LAB152:    xsi_set_current_line(91, ng0);

LAB155:    xsi_set_current_line(92, ng0);
    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    t89 = (t0 + 3048);
    xsi_vlogvar_assign_value(t89, t90, 0, 0, 16);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB154;

}

static void Cont_107_1(char *t0)
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

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
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
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 5040);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_108_2(char *t0)
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

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5216);
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
    t18 = (t0 + 5056);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_109_3(char *t0)
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

LAB0:    t1 = (t0 + 4704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5280);
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
    t18 = (t0 + 5072);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_01451918325491598495_0694886188_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Cont_107_1,(void *)Cont_108_2,(void *)Cont_109_3};
	xsi_register_didat("work_m_01451918325491598495_0694886188", "isim/TestSegdisplay_isim_beh.exe.sim/work/m_01451918325491598495_0694886188.didat");
	xsi_register_executes(pe);
}
