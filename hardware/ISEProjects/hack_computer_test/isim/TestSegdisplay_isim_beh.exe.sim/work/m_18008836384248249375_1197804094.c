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
static const char *ng0 = "/home/ise/hardware/HDL/combinational-logic/hALU.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};



static void Always_40_0(char *t0)
{
    char t6[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4600);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);

LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB28;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;

LAB28:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(53, ng0);

LAB33:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);

LAB31:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB37;

LAB34:    if (t18 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;

LAB37:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t6) = 1;

LAB47:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(63, ng0);

LAB55:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);

LAB50:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:
LAB62:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB69;

LAB66:    if (t18 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t6) = 1;

LAB69:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 15);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t32 = (t23 & t27);
    if (t32 != 0)
        goto LAB77;

LAB74:    if (t26 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t30) = 1;

LAB77:    t29 = (t30 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(77, ng0);

LAB82:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB80:
LAB72:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3048);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 16);
    goto LAB12;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(47, ng0);

LAB22:    xsi_set_current_line(48, ng0);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    *((unsigned int *)t30) = t33;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB24;

LAB23:    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 65535U);
    t40 = (t0 + 3048);
    xsi_vlogvar_assign_value(t40, t30, 0, 0, 16);
    goto LAB21;

LAB24:    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t34 | t35);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t29) = (t36 | t37);
    goto LAB23;

LAB27:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(51, ng0);

LAB32:    xsi_set_current_line(52, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 3208);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 16);
    goto LAB31;

LAB36:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(57, ng0);

LAB41:    xsi_set_current_line(58, ng0);
    t21 = (t0 + 3208);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    *((unsigned int *)t30) = t33;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB43;

LAB42:    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 65535U);
    t40 = (t0 + 3208);
    xsi_vlogvar_assign_value(t40, t30, 0, 0, 16);
    goto LAB40;

LAB43:    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t34 | t35);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t29) = (t36 | t37);
    goto LAB42;

LAB46:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(61, ng0);

LAB51:    xsi_set_current_line(62, ng0);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 3208);
    t31 = (t29 + 56U);
    t40 = *((char **)t31);
    t32 = *((unsigned int *)t28);
    t33 = *((unsigned int *)t40);
    t34 = (t32 & t33);
    *((unsigned int *)t30) = t34;
    t41 = (t28 + 4);
    t42 = (t40 + 4);
    t43 = (t30 + 4);
    t35 = *((unsigned int *)t41);
    t36 = *((unsigned int *)t42);
    t37 = (t35 | t36);
    *((unsigned int *)t43) = t37;
    t38 = *((unsigned int *)t43);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB52;

LAB53:
LAB54:    t64 = (t0 + 3368);
    xsi_vlogvar_assign_value(t64, t30, 0, 0, 16);
    goto LAB50;

LAB52:    t44 = *((unsigned int *)t30);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t30) = (t44 | t45);
    t46 = (t28 + 4);
    t47 = (t40 + 4);
    t48 = *((unsigned int *)t28);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t40);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t60 & t58);
    t61 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t61 & t59);
    t62 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t62 & t58);
    t63 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t63 & t59);
    goto LAB54;

LAB58:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(67, ng0);

LAB63:    xsi_set_current_line(68, ng0);
    t21 = (t0 + 3368);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    *((unsigned int *)t30) = t33;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB65;

LAB64:    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 65535U);
    t40 = (t0 + 3368);
    xsi_vlogvar_assign_value(t40, t30, 0, 0, 16);
    goto LAB62;

LAB65:    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t34 | t35);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t29) = (t36 | t37);
    goto LAB64;

LAB68:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(71, ng0);

LAB73:    xsi_set_current_line(72, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2728);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB72;

LAB76:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(74, ng0);

LAB81:    xsi_set_current_line(75, ng0);
    t31 = ((char*)((ng2)));
    t40 = (t0 + 2728);
    xsi_vlogvar_assign_value(t40, t31, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB80;

}


extern void work_m_18008836384248249375_1197804094_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_18008836384248249375_1197804094", "isim/TestSegdisplay_isim_beh.exe.sim/work/m_18008836384248249375_1197804094.didat");
	xsi_register_executes(pe);
}