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
static const char *ng0 = "/home/ise/hardware/HDL/computer/sdram/sdram_cmd.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4095U, 0U};
static unsigned int ng5[] = {23U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {18U, 0U};
static unsigned int ng12[] = {17U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {16U, 0U};
static unsigned int ng16[] = {1U, 0U, 1U, 0U, 1U, 0U, 0U, 0U, 1U, 0U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng17[] = {9U, 0U};
static unsigned int ng18[] = {10U, 0U};
static unsigned int ng19[] = {19U, 0U};
static unsigned int ng20[] = {21U, 0U};
static unsigned int ng21[] = {20U, 0U};



static void Cont_32_0(char *t0)
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7112);
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
    t18 = (t0 + 7048);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 2U;
    t24 = t23;
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t4);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t23 = (t23 >> 1);
    t24 = (t24 >> 1);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 6984);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 4U;
    t37 = t36;
    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t36 = (t36 >> 2);
    t37 = (t37 >> 2);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 6920);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 8U;
    t50 = t49;
    t51 = (t4 + 4);
    t52 = *((unsigned int *)t4);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t49 = (t49 >> 3);
    t50 = (t50 >> 3);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 6856);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 16U;
    t63 = t62;
    t64 = (t4 + 4);
    t65 = *((unsigned int *)t4);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t62 = (t62 >> 4);
    t63 = (t63 >> 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 0);
    t70 = (t0 + 6712);
    *((int *)t70) = 1;

LAB1:    return;
}

static void Cont_33_1(char *t0)
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

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
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
    xsi_driver_vfirst_trans(t5, 0, 1);
    t18 = (t0 + 6728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_34_2(char *t0)
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

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7240);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 8191U;
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
    xsi_driver_vfirst_trans(t5, 0, 12);
    t18 = (t0 + 6744);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_35_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t33 = (t0 + 7304);
    t40 = (t33 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 16777215U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t33, 0, 23);
    t52 = (t0 + 6760);
    *((int *)t52) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1848U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1688U);
    t39 = *((char **)t33);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 24, t34, 24, t39, 24);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

}

static void Always_37_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 6424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB18;

LAB19:    t5 = ((char*)((ng7)));
    t22 = xsi_vlog_unsigned_case_compare(t3, 4, t5, 4);
    if (t22 == 1)
        goto LAB20;

LAB21:    t6 = ((char*)((ng8)));
    t23 = xsi_vlog_unsigned_case_compare(t3, 4, t6, 4);
    if (t23 == 1)
        goto LAB22;

LAB23:    t12 = ((char*)((ng9)));
    t24 = xsi_vlog_unsigned_case_compare(t3, 4, t12, 4);
    if (t24 == 1)
        goto LAB24;

LAB25:    t13 = ((char*)((ng10)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t13, 4);
    if (t25 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB30;

LAB31:    t5 = ((char*)((ng14)));
    t22 = xsi_vlog_unsigned_case_compare(t3, 4, t5, 4);
    if (t22 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng17)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(105, ng0);

LAB76:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);

LAB38:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 13, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(44, ng0);

LAB39:    xsi_set_current_line(45, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);
    goto LAB38;

LAB18:    goto LAB16;

LAB20:    goto LAB16;

LAB22:    goto LAB16;

LAB24:    goto LAB16;

LAB26:    xsi_set_current_line(49, ng0);

LAB40:    xsi_set_current_line(50, ng0);
    t19 = ((char*)((ng11)));
    t20 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);
    goto LAB38;

LAB28:    xsi_set_current_line(54, ng0);

LAB41:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);
    goto LAB38;

LAB30:    goto LAB28;

LAB32:    xsi_set_current_line(59, ng0);

LAB42:    xsi_set_current_line(60, ng0);
    t6 = ((char*)((ng15)));
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng16)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);
    goto LAB38;

LAB34:    xsi_set_current_line(71, ng0);

LAB43:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 2168U);
    t6 = *((char **)t5);

LAB44:    t5 = ((char*)((ng1)));
    t22 = xsi_vlog_unsigned_case_compare(t6, 4, t5, 4);
    if (t22 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t21 == 1)
        goto LAB47;

LAB48:    t5 = ((char*)((ng7)));
    t22 = xsi_vlog_unsigned_case_compare(t6, 4, t5, 4);
    if (t22 == 1)
        goto LAB49;

LAB50:    t12 = ((char*)((ng13)));
    t23 = xsi_vlog_unsigned_case_compare(t6, 4, t12, 4);
    if (t23 == 1)
        goto LAB51;

LAB52:    t13 = ((char*)((ng14)));
    t24 = xsi_vlog_unsigned_case_compare(t6, 4, t13, 4);
    if (t24 == 1)
        goto LAB53;

LAB54:    t19 = ((char*)((ng9)));
    t25 = xsi_vlog_unsigned_case_compare(t6, 4, t19, 4);
    if (t25 == 1)
        goto LAB55;

LAB56:    t20 = ((char*)((ng18)));
    t26 = xsi_vlog_unsigned_case_compare(t6, 4, t20, 4);
    if (t26 == 1)
        goto LAB57;

LAB58:    t27 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t6, 4, t27, 4);
    if (t28 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t21 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t21 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng17)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t21 == 1)
        goto LAB65;

LAB66:
LAB68:
LAB67:    xsi_set_current_line(98, ng0);

LAB75:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);

LAB69:    goto LAB38;

LAB45:    xsi_set_current_line(73, ng0);

LAB70:    xsi_set_current_line(74, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);
    goto LAB69;

LAB47:    goto LAB45;

LAB49:    goto LAB45;

LAB51:    goto LAB45;

LAB53:    goto LAB45;

LAB55:    goto LAB45;

LAB57:    goto LAB45;

LAB59:    xsi_set_current_line(78, ng0);

LAB71:    xsi_set_current_line(79, ng0);
    t29 = ((char*)((ng19)));
    t30 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 5, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 2);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 2);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 8191U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 8191U);
    t13 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 13, 0LL);
    goto LAB69;

LAB61:    xsi_set_current_line(83, ng0);

LAB72:    xsi_set_current_line(84, ng0);
    t5 = ((char*)((ng20)));
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 15);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 15);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 511U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 511U);
    t13 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 13, 0LL);
    goto LAB69;

LAB63:    xsi_set_current_line(88, ng0);

LAB73:    xsi_set_current_line(89, ng0);
    t5 = ((char*)((ng21)));
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3768U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 15);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 15);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 511U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 511U);
    t13 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 13, 0LL);
    goto LAB69;

LAB65:    xsi_set_current_line(93, ng0);

LAB74:    xsi_set_current_line(94, ng0);
    t5 = ((char*)((ng12)));
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 13, 0LL);
    goto LAB69;

}


extern void work_m_08735340575927942808_2879558445_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Cont_33_1,(void *)Cont_34_2,(void *)Cont_35_3,(void *)Always_37_4};
	xsi_register_didat("work_m_08735340575927942808_2879558445", "isim/sdram_test_isim_beh.exe.sim/work/m_08735340575927942808_2879558445.didat");
	xsi_register_executes(pe);
}
