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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {1, 0};
static int ng1[] = {3, 0};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {0, 0, 0, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static const char *ng8 = "FAILURE : Data width must be >= 2 for double bit error injection.";
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {8, 0};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {0U, 0U, 0U, 0U};
static unsigned int ng13[] = {48U, 0U};
static unsigned int ng14[] = {49U, 0U};
static unsigned int ng15[] = {50U, 0U};
static unsigned int ng16[] = {51U, 0U};
static unsigned int ng17[] = {3U, 0U};
static unsigned int ng18[] = {52U, 0U};
static unsigned int ng19[] = {53U, 0U};
static unsigned int ng20[] = {5U, 0U};
static unsigned int ng21[] = {54U, 0U};
static unsigned int ng22[] = {6U, 0U};
static unsigned int ng23[] = {55U, 0U};
static unsigned int ng24[] = {7U, 0U};
static unsigned int ng25[] = {56U, 0U};
static unsigned int ng26[] = {8U, 0U};
static unsigned int ng27[] = {57U, 0U};
static unsigned int ng28[] = {9U, 0U};
static unsigned int ng29[] = {65U, 0U};
static unsigned int ng30[] = {10U, 0U};
static unsigned int ng31[] = {66U, 0U};
static unsigned int ng32[] = {11U, 0U};
static unsigned int ng33[] = {67U, 0U};
static unsigned int ng34[] = {12U, 0U};
static unsigned int ng35[] = {68U, 0U};
static unsigned int ng36[] = {13U, 0U};
static unsigned int ng37[] = {69U, 0U};
static unsigned int ng38[] = {14U, 0U};
static unsigned int ng39[] = {70U, 0U};
static unsigned int ng40[] = {15U, 0U};
static unsigned int ng41[] = {97U, 0U};
static unsigned int ng42[] = {98U, 0U};
static unsigned int ng43[] = {99U, 0U};
static unsigned int ng44[] = {100U, 0U};
static unsigned int ng45[] = {101U, 0U};
static unsigned int ng46[] = {102U, 0U};
static unsigned int ng47[] = {15U, 15U};
static int ng48[] = {48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



static int sp_write_fifo(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t29[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t30;
    char *t31;
    int t32;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 9808);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 11736U);
    t6 = *((char **)t5);
    t5 = (t1 + 21736);
    t9 = (t1 + 21736);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 21736);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 22696);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t17, 32, 2);
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    t4 = (t1 + 22856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = ((char*)((ng0)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 8, t9, 32);
    t10 = (t1 + 22856);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 8, 100LL);
    t4 = (t1 + 7392);
    t5 = *((char **)t4);

LAB8:    t4 = ((char*)((ng1)));
    t20 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t20 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng2)));
    t20 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t20 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng0)));
    t20 = xsi_vlog_signed_case_compare(t5, 32, t4, 32);
    if (t20 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    t4 = ((char*)((ng4)));
    t6 = (t1 + 21896);
    t9 = (t1 + 21896);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 21896);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 22696);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t17, 32, 2);
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB24;

LAB25:
LAB17:    t4 = (t1 + 22696);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t11 = (t9 + 4);
    t12 = (t10 + 4);
    t19 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t25 = (t19 ^ t22);
    t26 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t26 ^ t33);
    t35 = (t25 | t34);
    t36 = *((unsigned int *)t11);
    t37 = *((unsigned int *)t12);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB29;

LAB26:    if (t38 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t7) = 1;

LAB29:    t14 = (t7 + 4);
    t41 = *((unsigned int *)t14);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB30;

LAB31:
LAB34:    t4 = (t1 + 22696);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = ((char*)((ng0)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t9, 32, t10, 32);
    t11 = (t1 + 22696);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 32, 0LL);

LAB32:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t8), t28, 0LL);
    goto LAB7;

LAB9:    t6 = (t1 + 14616U);
    t9 = *((char **)t6);
    t6 = (t1 + 14456U);
    t10 = *((char **)t6);
    xsi_vlogtype_concat(t7, 2, 2, 2U, t10, 1, t9, 1);
    t6 = (t1 + 21896);
    t11 = (t1 + 21896);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 21896);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t1 + 22696);
    t18 = (t17 + 56U);
    t21 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t8, t29, t13, t16, 2, 1, t21, 32, 2);
    t30 = (t8 + 4);
    t19 = *((unsigned int *)t30);
    t23 = (!(t19));
    t31 = (t29 + 4);
    t22 = *((unsigned int *)t31);
    t24 = (!(t22));
    t27 = (t23 && t24);
    if (t27 == 1)
        goto LAB18;

LAB19:    goto LAB17;

LAB11:    t6 = ((char*)((ng3)));
    t9 = (t1 + 14456U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t7, 2, 2, 2U, t10, 1, t6, 1);
    t9 = (t1 + 21896);
    t11 = (t1 + 21896);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 21896);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t1 + 22696);
    t18 = (t17 + 56U);
    t21 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t8, t29, t13, t16, 2, 1, t21, 32, 2);
    t30 = (t8 + 4);
    t19 = *((unsigned int *)t30);
    t23 = (!(t19));
    t31 = (t29 + 4);
    t22 = *((unsigned int *)t31);
    t24 = (!(t22));
    t27 = (t23 && t24);
    if (t27 == 1)
        goto LAB20;

LAB21:    goto LAB17;

LAB13:    t6 = (t1 + 14616U);
    t9 = *((char **)t6);
    t6 = ((char*)((ng3)));
    xsi_vlogtype_concat(t7, 2, 2, 2U, t6, 1, t9, 1);
    t10 = (t1 + 21896);
    t11 = (t1 + 21896);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 21896);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t1 + 22696);
    t18 = (t17 + 56U);
    t21 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t8, t29, t13, t16, 2, 1, t21, 32, 2);
    t30 = (t8 + 4);
    t19 = *((unsigned int *)t30);
    t23 = (!(t19));
    t31 = (t29 + 4);
    t22 = *((unsigned int *)t31);
    t24 = (!(t22));
    t27 = (t23 && t24);
    if (t27 == 1)
        goto LAB22;

LAB23:    goto LAB17;

LAB18:    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t29);
    t28 = (t25 - t26);
    t32 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, *((unsigned int *)t29), t32, 0LL);
    goto LAB19;

LAB20:    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t29);
    t28 = (t25 - t26);
    t32 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t9, t7, 0, *((unsigned int *)t29), t32, 0LL);
    goto LAB21;

LAB22:    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t29);
    t28 = (t25 - t26);
    t32 = (t28 + 1);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, *((unsigned int *)t29), t32, 0LL);
    goto LAB23;

LAB24:    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t8), t28, 0LL);
    goto LAB25;

LAB28:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB30:
LAB33:    t15 = (t1 + 6848);
    t16 = *((char **)t15);
    t15 = ((char*)((ng0)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t16, 32, t15, 32);
    t17 = (t1 + 22696);
    xsi_vlogvar_wait_assign_value(t17, t8, 0, 0, 32, 0LL);
    goto LAB32;

}

static int sp_read_fifo(char *t1, char *t2)
{
    char t9[8];
    char t30[8];
    char t31[8];
    char t34[16];
    char t40[16];
    char t67[8];
    char t80[8];
    char t92[8];
    char t98[24];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 10240);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 23976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng0)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t7, 6, t8, 32);
    t10 = (t1 + 23976);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 6, 100LL);
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t10 = (t9 + 4);
    t23 = *((unsigned int *)t10);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng0)));
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB36;

LAB33:    if (t20 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t9) = 1;

LAB36:    t10 = (t9 + 4);
    t23 = *((unsigned int *)t10);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB37;

LAB38:
LAB103:    t4 = (t1 + 23816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 31016);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    t4 = (t1 + 23816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    t8 = ((char*)((ng0)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t7, 32, t8, 32);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t30) = t13;
    t10 = (t6 + 4);
    t28 = (t9 + 4);
    t29 = (t30 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t28);
    t16 = (t14 | t15);
    *((unsigned int *)t29) = t16;
    t17 = *((unsigned int *)t29);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB104;

LAB105:
LAB106:    t35 = (t1 + 31176);
    xsi_vlogvar_assign_value(t35, t30, 0, 0, 32);
    t4 = (t1 + 21736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 21736);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t28 = (t1 + 21736);
    t29 = (t28 + 64U);
    t32 = *((char **)t29);
    t33 = (t1 + 31016);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t9, 16, t6, t10, t32, 2, 1, t36, 32, 2);
    t37 = (t1 + 30696);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 16);
    t4 = (t1 + 30696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 31176);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t28 = (t1 + 2360);
    t29 = *((char **)t28);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_multiply(t9, 32, t10, 32, t29, 32);
    xsi_vlog_unsigned_rshift(t34, 64, t6, 16, t9, 32);
    t28 = (t1 + 30536);
    xsi_vlogvar_assign_value(t28, t34, 0, 0, 64);

LAB39:
LAB12:    t4 = (t1 + 30536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 27016);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 64, 0LL);
    t4 = (t1 + 23816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB110;

LAB107:    if (t20 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t9) = 1;

LAB110:    t29 = (t9 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB111;

LAB112:
LAB115:    t4 = (t1 + 23816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 23816);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);

LAB113:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = ((char*)((ng5)));
    t29 = (t1 + 30536);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 64);
    t4 = (t1 + 23816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t6, 32, t7, 32);
    t8 = ((char*)((ng7)));
    t10 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t8, 32, t10, 32);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t9, 32, t30, 32);
    t28 = (t1 + 30856);
    xsi_vlogvar_assign_value(t28, t31, 0, 0, 32);
    t4 = ((char*)((ng7)));
    t5 = ((char*)((ng0)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t5, 32);
    t6 = (t1 + 30376);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);

LAB14:    t4 = (t1 + 30376);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:
LAB17:    t10 = (t1 + 30536);
    t28 = (t10 + 56U);
    t29 = *((char **)t28);
    t32 = (t1 + 2088);
    t33 = *((char **)t32);
    xsi_vlog_unsigned_lshift(t34, 64, t29, 64, t33, 32);
    t32 = (t1 + 30536);
    xsi_vlogvar_assign_value(t32, t34, 0, 0, 64);
    t4 = (t1 + 30536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 21736);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t28 = (t1 + 21736);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t1 + 21736);
    t35 = (t33 + 64U);
    t36 = *((char **)t35);
    t37 = (t1 + 30856);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t34, 64, t10, t32, t36, 2, 1, t39, 32, 2);
    t11 = 0;

LAB21:    t12 = (t11 < 2);
    if (t12 == 1)
        goto LAB22;

LAB23:    t66 = (t1 + 30536);
    xsi_vlogvar_assign_value(t66, t40, 0, 0, 64);
    t4 = (t1 + 30856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB27;

LAB24:    if (t20 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t9) = 1;

LAB27:    t29 = (t9 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB28;

LAB29:
LAB32:    t4 = (t1 + 30856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 30856);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB30:    t4 = (t1 + 30376);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 30376);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB14;

LAB18:    t26 = (t11 * 8);
    t27 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t27 | t47);
    t48 = (t6 + t26);
    t49 = (t26 + 4);
    t50 = (t6 + t49);
    t51 = (t34 + t26);
    t52 = (t26 + 4);
    t53 = (t34 + t52);
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t48);
    t57 = (t56 & t55);
    t58 = *((unsigned int *)t53);
    t59 = (~(t58));
    t60 = *((unsigned int *)t51);
    t61 = (t60 & t59);
    t62 = (~(t57));
    t63 = (~(t61));
    t64 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t64 & t62);
    t65 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t65 & t63);

LAB20:    t11 = (t11 + 1);
    goto LAB21;

LAB19:    goto LAB20;

LAB22:    t13 = (t11 * 8);
    t41 = (t6 + t13);
    t42 = (t34 + t13);
    t43 = (t40 + t13);
    t14 = *((unsigned int *)t41);
    t15 = *((unsigned int *)t42);
    t16 = (t14 | t15);
    *((unsigned int *)t43) = t16;
    t17 = (t11 * 8);
    t18 = (t17 + 4);
    t44 = (t6 + t18);
    t19 = (t17 + 4);
    t45 = (t34 + t19);
    t20 = (t17 + 4);
    t46 = (t40 + t20);
    t21 = *((unsigned int *)t44);
    t22 = *((unsigned int *)t45);
    t23 = (t21 | t22);
    *((unsigned int *)t46) = t23;
    t24 = *((unsigned int *)t46);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB18;
    else
        goto LAB19;

LAB26:    t28 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB27;

LAB28:
LAB31:    t32 = (t1 + 6848);
    t33 = *((char **)t32);
    t32 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t33, 32, t32, 32);
    t35 = (t1 + 30856);
    xsi_vlogvar_assign_value(t35, t30, 0, 0, 32);
    goto LAB30;

LAB35:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:
LAB40:    t28 = (t1 + 21736);
    t29 = (t28 + 56U);
    t32 = *((char **)t29);
    t33 = (t1 + 21736);
    t35 = (t33 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 21736);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t41 = (t1 + 23816);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_array_select_value(t30, 16, t32, t36, t39, 2, 1, t43, 32, 2);
    xsi_vlog_get_part_select_value(t34, 64, t30, 15, 0);
    t44 = (t1 + 30536);
    xsi_vlogvar_assign_value(t44, t34, 0, 0, 64);
    t4 = (t1 + 21896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 21896);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t28 = (t1 + 21896);
    t29 = (t28 + 64U);
    t32 = *((char **)t29);
    t33 = (t1 + 23816);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t9, 2, t6, t10, t32, 2, 1, t36, 32, 2);
    t37 = (t1 + 31336);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 2);
    t4 = (t1 + 9160);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t4) != 0)
        goto LAB43;

LAB44:    t7 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB45;

LAB46:    memcpy(t67, t9, 8);

LAB47:    t38 = (t67 + 4);
    t75 = *((unsigned int *)t38);
    t76 = (~(t75));
    t77 = *((unsigned int *)t67);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB55;

LAB56:
LAB102:    t4 = ((char*)((ng4)));
    t5 = (t1 + 26696);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB57:    goto LAB39;

LAB41:    *((unsigned int *)t9) = 1;
    goto LAB44;

LAB43:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB44;

LAB45:    t8 = (t1 + 2088);
    t10 = *((char **)t8);
    t8 = (t1 + 2360);
    t28 = *((char **)t8);
    memset(t30, 0, 8);
    xsi_vlog_signed_equal(t30, 32, t10, 32, t28, 32);
    memset(t31, 0, 8);
    t8 = (t30 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t30);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB51:    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t31);
    t26 = (t24 & t25);
    *((unsigned int *)t67) = t26;
    t32 = (t9 + 4);
    t33 = (t31 + 4);
    t35 = (t67 + 4);
    t27 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t33);
    t49 = (t27 | t47);
    *((unsigned int *)t35) = t49;
    t52 = *((unsigned int *)t35);
    t54 = (t52 != 0);
    if (t54 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t31) = 1;
    goto LAB51;

LAB50:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB51;

LAB52:    t55 = *((unsigned int *)t67);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t67) = (t55 | t56);
    t36 = (t9 + 4);
    t37 = (t31 + 4);
    t58 = *((unsigned int *)t9);
    t59 = (~(t58));
    t60 = *((unsigned int *)t36);
    t62 = (~(t60));
    t63 = *((unsigned int *)t31);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t68 = (~(t65));
    t57 = (t59 & t62);
    t61 = (t64 & t68);
    t69 = (~(t57));
    t70 = (~(t61));
    t71 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t71 & t69);
    t72 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t72 & t70);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t73 & t69);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & t70);
    goto LAB54;

LAB55:
LAB58:    t39 = (t1 + 31336);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    memset(t80, 0, 8);
    t43 = (t80 + 4);
    t44 = (t42 + 4);
    t81 = *((unsigned int *)t42);
    t82 = (t81 >> 1);
    t83 = (t82 & 1);
    *((unsigned int *)t80) = t83;
    t84 = *((unsigned int *)t44);
    t85 = (t84 >> 1);
    t86 = (t85 & 1);
    *((unsigned int *)t43) = t86;
    t45 = (t80 + 4);
    t87 = *((unsigned int *)t45);
    t88 = (~(t87));
    t89 = *((unsigned int *)t80);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB59;

LAB60:
LAB94:    t4 = (t1 + 30536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_get_part_select_value(t34, 64, t6, 63, 0);
    t7 = (t1 + 30536);
    xsi_vlogvar_assign_value(t7, t34, 0, 0, 64);

LAB61:    t4 = (t1 + 31336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t30, 0, 8);
    t7 = (t30 + 4);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t30) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t10 = (t1 + 31336);
    t28 = (t10 + 56U);
    t29 = *((char **)t28);
    memset(t67, 0, 8);
    t32 = (t67 + 4);
    t33 = (t29 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t67) = t19;
    t20 = *((unsigned int *)t33);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t32) = t22;
    memset(t31, 0, 8);
    t35 = (t67 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (~(t23));
    t25 = *((unsigned int *)t67);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB98;

LAB96:    if (*((unsigned int *)t35) == 0)
        goto LAB95;

LAB97:    t36 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t36) = 1;

LAB98:    t47 = *((unsigned int *)t30);
    t49 = *((unsigned int *)t31);
    t52 = (t47 & t49);
    *((unsigned int *)t80) = t52;
    t37 = (t30 + 4);
    t38 = (t31 + 4);
    t39 = (t80 + 4);
    t54 = *((unsigned int *)t37);
    t55 = *((unsigned int *)t38);
    t56 = (t54 | t55);
    *((unsigned int *)t39) = t56;
    t58 = *((unsigned int *)t39);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB99;

LAB100:
LAB101:    t43 = (t1 + 31336);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t92, 0, 8);
    t46 = (t92 + 4);
    t48 = (t45 + 4);
    t79 = *((unsigned int *)t45);
    t81 = (t79 >> 1);
    t82 = (t81 & 1);
    *((unsigned int *)t92) = t82;
    t83 = *((unsigned int *)t48);
    t84 = (t83 >> 1);
    t85 = (t84 & 1);
    *((unsigned int *)t46) = t85;
    xsi_vlogtype_concat(t9, 2, 2, 2U, t92, 1, t80, 1);
    t50 = (t1 + 26696);
    xsi_vlogvar_wait_assign_value(t50, t9, 0, 0, 2, 0LL);
    goto LAB57;

LAB59:
LAB62:    t46 = (t1 + 2360);
    t48 = *((char **)t46);
    t46 = ((char*)((ng0)));
    memset(t92, 0, 8);
    xsi_vlog_signed_equal(t92, 32, t48, 32, t46, 32);
    t50 = (t92 + 4);
    t93 = *((unsigned int *)t50);
    t94 = (~(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB63;

LAB64:    t4 = (t1 + 2360);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t5, 32, t4, 32);
    t6 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB67;

LAB68:    t4 = (t1 + 30536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    xsi_vlog_unsigned_lshift(t34, 64, t6, 64, t7, 32);
    t8 = (t1 + 30536);
    t10 = (t8 + 56U);
    t28 = *((char **)t10);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t32 = (t28 + 8);
    t33 = (t28 + 12);
    t11 = *((unsigned int *)t32);
    t12 = (t11 >> 30);
    t13 = (t12 & 1);
    *((unsigned int *)t30) = t13;
    t14 = *((unsigned int *)t33);
    t15 = (t14 >> 30);
    t16 = (t15 & 1);
    *((unsigned int *)t29) = t16;
    memset(t9, 0, 8);
    t35 = (t30 + 4);
    t17 = *((unsigned int *)t35);
    t18 = (~(t17));
    t19 = *((unsigned int *)t30);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB85;

LAB83:    if (*((unsigned int *)t35) == 0)
        goto LAB82;

LAB84:    t36 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t36) = 1;

LAB85:    t37 = (t9 + 4);
    t38 = (t30 + 4);
    t22 = *((unsigned int *)t30);
    t23 = (~(t22));
    *((unsigned int *)t9) = t23;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB87;

LAB86:    t47 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t47 & 1U);
    t49 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t49 & 1U);
    t39 = (t1 + 30536);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    memset(t67, 0, 8);
    t43 = (t67 + 4);
    t44 = (t42 + 8);
    t45 = (t42 + 12);
    t52 = *((unsigned int *)t44);
    t54 = (t52 >> 31);
    t55 = (t54 & 1);
    *((unsigned int *)t67) = t55;
    t56 = *((unsigned int *)t45);
    t58 = (t56 >> 31);
    t59 = (t58 & 1);
    *((unsigned int *)t43) = t59;
    memset(t31, 0, 8);
    t46 = (t67 + 4);
    t60 = *((unsigned int *)t46);
    t62 = (~(t60));
    t63 = *((unsigned int *)t67);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t46) == 0)
        goto LAB88;

LAB90:    t48 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t48) = 1;

LAB91:    t50 = (t31 + 4);
    t51 = (t67 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    *((unsigned int *)t31) = t69;
    *((unsigned int *)t50) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB93;

LAB92:    t74 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t74 & 1U);
    t75 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t75 & 1U);
    xsi_vlogtype_concat(t98, 66, 66, 3U, t31, 1, t9, 1, t34, 64);
    t53 = (t1 + 30536);
    xsi_vlogvar_assign_value(t53, t98, 0, 0, 64);

LAB69:
LAB65:    goto LAB61;

LAB63:
LAB66:    t51 = (t1 + 10240);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t51);
    xsi_vlog_finish(1);
    goto LAB65;

LAB67:    t7 = (t1 + 30536);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    memset(t31, 0, 8);
    t28 = (t31 + 4);
    t29 = (t10 + 8);
    t32 = (t10 + 12);
    t16 = *((unsigned int *)t29);
    t17 = (t16 >> 30);
    t18 = (t17 & 1);
    *((unsigned int *)t31) = t18;
    t19 = *((unsigned int *)t32);
    t20 = (t19 >> 30);
    t21 = (t20 & 1);
    *((unsigned int *)t28) = t21;
    memset(t30, 0, 8);
    t33 = (t31 + 4);
    t22 = *((unsigned int *)t33);
    t23 = (~(t22));
    t24 = *((unsigned int *)t31);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t33) == 0)
        goto LAB70;

LAB72:    t35 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t35) = 1;

LAB73:    t36 = (t30 + 4);
    t37 = (t31 + 4);
    t27 = *((unsigned int *)t31);
    t47 = (~(t27));
    *((unsigned int *)t30) = t47;
    *((unsigned int *)t36) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB75;

LAB74:    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & 1U);
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & 1U);
    t38 = (t1 + 30536);
    t39 = (t38 + 56U);
    t41 = *((char **)t39);
    memset(t80, 0, 8);
    t42 = (t80 + 4);
    t43 = (t41 + 8);
    t44 = (t41 + 12);
    t59 = *((unsigned int *)t43);
    t60 = (t59 >> 31);
    t62 = (t60 & 1);
    *((unsigned int *)t80) = t62;
    t63 = *((unsigned int *)t44);
    t64 = (t63 >> 31);
    t65 = (t64 & 1);
    *((unsigned int *)t42) = t65;
    memset(t67, 0, 8);
    t45 = (t80 + 4);
    t68 = *((unsigned int *)t45);
    t69 = (~(t68));
    t70 = *((unsigned int *)t80);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB79;

LAB77:    if (*((unsigned int *)t45) == 0)
        goto LAB76;

LAB78:    t46 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t46) = 1;

LAB79:    t48 = (t67 + 4);
    t50 = (t80 + 4);
    t73 = *((unsigned int *)t80);
    t74 = (~(t73));
    *((unsigned int *)t67) = t74;
    *((unsigned int *)t48) = 0;
    if (*((unsigned int *)t50) != 0)
        goto LAB81;

LAB80:    t79 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t79 & 1U);
    t81 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t81 & 1U);
    xsi_vlogtype_concat(t34, 64, 2, 2U, t67, 1, t30, 1);
    t51 = (t1 + 30536);
    xsi_vlogvar_assign_value(t51, t34, 0, 0, 64);
    goto LAB69;

LAB70:    *((unsigned int *)t30) = 1;
    goto LAB73;

LAB75:    t49 = *((unsigned int *)t30);
    t52 = *((unsigned int *)t37);
    *((unsigned int *)t30) = (t49 | t52);
    t54 = *((unsigned int *)t36);
    t55 = *((unsigned int *)t37);
    *((unsigned int *)t36) = (t54 | t55);
    goto LAB74;

LAB76:    *((unsigned int *)t67) = 1;
    goto LAB79;

LAB81:    t75 = *((unsigned int *)t67);
    t76 = *((unsigned int *)t50);
    *((unsigned int *)t67) = (t75 | t76);
    t77 = *((unsigned int *)t48);
    t78 = *((unsigned int *)t50);
    *((unsigned int *)t48) = (t77 | t78);
    goto LAB80;

LAB82:    *((unsigned int *)t9) = 1;
    goto LAB85;

LAB87:    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t38);
    *((unsigned int *)t9) = (t24 | t25);
    t26 = *((unsigned int *)t37);
    t27 = *((unsigned int *)t38);
    *((unsigned int *)t37) = (t26 | t27);
    goto LAB86;

LAB88:    *((unsigned int *)t31) = 1;
    goto LAB91;

LAB93:    t70 = *((unsigned int *)t31);
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t31) = (t70 | t71);
    t72 = *((unsigned int *)t50);
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t72 | t73);
    goto LAB92;

LAB95:    *((unsigned int *)t31) = 1;
    goto LAB98;

LAB99:    t60 = *((unsigned int *)t80);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t80) = (t60 | t62);
    t41 = (t30 + 4);
    t42 = (t31 + 4);
    t63 = *((unsigned int *)t30);
    t64 = (~(t63));
    t65 = *((unsigned int *)t41);
    t68 = (~(t65));
    t69 = *((unsigned int *)t31);
    t70 = (~(t69));
    t71 = *((unsigned int *)t42);
    t72 = (~(t71));
    t57 = (t64 & t68);
    t61 = (t70 & t72);
    t73 = (~(t57));
    t74 = (~(t61));
    t75 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t75 & t73);
    t76 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t76 & t74);
    t77 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t77 & t73);
    t78 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t78 & t74);
    goto LAB101;

LAB104:    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t30) = (t19 | t20);
    t32 = (t6 + 4);
    t33 = (t9 + 4);
    t21 = *((unsigned int *)t6);
    t22 = (~(t21));
    t23 = *((unsigned int *)t32);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t33);
    t47 = (~(t27));
    t57 = (t22 & t24);
    t61 = (t26 & t47);
    t49 = (~(t57));
    t52 = (~(t61));
    t54 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t54 & t49);
    t55 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t55 & t52);
    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & t49);
    t58 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t58 & t52);
    goto LAB106;

LAB109:    t28 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB110;

LAB111:
LAB114:    t32 = (t1 + 5624);
    t33 = *((char **)t32);
    t32 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t33, 32, t32, 32);
    t35 = (t1 + 23816);
    xsi_vlogvar_wait_assign_value(t35, t30, 0, 0, 32, 0LL);
    goto LAB113;

}

static int sp_log2_val(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t0 = 1;

LAB2:    t3 = (t1 + 31656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng10)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    t3 = (t1 + 31656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng11)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB14;

LAB11:    if (t19 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t7) = 1;

LAB14:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB15;

LAB16:
LAB19:    t3 = ((char*)((ng0)));
    t4 = (t1 + 31496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB17:
LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:
LAB10:    t29 = ((char*)((ng1)));
    t30 = (t1 + 31496);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);
    goto LAB9;

LAB13:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB15:
LAB18:    t29 = ((char*)((ng2)));
    t30 = (t1 + 31496);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);
    goto LAB17;

}

static int sp_hexstr_conv(char *t1, char *t2)
{
    char t5[8];
    char t14[8];
    char t30[8];
    char t31[8];
    char t33[8];
    char t37[8];
    char t45[8];
    char t53[8];
    char t57[8];
    char t59[128];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t58;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng4)));
    t4 = (t1 + 32136);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = ((char*)((ng12)));
    t4 = (t1 + 31816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    t3 = (t1 + 2360);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t4, 32, t3, 32);
    t6 = (t1 + 32296);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB3:    t3 = (t1 + 32296);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_greatereq(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:
LAB6:    t15 = (t1 + 31976);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 255U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 255U);

LAB7:    t26 = ((char*)((ng3)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t26, 8);
    if (t27 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng13)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng14)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng15)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng16)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng18)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng19)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng21)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng23)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng25)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng27)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng29)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng31)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng33)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB34;

LAB35:    t3 = ((char*)((ng35)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB36;

LAB37:    t3 = ((char*)((ng37)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB38;

LAB39:    t3 = ((char*)((ng39)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB40;

LAB41:    t3 = ((char*)((ng41)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB42;

LAB43:    t3 = ((char*)((ng42)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB44;

LAB45:    t3 = ((char*)((ng43)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB46;

LAB47:    t3 = ((char*)((ng44)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB48;

LAB49:    t3 = ((char*)((ng45)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB50;

LAB51:    t3 = ((char*)((ng46)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:
LAB58:    t3 = ((char*)((ng47)));
    t4 = (t1 + 32616);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);

LAB56:    t3 = ((char*)((ng4)));
    t4 = (t1 + 32456);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB59:    t3 = (t1 + 32456);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB60;

LAB61:    t3 = (t1 + 32136);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 32136);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    t3 = (t1 + 31976);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng10)));
    xsi_vlog_unsigned_rshift(t59, 512, t6, 512, t7, 32);
    t8 = (t1 + 31976);
    xsi_vlogvar_assign_value(t8, t59, 0, 0, 512);
    t3 = (t1 + 32296);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 32296);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB3;

LAB8:
LAB57:    t28 = ((char*)((ng3)));
    t29 = (t1 + 32616);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_unary_minus(t5, 32, t3, 32);
    t4 = (t1 + 32296);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB56;

LAB10:    t4 = ((char*)((ng3)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB12:    t4 = ((char*)((ng9)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB14:    t4 = ((char*)((ng6)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB16:    t4 = ((char*)((ng17)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB18:    t4 = ((char*)((ng7)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB20:    t4 = ((char*)((ng20)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB22:    t4 = ((char*)((ng22)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB24:    t4 = ((char*)((ng24)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB26:    t4 = ((char*)((ng26)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB28:    t4 = ((char*)((ng28)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB30:    t4 = ((char*)((ng30)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB32:    t4 = ((char*)((ng32)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB34:    t4 = ((char*)((ng34)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB36:    t4 = ((char*)((ng36)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB38:    t4 = ((char*)((ng38)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB40:    t4 = ((char*)((ng40)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB42:    t4 = ((char*)((ng30)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB44:    t4 = ((char*)((ng32)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB46:    t4 = ((char*)((ng34)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB48:    t4 = ((char*)((ng36)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB50:    t4 = ((char*)((ng38)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB52:    t4 = ((char*)((ng40)));
    t6 = (t1 + 32616);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB60:
LAB62:    t15 = (t1 + 32136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng11)));
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t17, 32, t18, 32);
    t19 = (t1 + 32456);
    t26 = (t19 + 56U);
    t28 = *((char **)t26);
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t30, 32, t28, 32);
    t29 = (t1 + 2360);
    t32 = *((char **)t29);
    memset(t33, 0, 8);
    xsi_vlog_signed_less(t33, 32, t31, 32, t32, 32);
    t29 = (t33 + 4);
    t20 = *((unsigned int *)t29);
    t21 = (~(t20));
    t22 = *((unsigned int *)t33);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB63;

LAB64:
LAB65:    t3 = (t1 + 32456);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 32456);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB59;

LAB63:
LAB66:    t34 = (t1 + 32616);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = (t1 + 32616);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t1 + 32456);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_index_select_value(t37, 1, t36, t40, 2, t43, 32, 1);
    t44 = (t1 + 31816);
    t46 = (t1 + 31816);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t1 + 32136);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng11)));
    memset(t53, 0, 8);
    xsi_vlog_signed_multiply(t53, 32, t51, 32, t52, 32);
    t54 = (t1 + 32456);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    xsi_vlog_signed_add(t57, 32, t53, 32, t56, 32);
    xsi_vlog_generic_convert_bit_index(t45, t48, 2, t57, 32, 1);
    t58 = (t45 + 4);
    t25 = *((unsigned int *)t58);
    t27 = (!(t25));
    if (t27 == 1)
        goto LAB67;

LAB68:    goto LAB65;

LAB67:    xsi_vlogvar_assign_value(t44, t37, 0, *((unsigned int *)t45), 1);
    goto LAB68;

}

static void NetDecl_3856_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t26[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t5;
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
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;

LAB0:    t1 = (t0 + 33536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7664);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
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

LAB15:    memcpy(t3, t28, 8);

LAB16:    t24 = (t0 + 44120);
    t29 = (t24 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t32, 0, 8);
    t33 = 511U;
    t34 = t33;
    t35 = (t3 + 4);
    t36 = *((unsigned int *)t3);
    t33 = (t33 & t36);
    t37 = *((unsigned int *)t35);
    t34 = (t34 & t37);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 | t33);
    t40 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t40 | t34);
    xsi_driver_vfirst_trans(t24, 0, 8U);

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = ((char*)((ng2)));
    t24 = (t0 + 7664);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_signed_multiply(t26, 32, t23, 32, t25, 32);
    t24 = (t0 + 7800);
    t27 = *((char **)t24);
    memset(t28, 0, 8);
    xsi_vlog_signed_divide(t28, 32, t26, 32, t27, 32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t28, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void NetDecl_3906_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 33784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 13816U);
    t3 = *((char **)t2);
    t2 = (t0 + 44184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0U);
    t16 = (t0 + 43528);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_3919_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 34032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 13976U);
    t3 = *((char **)t2);
    t2 = (t0 + 44248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0U);
    t16 = (t0 + 43544);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_3942_3(char *t0)
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

LAB0:    t1 = (t0 + 34280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 23496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 44312);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
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
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 43560);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_3948_4(char *t0)
{
    char t4[8];
    char t14[8];
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
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 34528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 13016U);
    t3 = *((char **)t2);
    t2 = (t0 + 20936);
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
        goto LAB7;

LAB5:    if (*((unsigned int *)t7) == 0)
        goto LAB4;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB8;

LAB9:
LAB10:    t46 = (t0 + 44376);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t50, 0, 8);
    t51 = 1U;
    t52 = t51;
    t53 = (t14 + 4);
    t54 = *((unsigned int *)t14);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t53);
    t52 = (t52 & t55);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 | t51);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 | t52);
    xsi_driver_vfirst_trans(t46, 0, 0);
    t59 = (t0 + 43576);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB8:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t3 + 4);
    t29 = (t4 + 4);
    t30 = *((unsigned int *)t3);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    goto LAB10;

}

static void Cont_3949_5(char *t0)
{
    char t6[8];
    char t22[8];
    char t37[8];
    char t53[8];
    char t54[8];
    char t70[8];
    char t78[8];
    char t110[8];
    char t118[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;

LAB0:    t1 = (t0 + 34776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 16856U);
    t3 = *((char **)t2);
    t2 = (t0 + 23976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t3);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    memcpy(t118, t22, 8);

LAB14:    t146 = (t0 + 44440);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    memset(t150, 0, 8);
    t151 = 1U;
    t152 = t151;
    t153 = (t118 + 4);
    t154 = *((unsigned int *)t118);
    t151 = (t151 & t154);
    t155 = *((unsigned int *)t153);
    t152 = (t152 & t155);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t157 | t151);
    t158 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t158 | t152);
    xsi_driver_vfirst_trans(t146, 0, 0);
    t159 = (t0 + 43592);
    *((int *)t159) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 17496U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t36 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t35) != 0)
        goto LAB17;

LAB18:    t44 = (t37 + 4);
    t45 = *((unsigned int *)t37);
    t46 = *((unsigned int *)t44);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB19;

LAB20:    memcpy(t78, t37, 8);

LAB21:    memset(t110, 0, 8);
    t111 = (t78 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t78);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t111) != 0)
        goto LAB35;

LAB36:    t119 = *((unsigned int *)t22);
    t120 = *((unsigned int *)t110);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = (t22 + 4);
    t123 = (t110 + 4);
    t124 = (t118 + 4);
    t125 = *((unsigned int *)t122);
    t126 = *((unsigned int *)t123);
    t127 = (t125 | t126);
    *((unsigned int *)t124) = t127;
    t128 = *((unsigned int *)t124);
    t129 = (t128 != 0);
    if (t129 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB14;

LAB15:    *((unsigned int *)t37) = 1;
    goto LAB18;

LAB17:    t43 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB18;

LAB19:    t48 = (t0 + 16856U);
    t49 = *((char **)t48);
    t48 = (t0 + 23976);
    t50 = (t48 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng9)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 6, t51, 6, t52, 6);
    memset(t54, 0, 8);
    t55 = (t49 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t49);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB25;

LAB22:    if (t66 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t54) = 1;

LAB25:    memset(t70, 0, 8);
    t71 = (t54 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t54);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t71) != 0)
        goto LAB28;

LAB29:    t79 = *((unsigned int *)t37);
    t80 = *((unsigned int *)t70);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t37 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t70) = 1;
    goto LAB29;

LAB28:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB29;

LAB30:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t37 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t37);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t70);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB32;

LAB33:    *((unsigned int *)t110) = 1;
    goto LAB36;

LAB35:    t117 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB36;

LAB37:    t130 = *((unsigned int *)t118);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t118) = (t130 | t131);
    t132 = (t22 + 4);
    t133 = (t110 + 4);
    t134 = *((unsigned int *)t132);
    t135 = (~(t134));
    t136 = *((unsigned int *)t22);
    t137 = (t136 & t135);
    t138 = *((unsigned int *)t133);
    t139 = (~(t138));
    t140 = *((unsigned int *)t110);
    t141 = (t140 & t139);
    t142 = (~(t137));
    t143 = (~(t141));
    t144 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t144 & t142);
    t145 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t145 & t143);
    goto LAB39;

}

static void Cont_3950_6(char *t0)
{
    char t7[8];
    char t8[8];
    char t24[8];
    char t39[8];
    char t55[8];
    char t56[8];
    char t72[8];
    char t80[8];
    char t112[8];
    char t120[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;

LAB0:    t1 = (t0 + 35024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 16856U);
    t3 = *((char **)t2);
    t2 = (t0 + 23976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 6, t5, 6, t6, 6);
    memset(t8, 0, 8);
    t9 = (t3 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    memcpy(t120, t24, 8);

LAB14:    t148 = (t0 + 44504);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    memset(t152, 0, 8);
    t153 = 1U;
    t154 = t153;
    t155 = (t120 + 4);
    t156 = *((unsigned int *)t120);
    t153 = (t153 & t156);
    t157 = *((unsigned int *)t155);
    t154 = (t154 & t157);
    t158 = (t152 + 4);
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t159 | t153);
    t160 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t160 | t154);
    xsi_driver_vfirst_trans(t148, 0, 0);
    t161 = (t0 + 43608);
    *((int *)t161) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t37 = (t0 + 17496U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t38 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t37) != 0)
        goto LAB17;

LAB18:    t46 = (t39 + 4);
    t47 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB19;

LAB20:    memcpy(t80, t39, 8);

LAB21:    memset(t112, 0, 8);
    t113 = (t80 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t80);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t113) != 0)
        goto LAB35;

LAB36:    t121 = *((unsigned int *)t24);
    t122 = *((unsigned int *)t112);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = (t24 + 4);
    t125 = (t112 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB14;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB17:    t45 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB18;

LAB19:    t50 = (t0 + 16856U);
    t51 = *((char **)t50);
    t50 = (t0 + 23976);
    t52 = (t50 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng6)));
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 6, t53, 6, t54, 6);
    memset(t56, 0, 8);
    t57 = (t51 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t51);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB25;

LAB22:    if (t68 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t56) = 1;

LAB25:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t73) != 0)
        goto LAB28;

LAB29:    t81 = *((unsigned int *)t39);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t39 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t72) = 1;
    goto LAB29;

LAB28:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB29;

LAB30:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t39 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t39);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB32;

LAB33:    *((unsigned int *)t112) = 1;
    goto LAB36;

LAB35:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB36;

LAB37:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t24 + 4);
    t135 = (t112 + 4);
    t136 = *((unsigned int *)t134);
    t137 = (~(t136));
    t138 = *((unsigned int *)t24);
    t139 = (t138 & t137);
    t140 = *((unsigned int *)t135);
    t141 = (~(t140));
    t142 = *((unsigned int *)t112);
    t143 = (t142 & t141);
    t144 = (~(t139));
    t145 = (~(t143));
    t146 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t146 & t144);
    t147 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t147 & t145);
    goto LAB39;

}

static void Always_3953_7(char *t0)
{
    char t13[8];
    char t14[8];
    char t16[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    t1 = (t0 + 35272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43624);
    *((int *)t2) = 1;
    t3 = (t0 + 35304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 17336U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = ((char*)((ng3)));
    t3 = (t0 + 16856U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 63U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 63U);
    t11 = (t0 + 23976);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memset(t16, 0, 8);
    t18 = (t16 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 63U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 63U);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 6, t14, 6, t16, 6);
    xsi_vlogtype_concat(t13, 7, 7, 2U, t26, 6, t2, 1);
    t27 = (t0 + 21256);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 7, 100LL);
    t2 = (t0 + 19576U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t3 = (t0 + 20936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB13:    t2 = (t0 + 20936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB17:    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t20 = (~(t15));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng9)));
    t12 = (t0 + 20936);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 100LL);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 20616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 21256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 100LL);
    goto LAB8;

LAB11:    t4 = ((char*)((ng9)));
    t5 = (t0 + 20936);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB13;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB17;

LAB18:
LAB21:    t17 = (t0 + 19736U);
    t18 = *((char **)t17);
    t17 = (t18 + 4);
    t24 = *((unsigned int *)t17);
    t25 = (~(t24));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t3 = (t0 + 20616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB24:    goto LAB20;

LAB22:    t19 = ((char*)((ng9)));
    t27 = (t0 + 20616);
    xsi_vlogvar_wait_assign_value(t27, t19, 0, 0, 1, 100LL);
    goto LAB24;

}

static void Cont_3979_8(char *t0)
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

LAB0:    t1 = (t0 + 35520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 24776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 44568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
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
    xsi_driver_vfirst_trans(t5, 2, 7);
    t18 = (t0 + 43640);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_3980_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 35768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 44632);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}

static void Cont_3988_10(char *t0)
{
    char t4[8];
    char t14[8];
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
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 36016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 14296U);
    t3 = *((char **)t2);
    t2 = (t0 + 21096);
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
        goto LAB7;

LAB5:    if (*((unsigned int *)t7) == 0)
        goto LAB4;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB8;

LAB9:
LAB10:    t46 = (t0 + 44696);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t50, 0, 8);
    t51 = 1U;
    t52 = t51;
    t53 = (t14 + 4);
    t54 = *((unsigned int *)t14);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t53);
    t52 = (t52 & t55);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 | t51);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 | t52);
    xsi_driver_vfirst_trans(t46, 0, 0);
    t59 = (t0 + 43656);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB8:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t3 + 4);
    t29 = (t4 + 4);
    t30 = *((unsigned int *)t3);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    goto LAB10;

}

static void Cont_3989_11(char *t0)
{
    char t7[8];
    char t8[8];
    char t24[8];
    char t39[8];
    char t55[8];
    char t56[8];
    char t72[8];
    char t80[8];
    char t112[8];
    char t120[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;

LAB0:    t1 = (t0 + 36264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 17176U);
    t3 = *((char **)t2);
    t2 = (t0 + 22856);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 8, t5, 8, t6, 8);
    memset(t8, 0, 8);
    t9 = (t3 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    memcpy(t120, t24, 8);

LAB14:    t148 = (t0 + 44760);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    memset(t152, 0, 8);
    t153 = 1U;
    t154 = t153;
    t155 = (t120 + 4);
    t156 = *((unsigned int *)t120);
    t153 = (t153 & t156);
    t157 = *((unsigned int *)t155);
    t154 = (t154 & t157);
    t158 = (t152 + 4);
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t159 | t153);
    t160 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t160 | t154);
    xsi_driver_vfirst_trans(t148, 0, 0);
    t161 = (t0 + 43672);
    *((int *)t161) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t37 = (t0 + 19896U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t38 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t37) != 0)
        goto LAB17;

LAB18:    t46 = (t39 + 4);
    t47 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB19;

LAB20:    memcpy(t80, t39, 8);

LAB21:    memset(t112, 0, 8);
    t113 = (t80 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t80);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t113) != 0)
        goto LAB35;

LAB36:    t121 = *((unsigned int *)t24);
    t122 = *((unsigned int *)t112);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = (t24 + 4);
    t125 = (t112 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB14;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB17:    t45 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB18;

LAB19:    t50 = (t0 + 17176U);
    t51 = *((char **)t50);
    t50 = (t0 + 22856);
    t52 = (t50 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng6)));
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 8, t53, 8, t54, 8);
    memset(t56, 0, 8);
    t57 = (t51 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t51);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB25;

LAB22:    if (t68 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t56) = 1;

LAB25:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t73) != 0)
        goto LAB28;

LAB29:    t81 = *((unsigned int *)t39);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t39 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t72) = 1;
    goto LAB29;

LAB28:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB29;

LAB30:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t39 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t39);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB32;

LAB33:    *((unsigned int *)t112) = 1;
    goto LAB36;

LAB35:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB36;

LAB37:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t24 + 4);
    t135 = (t112 + 4);
    t136 = *((unsigned int *)t134);
    t137 = (~(t136));
    t138 = *((unsigned int *)t24);
    t139 = (t138 & t137);
    t140 = *((unsigned int *)t135);
    t141 = (~(t140));
    t142 = *((unsigned int *)t112);
    t143 = (t142 & t141);
    t144 = (~(t139));
    t145 = (~(t143));
    t146 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t146 & t144);
    t147 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t147 & t145);
    goto LAB39;

}

static void Cont_3990_12(char *t0)
{
    char t7[8];
    char t8[8];
    char t24[8];
    char t39[8];
    char t55[8];
    char t56[8];
    char t72[8];
    char t80[8];
    char t112[8];
    char t120[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;

LAB0:    t1 = (t0 + 36512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 17176U);
    t3 = *((char **)t2);
    t2 = (t0 + 22856);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 8, t5, 8, t6, 8);
    memset(t8, 0, 8);
    t9 = (t3 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    memcpy(t120, t24, 8);

LAB14:    t148 = (t0 + 44824);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    t151 = (t150 + 56U);
    t152 = *((char **)t151);
    memset(t152, 0, 8);
    t153 = 1U;
    t154 = t153;
    t155 = (t120 + 4);
    t156 = *((unsigned int *)t120);
    t153 = (t153 & t156);
    t157 = *((unsigned int *)t155);
    t154 = (t154 & t157);
    t158 = (t152 + 4);
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t159 | t153);
    t160 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t160 | t154);
    xsi_driver_vfirst_trans(t148, 0, 0);
    t161 = (t0 + 43688);
    *((int *)t161) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t37 = (t0 + 19896U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t38 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t37) != 0)
        goto LAB17;

LAB18:    t46 = (t39 + 4);
    t47 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB19;

LAB20:    memcpy(t80, t39, 8);

LAB21:    memset(t112, 0, 8);
    t113 = (t80 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t80);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t113) != 0)
        goto LAB35;

LAB36:    t121 = *((unsigned int *)t24);
    t122 = *((unsigned int *)t112);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = (t24 + 4);
    t125 = (t112 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB14;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB17:    t45 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB18;

LAB19:    t50 = (t0 + 17176U);
    t51 = *((char **)t50);
    t50 = (t0 + 22856);
    t52 = (t50 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng17)));
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 8, t53, 8, t54, 8);
    memset(t56, 0, 8);
    t57 = (t51 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t51);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB25;

LAB22:    if (t68 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t56) = 1;

LAB25:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t73) != 0)
        goto LAB28;

LAB29:    t81 = *((unsigned int *)t39);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t39 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t72) = 1;
    goto LAB29;

LAB28:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB29;

LAB30:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t39 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t39);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB32;

LAB33:    *((unsigned int *)t112) = 1;
    goto LAB36;

LAB35:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB36;

LAB37:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t24 + 4);
    t135 = (t112 + 4);
    t136 = *((unsigned int *)t134);
    t137 = (~(t136));
    t138 = *((unsigned int *)t24);
    t139 = (t138 & t137);
    t140 = *((unsigned int *)t135);
    t141 = (~(t140));
    t142 = *((unsigned int *)t112);
    t143 = (t142 & t141);
    t144 = (~(t139));
    t145 = (~(t143));
    t146 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t146 & t144);
    t147 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t147 & t145);
    goto LAB39;

}

static void Always_3993_13(char *t0)
{
    char t13[8];
    char t14[8];
    char t16[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    t1 = (t0 + 36760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43704);
    *((int *)t2) = 1;
    t3 = (t0 + 36792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 13656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = ((char*)((ng3)));
    t3 = (t0 + 22856);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 255U);
    t17 = (t0 + 17176U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 255U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 255U);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 8, t14, 8, t16, 8);
    xsi_vlogtype_concat(t13, 9, 9, 2U, t26, 8, t2, 1);
    t27 = (t0 + 21416);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 9, 100LL);
    t2 = (t0 + 20056U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB15:    t2 = ((char*)((ng3)));
    t3 = (t0 + 21096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB13:    t2 = (t0 + 13496U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    t2 = (t0 + 21096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t5) == 0)
        goto LAB20;

LAB22:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB23:    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t20 = (~(t15));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB18:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = (t0 + 2496);
    t12 = *((char **)t11);
    t11 = (t0 + 21096);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 100LL);
    t2 = (t0 + 2496);
    t3 = *((char **)t2);
    t2 = (t0 + 20776);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 100LL);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 21416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 100LL);
    goto LAB8;

LAB11:
LAB14:    t4 = ((char*)((ng9)));
    t5 = (t0 + 21096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB13;

LAB16:
LAB19:    t4 = ((char*)((ng3)));
    t5 = (t0 + 20776);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB18;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB24:
LAB27:    t17 = (t0 + 20216U);
    t18 = *((char **)t17);
    t17 = (t18 + 4);
    t24 = *((unsigned int *)t17);
    t25 = (~(t24));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB28;

LAB29:    t2 = ((char*)((ng3)));
    t3 = (t0 + 20776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB30:    goto LAB26;

LAB28:    t19 = ((char*)((ng9)));
    t27 = (t0 + 20776);
    xsi_vlogvar_wait_assign_value(t27, t19, 0, 0, 1, 100LL);
    goto LAB30;

}

static void NetDecl_4082_14(char *t0)
{
    char t8[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 37008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 22216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    t5 = (t0 + 7664);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t6, 32, t7, 32);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t4, 32, t8, 32);
    t5 = (t0 + 44888);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t14 = (t0 + 43720);
    *((int *)t14) = 1;

LAB1:    return;
}

static void NetDecl_4088_15(char *t0)
{
    char t8[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 37256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 22056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = *((char **)t5);
    t5 = (t0 + 7800);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t6, 32, t7, 32);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t4, 32, t8, 32);
    t5 = (t0 + 44952);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t14 = (t0 + 43736);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Always_4098_16(char *t0)
{
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 37504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43752);
    *((int *)t2) = 1;
    t3 = (t0 + 37536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6304);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = (t0 + 22216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_divide(t16, 32, t4, 32, t11, 32);
    t5 = (t0 + 26056);
    xsi_vlogvar_assign_value(t5, t16, 0, 0, 32);
    t2 = (t0 + 26056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 63U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 63U);
    t12 = (t0 + 26216);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 6);

LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = (t0 + 22216);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2360);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_divide(t16, 32, t13, 32, t15, 32);
    t14 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t16, 32, t14, 32);
    t18 = (t0 + 26056);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    t2 = (t0 + 26056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 63U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 63U);
    t12 = (t0 + 26216);
    xsi_vlogvar_assign_value(t12, t16, 0, 0, 6);
    goto LAB8;

}

static void Always_4133_17(char *t0)
{
    char t11[8];
    char t12[8];
    char t17[8];
    char t46[8];
    char t54[8];
    char t57[8];
    char t58[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
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
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 37752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43768);
    *((int *)t2) = 1;
    t3 = (t0 + 37784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 6304);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB27:    t2 = (t0 + 22056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t13);
    t10 = *((unsigned int *)t14);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB31;

LAB28:    if (t24 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t17) = 1;

LAB31:    memset(t12, 0, 8);
    t16 = (t17 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t17);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t16) != 0)
        goto LAB34;

LAB35:    t19 = (t12 + 4);
    t34 = *((unsigned int *)t12);
    t35 = *((unsigned int *)t19);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB36;

LAB37:    t37 = *((unsigned int *)t12);
    t38 = (~(t37));
    t41 = *((unsigned int *)t19);
    t42 = (t38 || t41);
    if (t42 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t19) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t12) > 0)
        goto LAB42;

LAB43:    memcpy(t11, t57, 8);

LAB44:    t52 = (t0 + 26376);
    xsi_vlogvar_assign_value(t52, t11, 0, 0, 32);
    t2 = (t0 + 26376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t13 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    t14 = (t0 + 26536);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 8);

LAB8:    goto LAB2;

LAB6:
LAB9:    t13 = (t0 + 22056);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB13;

LAB10:    if (t29 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t17) = 1;

LAB13:    memset(t12, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t33) != 0)
        goto LAB16;

LAB17:    t40 = (t12 + 4);
    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB18;

LAB19:    t47 = *((unsigned int *)t12);
    t48 = (~(t47));
    t49 = *((unsigned int *)t40);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t40) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t12) > 0)
        goto LAB24;

LAB25:    memcpy(t11, t61, 8);

LAB26:    t59 = (t0 + 26376);
    xsi_vlogvar_assign_value(t59, t11, 0, 0, 32);
    t2 = (t0 + 26376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t13 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    t14 = (t0 + 26536);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 8);
    goto LAB8;

LAB12:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t12) = 1;
    goto LAB17;

LAB16:    t39 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB17;

LAB18:    t44 = (t0 + 16696U);
    t45 = *((char **)t44);
    memcpy(t46, t45, 8);
    goto LAB19;

LAB20:    t44 = (t0 + 22056);
    t51 = (t44 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng0)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_minus(t54, 32, t52, 32, t53, 32);
    t55 = (t0 + 2088);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    xsi_vlog_unsigned_divide(t57, 32, t54, 32, t56, 32);
    t55 = ((char*)((ng0)));
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 32, t57, 32, t55, 32);
    t59 = (t0 + 16696U);
    t60 = *((char **)t59);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t58, 32, t60, 9);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t11, 32, t46, 32, t61, 32);
    goto LAB26;

LAB24:    memcpy(t11, t46, 8);
    goto LAB26;

LAB30:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t12) = 1;
    goto LAB35;

LAB34:    t18 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB35;

LAB36:    t32 = ((char*)((ng4)));
    goto LAB37;

LAB38:    t33 = (t0 + 22056);
    t39 = (t33 + 56U);
    t40 = *((char **)t39);
    t44 = ((char*)((ng0)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t40, 32, t44, 32);
    t45 = (t0 + 2088);
    t51 = *((char **)t45);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_divide(t54, 32, t46, 32, t51, 32);
    t45 = ((char*)((ng0)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_add(t57, 32, t54, 32, t45, 32);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t11, 32, t32, 32, t57, 32);
    goto LAB44;

LAB42:    memcpy(t11, t32, 8);
    goto LAB44;

}

static void Initial_4410_18(char *t0)
{
    char t3[8];
    char t6[128];
    char t21[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:
LAB2:    t1 = ((char*)((ng4)));
    t2 = (t0 + 22056);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 22216);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 22376);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 22536);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    t1 = (t0 + 5624);
    t2 = *((char **)t1);
    t1 = ((char*)((ng0)));
    memset(t3, 0, 8);
    xsi_vlog_signed_minus(t3, 32, t2, 32, t1, 32);
    t4 = (t0 + 23816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t1 = (t0 + 6848);
    t2 = *((char **)t1);
    t1 = ((char*)((ng0)));
    memset(t3, 0, 8);
    xsi_vlog_signed_minus(t3, 32, t2, 32, t1, 32);
    t4 = (t0 + 22696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 22856);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 23976);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    t1 = (t0 + 23816);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 25736);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t1 = (t0 + 22696);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 25416);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t1 = ((char*)((ng48)));
    memcpy(t6, t1, 8);
    t2 = (t6 + 8);
    memset(t2, 0, 120);
    t4 = (t0 + 37808);
    t5 = (t0 + 11104);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    t8 = (t0 + 31976);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 512);

LAB3:    t9 = (t0 + 37904);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB5;

LAB4:    t10 = (t0 + 37904);
    t18 = *((char **)t10);
    t10 = (t0 + 31816);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 16);
    t22 = (t0 + 11104);
    t23 = (t0 + 37808);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 28776);
    xsi_vlogvar_assign_value(t25, t21, 0, 0, 64);
    t1 = (t0 + 28776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 27016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 26696);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    t1 = (t0 + 28776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 27176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 27336);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 27496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 28616);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = (t0 + 4264);
    t2 = *((char **)t1);
    t1 = (t0 + 27656);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    t1 = (t0 + 5896);
    t2 = *((char **)t1);
    t1 = (t0 + 27816);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 28296);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 28456);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 27976);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 28136);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
LAB5:    t9 = (t0 + 38000U);
    *((char **)t9) = &&LAB3;
    goto LAB1;

}

static void Cont_4460_19(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t7[8];
    char t21[8];
    char t22[8];
    char t37[8];
    char t38[8];
    char t46[8];
    char t74[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;

LAB0:    t1 = (t0 + 38248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4400);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t82, t7, 8);

LAB10:    memset(t4, 0, 8);
    t114 = (t82 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t82);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t114) != 0)
        goto LAB34;

LAB35:    t121 = (t4 + 4);
    t122 = *((unsigned int *)t4);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB36;

LAB37:    t128 = *((unsigned int *)t4);
    t129 = (~(t128));
    t130 = *((unsigned int *)t121);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t121) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t4) > 0)
        goto LAB42;

LAB43:    memcpy(t3, t134, 16);

LAB44:    t135 = (t0 + 45016);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    xsi_vlog_bit_copy(t139, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t135, 0, 63);
    t140 = (t0 + 43784);
    *((int *)t140) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 4128);
    t20 = *((char **)t19);
    t19 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t20, 32, t19, 32);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) != 0)
        goto LAB13;

LAB14:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB15;

LAB16:    memcpy(t46, t22, 8);

LAB17:    memset(t74, 0, 8);
    t75 = (t46 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t46);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t75) != 0)
        goto LAB27;

LAB28:    t83 = *((unsigned int *)t7);
    t84 = *((unsigned int *)t74);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t7 + 4);
    t87 = (t74 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    t35 = (t0 + 4128);
    t36 = *((char **)t35);
    t35 = ((char*)((ng0)));
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t36, 32, t35, 32);
    memset(t38, 0, 8);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t37);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t39) != 0)
        goto LAB20;

LAB21:    t47 = *((unsigned int *)t22);
    t48 = *((unsigned int *)t38);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = (t22 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t38) = 1;
    goto LAB21;

LAB20:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB21;

LAB22:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t22 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t22);
    t65 = (t64 & t63);
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t38);
    t69 = (t68 & t67);
    t70 = (~(t65));
    t71 = (~(t69));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    goto LAB24;

LAB25:    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB27:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB28;

LAB29:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t7 + 4);
    t97 = (t74 + 4);
    t98 = *((unsigned int *)t7);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t74);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB31;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB34:    t120 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB35;

LAB36:    t125 = (t0 + 27176);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    goto LAB37;

LAB38:    t132 = (t0 + 27016);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t3, 64, t127, 64, t134, 64);
    goto LAB44;

LAB42:    memcpy(t3, t127, 16);
    goto LAB44;

}

static void Cont_4463_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 38496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 17976U);
    t3 = *((char **)t2);
    t2 = (t0 + 45080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t8 = (t0 + 43800);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_4468_21(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char t22[8];
    char t23[8];
    char t31[8];
    char t59[8];
    char t73[8];
    char t74[8];
    char t88[8];
    char t89[8];
    char t104[8];
    char t105[8];
    char t113[8];
    char t141[8];
    char t149[8];
    char t181[8];
    char t189[8];
    char t235[8];
    char t251[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    int t173;
    int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    int t213;
    int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    char *t233;
    char *t234;
    char *t236;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    char *t250;
    char *t252;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t260;
    char *t261;
    char *t262;
    char *t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;

LAB0:    t1 = (t0 + 38744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7392);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t31, t7, 8);

LAB10:    memset(t59, 0, 8);
    t60 = (t31 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t31);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t60) != 0)
        goto LAB20;

LAB21:    t67 = (t59 + 4);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB22;

LAB23:    memcpy(t189, t59, 8);

LAB24:    memset(t4, 0, 8);
    t221 = (t189 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t189);
    t225 = (t224 & t223);
    t226 = (t225 & 1U);
    if (t226 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t221) != 0)
        goto LAB62;

LAB63:    t228 = (t4 + 4);
    t229 = *((unsigned int *)t4);
    t230 = *((unsigned int *)t228);
    t231 = (t229 || t230);
    if (t231 > 0)
        goto LAB64;

LAB65:    t244 = *((unsigned int *)t4);
    t245 = (~(t244));
    t246 = *((unsigned int *)t228);
    t247 = (t245 || t246);
    if (t247 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t228) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t4) > 0)
        goto LAB70;

LAB71:    memcpy(t3, t251, 8);

LAB72:    t260 = (t0 + 45144);
    t261 = (t260 + 56U);
    t262 = *((char **)t261);
    t263 = (t262 + 56U);
    t264 = *((char **)t263);
    memset(t264, 0, 8);
    t265 = 1U;
    t266 = t265;
    t267 = (t3 + 4);
    t268 = *((unsigned int *)t3);
    t265 = (t265 & t268);
    t269 = *((unsigned int *)t267);
    t266 = (t266 & t269);
    t270 = (t264 + 4);
    t271 = *((unsigned int *)t264);
    *((unsigned int *)t264) = (t271 | t265);
    t272 = *((unsigned int *)t270);
    *((unsigned int *)t270) = (t272 | t266);
    xsi_driver_vfirst_trans(t260, 0, 0);
    t273 = (t0 + 43816);
    *((int *)t273) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 7392);
    t21 = *((char **)t20);
    t20 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t21, 32, t20, 32);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t24) != 0)
        goto LAB13;

LAB14:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t7 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB13:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB15:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t7 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t7);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB17;

LAB18:    *((unsigned int *)t59) = 1;
    goto LAB21;

LAB20:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB21;

LAB22:    t71 = (t0 + 4400);
    t72 = *((char **)t71);
    t71 = ((char*)((ng2)));
    memset(t73, 0, 8);
    xsi_vlog_signed_equal(t73, 32, t72, 32, t71, 32);
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t73);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t75) != 0)
        goto LAB27;

LAB28:    t82 = (t74 + 4);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB29;

LAB30:    memcpy(t149, t74, 8);

LAB31:    memset(t181, 0, 8);
    t182 = (t149 + 4);
    t183 = *((unsigned int *)t182);
    t184 = (~(t183));
    t185 = *((unsigned int *)t149);
    t186 = (t185 & t184);
    t187 = (t186 & 1U);
    if (t187 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t182) != 0)
        goto LAB55;

LAB56:    t190 = *((unsigned int *)t59);
    t191 = *((unsigned int *)t181);
    t192 = (t190 & t191);
    *((unsigned int *)t189) = t192;
    t193 = (t59 + 4);
    t194 = (t181 + 4);
    t195 = (t189 + 4);
    t196 = *((unsigned int *)t193);
    t197 = *((unsigned int *)t194);
    t198 = (t196 | t197);
    *((unsigned int *)t195) = t198;
    t199 = *((unsigned int *)t195);
    t200 = (t199 != 0);
    if (t200 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB24;

LAB25:    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB27:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB28;

LAB29:    t86 = (t0 + 4128);
    t87 = *((char **)t86);
    t86 = ((char*)((ng4)));
    memset(t88, 0, 8);
    xsi_vlog_signed_equal(t88, 32, t87, 32, t86, 32);
    memset(t89, 0, 8);
    t90 = (t88 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t88);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t90) != 0)
        goto LAB34;

LAB35:    t97 = (t89 + 4);
    t98 = *((unsigned int *)t89);
    t99 = (!(t98));
    t100 = *((unsigned int *)t97);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB36;

LAB37:    memcpy(t113, t89, 8);

LAB38:    memset(t141, 0, 8);
    t142 = (t113 + 4);
    t143 = *((unsigned int *)t142);
    t144 = (~(t143));
    t145 = *((unsigned int *)t113);
    t146 = (t145 & t144);
    t147 = (t146 & 1U);
    if (t147 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t142) != 0)
        goto LAB48;

LAB49:    t150 = *((unsigned int *)t74);
    t151 = *((unsigned int *)t141);
    t152 = (t150 & t151);
    *((unsigned int *)t149) = t152;
    t153 = (t74 + 4);
    t154 = (t141 + 4);
    t155 = (t149 + 4);
    t156 = *((unsigned int *)t153);
    t157 = *((unsigned int *)t154);
    t158 = (t156 | t157);
    *((unsigned int *)t155) = t158;
    t159 = *((unsigned int *)t155);
    t160 = (t159 != 0);
    if (t160 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB31;

LAB32:    *((unsigned int *)t89) = 1;
    goto LAB35;

LAB34:    t96 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB35;

LAB36:    t102 = (t0 + 4128);
    t103 = *((char **)t102);
    t102 = ((char*)((ng0)));
    memset(t104, 0, 8);
    xsi_vlog_signed_equal(t104, 32, t103, 32, t102, 32);
    memset(t105, 0, 8);
    t106 = (t104 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t104);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t106) != 0)
        goto LAB41;

LAB42:    t114 = *((unsigned int *)t89);
    t115 = *((unsigned int *)t105);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = (t89 + 4);
    t118 = (t105 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t105) = 1;
    goto LAB42;

LAB41:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB42;

LAB43:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t89 + 4);
    t128 = (t105 + 4);
    t129 = *((unsigned int *)t127);
    t130 = (~(t129));
    t131 = *((unsigned int *)t89);
    t132 = (t131 & t130);
    t133 = *((unsigned int *)t128);
    t134 = (~(t133));
    t135 = *((unsigned int *)t105);
    t136 = (t135 & t134);
    t137 = (~(t132));
    t138 = (~(t136));
    t139 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t139 & t137);
    t140 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t140 & t138);
    goto LAB45;

LAB46:    *((unsigned int *)t141) = 1;
    goto LAB49;

LAB48:    t148 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB49;

LAB50:    t161 = *((unsigned int *)t149);
    t162 = *((unsigned int *)t155);
    *((unsigned int *)t149) = (t161 | t162);
    t163 = (t74 + 4);
    t164 = (t141 + 4);
    t165 = *((unsigned int *)t74);
    t166 = (~(t165));
    t167 = *((unsigned int *)t163);
    t168 = (~(t167));
    t169 = *((unsigned int *)t141);
    t170 = (~(t169));
    t171 = *((unsigned int *)t164);
    t172 = (~(t171));
    t173 = (t166 & t168);
    t174 = (t170 & t172);
    t175 = (~(t173));
    t176 = (~(t174));
    t177 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t177 & t175);
    t178 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t178 & t176);
    t179 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t179 & t175);
    t180 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t180 & t176);
    goto LAB52;

LAB53:    *((unsigned int *)t181) = 1;
    goto LAB56;

LAB55:    t188 = (t181 + 4);
    *((unsigned int *)t181) = 1;
    *((unsigned int *)t188) = 1;
    goto LAB56;

LAB57:    t201 = *((unsigned int *)t189);
    t202 = *((unsigned int *)t195);
    *((unsigned int *)t189) = (t201 | t202);
    t203 = (t59 + 4);
    t204 = (t181 + 4);
    t205 = *((unsigned int *)t59);
    t206 = (~(t205));
    t207 = *((unsigned int *)t203);
    t208 = (~(t207));
    t209 = *((unsigned int *)t181);
    t210 = (~(t209));
    t211 = *((unsigned int *)t204);
    t212 = (~(t211));
    t213 = (t206 & t208);
    t214 = (t210 & t212);
    t215 = (~(t213));
    t216 = (~(t214));
    t217 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t217 & t215);
    t218 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t218 & t216);
    t219 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t219 & t215);
    t220 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t220 & t216);
    goto LAB59;

LAB60:    *((unsigned int *)t4) = 1;
    goto LAB63;

LAB62:    t227 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t227) = 1;
    goto LAB63;

LAB64:    t232 = (t0 + 26856);
    t233 = (t232 + 56U);
    t234 = *((char **)t233);
    memset(t235, 0, 8);
    t236 = (t235 + 4);
    t237 = (t234 + 4);
    t238 = *((unsigned int *)t234);
    t239 = (t238 >> 0);
    t240 = (t239 & 1);
    *((unsigned int *)t235) = t240;
    t241 = *((unsigned int *)t237);
    t242 = (t241 >> 0);
    t243 = (t242 & 1);
    *((unsigned int *)t236) = t243;
    goto LAB65;

LAB66:    t248 = (t0 + 26696);
    t249 = (t248 + 56U);
    t250 = *((char **)t249);
    memset(t251, 0, 8);
    t252 = (t251 + 4);
    t253 = (t250 + 4);
    t254 = *((unsigned int *)t250);
    t255 = (t254 >> 0);
    t256 = (t255 & 1);
    *((unsigned int *)t251) = t256;
    t257 = *((unsigned int *)t253);
    t258 = (t257 >> 0);
    t259 = (t258 & 1);
    *((unsigned int *)t252) = t259;
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t3, 1, t235, 1, t251, 1);
    goto LAB72;

LAB70:    memcpy(t3, t235, 8);
    goto LAB72;

}

static void Cont_4472_22(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char t22[8];
    char t23[8];
    char t31[8];
    char t59[8];
    char t73[8];
    char t74[8];
    char t88[8];
    char t89[8];
    char t104[8];
    char t105[8];
    char t113[8];
    char t141[8];
    char t149[8];
    char t181[8];
    char t189[8];
    char t235[8];
    char t251[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    int t173;
    int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    int t213;
    int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    char *t233;
    char *t234;
    char *t236;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    char *t250;
    char *t252;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t260;
    char *t261;
    char *t262;
    char *t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;

LAB0:    t1 = (t0 + 38992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7392);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t31, t7, 8);

LAB10:    memset(t59, 0, 8);
    t60 = (t31 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t31);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t60) != 0)
        goto LAB20;

LAB21:    t67 = (t59 + 4);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB22;

LAB23:    memcpy(t189, t59, 8);

LAB24:    memset(t4, 0, 8);
    t221 = (t189 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t189);
    t225 = (t224 & t223);
    t226 = (t225 & 1U);
    if (t226 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t221) != 0)
        goto LAB62;

LAB63:    t228 = (t4 + 4);
    t229 = *((unsigned int *)t4);
    t230 = *((unsigned int *)t228);
    t231 = (t229 || t230);
    if (t231 > 0)
        goto LAB64;

LAB65:    t244 = *((unsigned int *)t4);
    t245 = (~(t244));
    t246 = *((unsigned int *)t228);
    t247 = (t245 || t246);
    if (t247 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t228) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t4) > 0)
        goto LAB70;

LAB71:    memcpy(t3, t251, 8);

LAB72:    t260 = (t0 + 45208);
    t261 = (t260 + 56U);
    t262 = *((char **)t261);
    t263 = (t262 + 56U);
    t264 = *((char **)t263);
    memset(t264, 0, 8);
    t265 = 1U;
    t266 = t265;
    t267 = (t3 + 4);
    t268 = *((unsigned int *)t3);
    t265 = (t265 & t268);
    t269 = *((unsigned int *)t267);
    t266 = (t266 & t269);
    t270 = (t264 + 4);
    t271 = *((unsigned int *)t264);
    *((unsigned int *)t264) = (t271 | t265);
    t272 = *((unsigned int *)t270);
    *((unsigned int *)t270) = (t272 | t266);
    xsi_driver_vfirst_trans(t260, 0, 0);
    t273 = (t0 + 43832);
    *((int *)t273) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = (t0 + 7392);
    t21 = *((char **)t20);
    t20 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t21, 32, t20, 32);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t24) != 0)
        goto LAB13;

LAB14:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t7 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB13:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB15:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t7 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t7);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB17;

LAB18:    *((unsigned int *)t59) = 1;
    goto LAB21;

LAB20:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB21;

LAB22:    t71 = (t0 + 4400);
    t72 = *((char **)t71);
    t71 = ((char*)((ng2)));
    memset(t73, 0, 8);
    xsi_vlog_signed_equal(t73, 32, t72, 32, t71, 32);
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t73);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t75) != 0)
        goto LAB27;

LAB28:    t82 = (t74 + 4);
    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB29;

LAB30:    memcpy(t149, t74, 8);

LAB31:    memset(t181, 0, 8);
    t182 = (t149 + 4);
    t183 = *((unsigned int *)t182);
    t184 = (~(t183));
    t185 = *((unsigned int *)t149);
    t186 = (t185 & t184);
    t187 = (t186 & 1U);
    if (t187 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t182) != 0)
        goto LAB55;

LAB56:    t190 = *((unsigned int *)t59);
    t191 = *((unsigned int *)t181);
    t192 = (t190 & t191);
    *((unsigned int *)t189) = t192;
    t193 = (t59 + 4);
    t194 = (t181 + 4);
    t195 = (t189 + 4);
    t196 = *((unsigned int *)t193);
    t197 = *((unsigned int *)t194);
    t198 = (t196 | t197);
    *((unsigned int *)t195) = t198;
    t199 = *((unsigned int *)t195);
    t200 = (t199 != 0);
    if (t200 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB24;

LAB25:    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB27:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB28;

LAB29:    t86 = (t0 + 4128);
    t87 = *((char **)t86);
    t86 = ((char*)((ng4)));
    memset(t88, 0, 8);
    xsi_vlog_signed_equal(t88, 32, t87, 32, t86, 32);
    memset(t89, 0, 8);
    t90 = (t88 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t88);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t90) != 0)
        goto LAB34;

LAB35:    t97 = (t89 + 4);
    t98 = *((unsigned int *)t89);
    t99 = (!(t98));
    t100 = *((unsigned int *)t97);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB36;

LAB37:    memcpy(t113, t89, 8);

LAB38:    memset(t141, 0, 8);
    t142 = (t113 + 4);
    t143 = *((unsigned int *)t142);
    t144 = (~(t143));
    t145 = *((unsigned int *)t113);
    t146 = (t145 & t144);
    t147 = (t146 & 1U);
    if (t147 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t142) != 0)
        goto LAB48;

LAB49:    t150 = *((unsigned int *)t74);
    t151 = *((unsigned int *)t141);
    t152 = (t150 & t151);
    *((unsigned int *)t149) = t152;
    t153 = (t74 + 4);
    t154 = (t141 + 4);
    t155 = (t149 + 4);
    t156 = *((unsigned int *)t153);
    t157 = *((unsigned int *)t154);
    t158 = (t156 | t157);
    *((unsigned int *)t155) = t158;
    t159 = *((unsigned int *)t155);
    t160 = (t159 != 0);
    if (t160 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB31;

LAB32:    *((unsigned int *)t89) = 1;
    goto LAB35;

LAB34:    t96 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB35;

LAB36:    t102 = (t0 + 4128);
    t103 = *((char **)t102);
    t102 = ((char*)((ng0)));
    memset(t104, 0, 8);
    xsi_vlog_signed_equal(t104, 32, t103, 32, t102, 32);
    memset(t105, 0, 8);
    t106 = (t104 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t104);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t106) != 0)
        goto LAB41;

LAB42:    t114 = *((unsigned int *)t89);
    t115 = *((unsigned int *)t105);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = (t89 + 4);
    t118 = (t105 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t105) = 1;
    goto LAB42;

LAB41:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB42;

LAB43:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t89 + 4);
    t128 = (t105 + 4);
    t129 = *((unsigned int *)t127);
    t130 = (~(t129));
    t131 = *((unsigned int *)t89);
    t132 = (t131 & t130);
    t133 = *((unsigned int *)t128);
    t134 = (~(t133));
    t135 = *((unsigned int *)t105);
    t136 = (t135 & t134);
    t137 = (~(t132));
    t138 = (~(t136));
    t139 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t139 & t137);
    t140 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t140 & t138);
    goto LAB45;

LAB46:    *((unsigned int *)t141) = 1;
    goto LAB49;

LAB48:    t148 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB49;

LAB50:    t161 = *((unsigned int *)t149);
    t162 = *((unsigned int *)t155);
    *((unsigned int *)t149) = (t161 | t162);
    t163 = (t74 + 4);
    t164 = (t141 + 4);
    t165 = *((unsigned int *)t74);
    t166 = (~(t165));
    t167 = *((unsigned int *)t163);
    t168 = (~(t167));
    t169 = *((unsigned int *)t141);
    t170 = (~(t169));
    t171 = *((unsigned int *)t164);
    t172 = (~(t171));
    t173 = (t166 & t168);
    t174 = (t170 & t172);
    t175 = (~(t173));
    t176 = (~(t174));
    t177 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t177 & t175);
    t178 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t178 & t176);
    t179 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t179 & t175);
    t180 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t180 & t176);
    goto LAB52;

LAB53:    *((unsigned int *)t181) = 1;
    goto LAB56;

LAB55:    t188 = (t181 + 4);
    *((unsigned int *)t181) = 1;
    *((unsigned int *)t188) = 1;
    goto LAB56;

LAB57:    t201 = *((unsigned int *)t189);
    t202 = *((unsigned int *)t195);
    *((unsigned int *)t189) = (t201 | t202);
    t203 = (t59 + 4);
    t204 = (t181 + 4);
    t205 = *((unsigned int *)t59);
    t206 = (~(t205));
    t207 = *((unsigned int *)t203);
    t208 = (~(t207));
    t209 = *((unsigned int *)t181);
    t210 = (~(t209));
    t211 = *((unsigned int *)t204);
    t212 = (~(t211));
    t213 = (t206 & t208);
    t214 = (t210 & t212);
    t215 = (~(t213));
    t216 = (~(t214));
    t217 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t217 & t215);
    t218 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t218 & t216);
    t219 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t219 & t215);
    t220 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t220 & t216);
    goto LAB59;

LAB60:    *((unsigned int *)t4) = 1;
    goto LAB63;

LAB62:    t227 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t227) = 1;
    goto LAB63;

LAB64:    t232 = (t0 + 26856);
    t233 = (t232 + 56U);
    t234 = *((char **)t233);
    memset(t235, 0, 8);
    t236 = (t235 + 4);
    t237 = (t234 + 4);
    t238 = *((unsigned int *)t234);
    t239 = (t238 >> 1);
    t240 = (t239 & 1);
    *((unsigned int *)t235) = t240;
    t241 = *((unsigned int *)t237);
    t242 = (t241 >> 1);
    t243 = (t242 & 1);
    *((unsigned int *)t236) = t243;
    goto LAB65;

LAB66:    t248 = (t0 + 26696);
    t249 = (t248 + 56U);
    t250 = *((char **)t249);
    memset(t251, 0, 8);
    t252 = (t251 + 4);
    t253 = (t250 + 4);
    t254 = *((unsigned int *)t250);
    t255 = (t254 >> 1);
    t256 = (t255 & 1);
    *((unsigned int *)t251) = t256;
    t257 = *((unsigned int *)t253);
    t258 = (t257 >> 1);
    t259 = (t258 & 1);
    *((unsigned int *)t252) = t259;
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t3, 1, t235, 1, t251, 1);
    goto LAB72;

LAB70:    memcpy(t3, t235, 8);
    goto LAB72;

}

static void Cont_4486_23(char *t0)
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

LAB0:    t1 = (t0 + 39240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 28136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 45272);
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
    t18 = (t0 + 43848);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_4487_24(char *t0)
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

LAB0:    t1 = (t0 + 39488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 45336);
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
    t18 = (t0 + 43864);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_4613_25(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
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
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
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

LAB0:    t1 = (t0 + 39736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6304);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t32, 8);

LAB16:    t44 = (t0 + 45400);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 63U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 5);
    t57 = (t0 + 43880);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 29896);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 1);
    *((unsigned int *)t16) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 1);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 63U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 63U);
    goto LAB9;

LAB10:    t33 = (t0 + 21256);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 1);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 1);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 63U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 63U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 6, t16, 6, t32, 6);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_4631_26(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t18[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 39984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6304);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
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

LAB9:    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t34, 8);

LAB16:    t46 = (t0 + 45464);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t50, 0, 8);
    t51 = 255U;
    t52 = t51;
    t53 = (t3 + 4);
    t54 = *((unsigned int *)t3);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t53);
    t52 = (t52 & t55);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 | t51);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 | t52);
    xsi_driver_vfirst_trans(t46, 0, 7);
    t59 = (t0 + 43896);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 21576);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 1);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 1);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 255U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 255U);
    goto LAB9;

LAB10:    t35 = (t0 + 21416);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t34 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 1);
    *((unsigned int *)t34) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 1);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t44 & 255U);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 & 255U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t18, 8, t34, 8);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_4661_27(char *t0)
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
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 40232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43912);
    *((int *)t2) = 1;
    t3 = (t0 + 40264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 17336U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
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

LAB11:    t2 = (t0 + 24936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = (t0 + 7120);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_signed_equal(t30, 32, t29, 32, t28, 32);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB12;

LAB14:    t37 = ((char*)((ng4)));
    t38 = (t0 + 26856);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 2, 100LL);
    goto LAB16;

LAB17:
LAB20:    t7 = (t0 + 27016);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 27176);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 64, 100LL);
    t2 = (t0 + 26696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26856);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 100LL);
    goto LAB19;

}

static void Cont_4726_28(char *t0)
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

LAB0:    t1 = (t0 + 40480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 23016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 45528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 24, 31);
    t18 = (t0 + 43928);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_4727_29(char *t0)
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

LAB0:    t1 = (t0 + 40728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 24136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 45592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
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
    xsi_driver_vfirst_trans(t5, 18, 23);
    t18 = (t0 + 43944);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_4728_30(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 40976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43960);
    *((int *)t2) = 1;
    t3 = (t0 + 41008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 18616U);
    t5 = *((char **)t4);
    t4 = (t0 + 18576U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 18576U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 8, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 23496);
    xsi_vlogvar_wait_assign_value(t13, t6, 0, 0, 8, 0LL);
    t2 = (t0 + 18776U);
    t3 = *((char **)t2);
    t2 = (t0 + 18736U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 18736U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 6, t3, t5, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 24776);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 6, 0LL);
    goto LAB2;

}

static void Always_4737_31(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t37[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    int t71;

LAB0:    t1 = (t0 + 41224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43976);
    *((int *)t2) = 1;
    t3 = (t0 + 41256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 41032);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    t6 = (t0 + 17016U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB18:    t2 = (t0 + 22856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23016);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);
    t2 = (t0 + 7800);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t33, 0, 8);
    xsi_vlog_signed_greater(t33, 32, t3, 32, t2, 32);
    memset(t32, 0, 8);
    t4 = (t33 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t33);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t4) != 0)
        goto LAB21;

LAB22:    t6 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t6);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB23;

LAB24:    t19 = *((unsigned int *)t32);
    t20 = (~(t19));
    t21 = *((unsigned int *)t6);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t6) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t32) > 0)
        goto LAB29;

LAB30:    memcpy(t8, t37, 8);

LAB31:    t35 = (t0 + 28936);
    xsi_vlogvar_assign_value(t35, t8, 0, 0, 32);
    t2 = (t0 + 23816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25896);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t2 = (t0 + 25736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB33;

LAB32:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB34;

LAB35:    t24 = (t8 + 4);
    t11 = *((unsigned int *)t24);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB37;

LAB38:
LAB41:    t2 = (t0 + 22056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    t5 = (t0 + 25736);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 25896);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t9, 32, t24, 32);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_multiply(t32, 32, t6, 32, t8, 32);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t4, 32, t32, 32);
    t30 = (t0 + 22376);
    xsi_vlogvar_assign_value(t30, t33, 0, 0, 32);

LAB39:    t2 = (t0 + 14296U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB45;

LAB42:    if (t20 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t8) = 1;

LAB45:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB46;

LAB47:
LAB105:    t2 = ((char*)((ng4)));
    t3 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);

LAB48:    t2 = (t0 + 22376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 100LL);
    t2 = (t0 + 23816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25736);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 100LL);

LAB14:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 41032);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:
LAB15:    t30 = ((char*)((ng4)));
    t31 = (t0 + 22056);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 32, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 55264);
    memcpy(t3, t2, 8);
    t4 = (t0 + 41032);
    xsi_process_wait(t4, 100LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    t5 = (t0 + 55264);
    t6 = (t0 + 22376);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    t2 = (t0 + 6848);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t3, 32, t2, 32);
    t4 = (t0 + 22696);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 32, 100LL);
    t2 = (t0 + 5624);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t3, 32, t2, 32);
    t4 = (t0 + 25736);
    xsi_vlogvar_wait_assign_value(t4, t8, 0, 0, 32, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 55520);
    memcpy(t3, t2, 8);
    t4 = (t0 + 41032);
    xsi_process_wait(t4, 100LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    t5 = (t0 + 55520);
    t6 = (t0 + 28936);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 25896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 22856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 100LL);
    goto LAB14;

LAB19:    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB21:    t5 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB23:    t7 = (t0 + 22056);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t23 = (t0 + 2360);
    t24 = *((char **)t23);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_divide(t34, 32, t10, 32, t24, 32);
    goto LAB24;

LAB25:    t23 = (t0 + 22056);
    t30 = (t23 + 56U);
    t31 = *((char **)t30);
    t35 = (t0 + 2088);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_divide(t37, 32, t31, 32, t36, 32);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t8, 32, t34, 32, t37, 32);
    goto LAB31;

LAB29:    memcpy(t8, t34, 8);
    goto LAB31;

LAB33:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t8) = 1;
    goto LAB35;

LAB37:
LAB40:    t30 = (t0 + 22056);
    t31 = (t30 + 56U);
    t35 = *((char **)t31);
    t36 = (t0 + 2360);
    t38 = *((char **)t36);
    t36 = (t0 + 25736);
    t39 = (t36 + 56U);
    t40 = *((char **)t39);
    t41 = (t0 + 5624);
    t42 = *((char **)t41);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t40, 32, t42, 32);
    t41 = (t0 + 25896);
    t43 = (t41 + 56U);
    t44 = *((char **)t43);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t32, 32, t44, 32);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_multiply(t34, 32, t38, 32, t33, 32);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t35, 32, t34, 32);
    t45 = (t0 + 22376);
    xsi_vlogvar_assign_value(t45, t37, 0, 0, 32);
    goto LAB39;

LAB44:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB46:
LAB49:    t9 = (t0 + 21096);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng9)));
    memset(t32, 0, 8);
    t30 = (t23 + 4);
    t31 = (t24 + 4);
    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t24);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t31);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t30);
    t54 = *((unsigned int *)t31);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB53;

LAB50:    if (t55 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t32) = 1;

LAB53:    t36 = (t32 + 4);
    t58 = *((unsigned int *)t36);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB54;

LAB55:
LAB70:    t2 = (t0 + 28936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7800);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t5, 32);
    t7 = (t0 + 7800);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t32, 32, t9, 32);
    t7 = (t0 + 7936);
    t10 = *((char **)t7);
    memset(t34, 0, 8);
    xsi_vlog_signed_greatereq(t34, 32, t33, 32, t10, 32);
    t7 = (t34 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t34);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB71;

LAB72:    t2 = (t0 + 28936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7800);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t5, 32);
    t7 = (t0 + 7800);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t32, 32, t9, 32);
    t7 = (t0 + 7936);
    t10 = *((char **)t7);
    t7 = ((char*)((ng0)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t10, 32, t7, 32);
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t33, 32, t34, 32);
    t23 = (t37 + 4);
    t11 = *((unsigned int *)t23);
    t12 = (~(t11));
    t13 = *((unsigned int *)t37);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB75;

LAB76:    t2 = (t0 + 28936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7800);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t5, 32);
    t7 = (t0 + 7800);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t32, 32, t9, 32);
    t7 = (t0 + 7936);
    t10 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t10, 32, t7, 32);
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t33, 32, t34, 32);
    t23 = (t37 + 4);
    t11 = *((unsigned int *)t23);
    t12 = (~(t11));
    t13 = *((unsigned int *)t37);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB85;

LAB86:    t2 = (t0 + 28936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7800);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t5, 32);
    t7 = (t0 + 7800);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t32, 32, t9, 32);
    t7 = (t0 + 7936);
    t10 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t10, 32, t7, 32);
    memset(t37, 0, 8);
    xsi_vlog_signed_less(t37, 32, t33, 32, t34, 32);
    t23 = (t37 + 4);
    t11 = *((unsigned int *)t23);
    t12 = (~(t11));
    t13 = *((unsigned int *)t37);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB95;

LAB96:
LAB97:
LAB87:
LAB77:
LAB73:
LAB56:    goto LAB48;

LAB52:    t35 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB53;

LAB54:
LAB57:    t38 = (t0 + 28936);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t0 + 7800);
    t42 = *((char **)t41);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t40, 32, t42, 32);
    t41 = ((char*)((ng0)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t33, 32, t41, 32);
    t43 = (t0 + 7800);
    t44 = *((char **)t43);
    memset(t37, 0, 8);
    xsi_vlog_signed_divide(t37, 32, t34, 32, t44, 32);
    t43 = (t0 + 7936);
    t45 = *((char **)t43);
    memset(t63, 0, 8);
    xsi_vlog_signed_greatereq(t63, 32, t37, 32, t45, 32);
    t43 = (t63 + 4);
    t64 = *((unsigned int *)t43);
    t65 = (~(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB58;

LAB59:    t2 = (t0 + 28936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7800);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t5, 32);
    t7 = (t0 + 7800);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t32, 32, t9, 32);
    t7 = (t0 + 7936);
    t10 = *((char **)t7);
    t7 = ((char*)((ng0)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t10, 32, t7, 32);
    memset(t37, 0, 8);
    xsi_vlog_signed_equal(t37, 32, t33, 32, t34, 32);
    t23 = (t37 + 4);
    t11 = *((unsigned int *)t23);
    t12 = (~(t11));
    t13 = *((unsigned int *)t37);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB62;

LAB63:    t2 = (t0 + 28936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7800);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t5, 32);
    t7 = (t0 + 7800);
    t9 = *((char **)t7);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t32, 32, t9, 32);
    t7 = (t0 + 7936);
    t10 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t10, 32, t7, 32);
    memset(t37, 0, 8);
    xsi_vlog_signed_leq(t37, 32, t33, 32, t34, 32);
    t23 = (t37 + 4);
    t11 = *((unsigned int *)t23);
    t12 = (~(t11));
    t13 = *((unsigned int *)t37);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB64:
LAB60:    goto LAB56;

LAB58:
LAB61:    t69 = ((char*)((ng4)));
    t70 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t70, t69, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);
    goto LAB60;

LAB62:
LAB65:    t24 = ((char*)((ng4)));
    t30 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t30, t24, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);
    goto LAB64;

LAB66:
LAB69:    t24 = ((char*)((ng4)));
    t30 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t30, t24, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);
    goto LAB68;

LAB71:
LAB74:    t23 = ((char*)((ng4)));
    t24 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);
    goto LAB73;

LAB75:
LAB78:    t24 = (t0 + 41032);
    t30 = (t0 + 9808);
    t31 = xsi_create_subprogram_invocation(t24, 0, t0, t30, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t30, t31);

LAB81:    t35 = (t0 + 41128);
    t36 = *((char **)t35);
    t38 = (t36 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t71 = ((int  (*)(char *, char *))t43)(t0, t36);

LAB83:    if (t71 != 0)
        goto LAB84;

LAB79:    t36 = (t0 + 9808);
    xsi_vlog_subprogram_popinvocation(t36);

LAB80:    t44 = (t0 + 41128);
    t45 = *((char **)t44);
    t44 = (t0 + 9808);
    t69 = (t0 + 41032);
    t70 = 0;
    xsi_delete_subprogram_invocation(t44, t45, t0, t69, t70);
    t2 = (t0 + 22376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t6, 32);
    t5 = (t0 + 22376);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);
    goto LAB77;

LAB82:;
LAB84:    t35 = (t0 + 41224U);
    *((char **)t35) = &&LAB81;
    goto LAB1;

LAB85:
LAB88:    t24 = (t0 + 41032);
    t30 = (t0 + 9808);
    t31 = xsi_create_subprogram_invocation(t24, 0, t0, t30, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t30, t31);

LAB91:    t35 = (t0 + 41128);
    t36 = *((char **)t35);
    t38 = (t36 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t71 = ((int  (*)(char *, char *))t43)(t0, t36);

LAB93:    if (t71 != 0)
        goto LAB94;

LAB89:    t36 = (t0 + 9808);
    xsi_vlog_subprogram_popinvocation(t36);

LAB90:    t44 = (t0 + 41128);
    t45 = *((char **)t44);
    t44 = (t0 + 9808);
    t69 = (t0 + 41032);
    t70 = 0;
    xsi_delete_subprogram_invocation(t44, t45, t0, t69, t70);
    t2 = (t0 + 22376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t6, 32);
    t5 = (t0 + 22376);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 100LL);
    goto LAB87;

LAB92:;
LAB94:    t35 = (t0 + 41224U);
    *((char **)t35) = &&LAB91;
    goto LAB1;

LAB95:
LAB98:    t24 = (t0 + 41032);
    t30 = (t0 + 9808);
    t31 = xsi_create_subprogram_invocation(t24, 0, t0, t30, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t30, t31);

LAB101:    t35 = (t0 + 41128);
    t36 = *((char **)t35);
    t38 = (t36 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t71 = ((int  (*)(char *, char *))t43)(t0, t36);

LAB103:    if (t71 != 0)
        goto LAB104;

LAB99:    t36 = (t0 + 9808);
    xsi_vlog_subprogram_popinvocation(t36);

LAB100:    t44 = (t0 + 41128);
    t45 = *((char **)t44);
    t44 = (t0 + 9808);
    t69 = (t0 + 41032);
    t70 = 0;
    xsi_delete_subprogram_invocation(t44, t45, t0, t69, t70);
    t2 = (t0 + 22376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t6, 32);
    t5 = (t0 + 22376);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 27336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB97;

LAB102:;
LAB104:    t35 = (t0 + 41224U);
    *((char **)t35) = &&LAB101;
    goto LAB1;

}

static void Cont_4898_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 41472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5080);
    t3 = *((char **)t2);
    t2 = (t0 + 45656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7);

LAB1:    return;
}

static void Cont_4899_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 41720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5216);
    t3 = *((char **)t2);
    t2 = (t0 + 45720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7);

LAB1:    return;
}

static void Always_4902_34(char *t0)
{
    char t8[8];
    char t32[8];
    char t42[8];
    char t53[8];
    char t57[8];
    char t58[8];
    char t64[8];
    char t107[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;

LAB0:    t1 = (t0 + 41968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 43992);
    *((int *)t2) = 1;
    t3 = (t0 + 42000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 41776);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    t6 = (t0 + 13656U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB16:    t2 = (t0 + 19896U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB17;

LAB18:    t2 = (t0 + 19896U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t2) == 0)
        goto LAB20;

LAB22:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;

LAB23:    t5 = (t8 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB19:    t2 = (t0 + 13496U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB27;

LAB28:    t2 = (t0 + 5352);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t3, 32, t2, 32);
    t4 = (t8 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:    t2 = (t0 + 5352);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t3, 32, t2, 32);
    t4 = (t8 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:    t2 = (t0 + 5352);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t3, 32, t2, 32);
    t4 = (t8 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB78;

LAB79:    t2 = (t0 + 5352);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t3, 32, t2, 32);
    t4 = (t8 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB125;

LAB126:
LAB127:
LAB80:
LAB52:
LAB32:
LAB29:
LAB14:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 41776);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:
LAB15:    t30 = ((char*)((ng4)));
    t31 = (t0 + 30056);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 8, 0LL);
    t2 = (t0 + 2496);
    t3 = *((char **)t2);
    t2 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 100LL);
    goto LAB14;

LAB17:    t4 = (t0 + 22856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 17176U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 8, t6, 8, t9, 8);
    t7 = ((char*)((ng9)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 8, t8, 8, t7, 8);
    t10 = (t0 + 30056);
    xsi_vlogvar_wait_assign_value(t10, t32, 0, 0, 8, 100LL);
    goto LAB19;

LAB20:    *((unsigned int *)t8) = 1;
    goto LAB23;

LAB24:    t6 = (t0 + 22856);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 17176U);
    t23 = *((char **)t10);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 8, t9, 8, t23, 8);
    t10 = (t0 + 30056);
    xsi_vlogvar_wait_assign_value(t10, t32, 0, 0, 8, 100LL);
    goto LAB26;

LAB27:    t4 = ((char*)((ng4)));
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    goto LAB29;

LAB30:
LAB33:    t5 = (t0 + 21096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t10 = (t7 + 4);
    t23 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t23);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB37;

LAB34:    if (t27 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t32) = 1;

LAB37:    t30 = (t32 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB38;

LAB39:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB40:    goto LAB32;

LAB36:    t24 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB37;

LAB38:
LAB41:    t31 = (t0 + 30056);
    t38 = (t31 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 18936U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB43;

LAB42:    t43 = (t41 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t39) < *((unsigned int *)t41))
        goto LAB45;

LAB44:    *((unsigned int *)t42) = 1;

LAB45:    t45 = (t42 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB47;

LAB48:    t2 = ((char*)((ng4)));
    t3 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB49:    goto LAB40;

LAB43:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB45;

LAB47:    t51 = ((char*)((ng0)));
    t52 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 1, 100LL);
    goto LAB49;

LAB50:
LAB53:    t5 = (t0 + 21096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t10 = (t7 + 4);
    t23 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t23);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB57;

LAB54:    if (t27 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t32) = 1;

LAB57:    t30 = (t32 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB58;

LAB59:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB60:    goto LAB52;

LAB56:    t24 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB57;

LAB58:
LAB61:    t31 = (t0 + 30056);
    t38 = (t31 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 18936U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB63;

LAB62:    t43 = (t41 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t39) < *((unsigned int *)t41))
        goto LAB65;

LAB64:    *((unsigned int *)t42) = 1;

LAB65:    t45 = (t42 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB67;

LAB68:    t2 = (t0 + 30056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19096U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB71;

LAB70:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB72;

LAB73:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB75;

LAB76:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB77:
LAB69:    goto LAB60;

LAB63:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB65;

LAB67:    t51 = ((char*)((ng0)));
    t52 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 1, 100LL);
    goto LAB69;

LAB71:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t8) = 1;
    goto LAB73;

LAB75:    t23 = ((char*)((ng4)));
    t24 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 100LL);
    goto LAB77;

LAB78:
LAB81:    t5 = (t0 + 21096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t10 = (t7 + 4);
    t23 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t23);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB85;

LAB82:    if (t27 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t32) = 1;

LAB85:    t30 = (t32 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB86;

LAB87:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB88:    goto LAB80;

LAB84:    t24 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB85;

LAB86:
LAB89:    t31 = (t0 + 4536);
    t38 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t42, 0, 8);
    xsi_vlog_signed_equal(t42, 32, t38, 32, t31, 32);
    memset(t53, 0, 8);
    t39 = (t42 + 4);
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t39) != 0)
        goto LAB92;

LAB93:    t41 = (t53 + 4);
    t54 = *((unsigned int *)t53);
    t55 = *((unsigned int *)t41);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB94;

LAB95:    memcpy(t64, t53, 8);

LAB96:    t95 = (t64 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB104;

LAB105:
LAB116:    t2 = (t0 + 30056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12376U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB118;

LAB117:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB118;

LAB121:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB120;

LAB119:    *((unsigned int *)t8) = 1;

LAB120:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB122;

LAB123:    t2 = ((char*)((ng4)));
    t3 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB124:
LAB106:    goto LAB88;

LAB90:    *((unsigned int *)t53) = 1;
    goto LAB93;

LAB92:    t40 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB93;

LAB94:    t43 = (t0 + 4400);
    t44 = *((char **)t43);
    t43 = ((char*)((ng4)));
    memset(t57, 0, 8);
    xsi_vlog_signed_equal(t57, 32, t44, 32, t43, 32);
    memset(t58, 0, 8);
    t45 = (t57 + 4);
    t59 = *((unsigned int *)t45);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t45) != 0)
        goto LAB99;

LAB100:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t58);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t52 = (t53 + 4);
    t68 = (t58 + 4);
    t69 = (t64 + 4);
    t70 = *((unsigned int *)t52);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB96;

LAB97:    *((unsigned int *)t58) = 1;
    goto LAB100;

LAB99:    t51 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB100;

LAB101:    t75 = *((unsigned int *)t64);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t64) = (t75 | t76);
    t77 = (t53 + 4);
    t78 = (t58 + 4);
    t79 = *((unsigned int *)t53);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t58);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t93 & t89);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    goto LAB103;

LAB104:
LAB107:    t101 = (t0 + 30056);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t104 = (t0 + 12376U);
    t105 = *((char **)t104);
    t104 = (t0 + 16696U);
    t106 = *((char **)t104);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_minus(t107, 9, t105, 8, t106, 9);
    memset(t108, 0, 8);
    t104 = (t103 + 4);
    if (*((unsigned int *)t104) != 0)
        goto LAB109;

LAB108:    t109 = (t107 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t103) < *((unsigned int *)t107))
        goto LAB111;

LAB110:    *((unsigned int *)t108) = 1;

LAB111:    t111 = (t108 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t108);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB113;

LAB114:    t2 = ((char*)((ng4)));
    t3 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB115:    goto LAB106;

LAB109:    t110 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB111;

LAB113:    t117 = ((char*)((ng0)));
    t118 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t118, t117, 0, 0, 1, 100LL);
    goto LAB115;

LAB118:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB120;

LAB122:    t23 = ((char*)((ng0)));
    t24 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 100LL);
    goto LAB124;

LAB125:
LAB128:    t5 = (t0 + 21096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t10 = (t7 + 4);
    t23 = (t9 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t23);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB132;

LAB129:    if (t27 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t32) = 1;

LAB132:    t30 = (t32 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB133;

LAB134:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB135:    goto LAB127;

LAB131:    t24 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB132;

LAB133:
LAB136:    t31 = (t0 + 4536);
    t38 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t42, 0, 8);
    xsi_vlog_signed_equal(t42, 32, t38, 32, t31, 32);
    memset(t53, 0, 8);
    t39 = (t42 + 4);
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t39) != 0)
        goto LAB139;

LAB140:    t41 = (t53 + 4);
    t54 = *((unsigned int *)t53);
    t55 = *((unsigned int *)t41);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB141;

LAB142:    memcpy(t64, t53, 8);

LAB143:    t95 = (t64 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB151;

LAB152:
LAB171:    t2 = (t0 + 30056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12536U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB173;

LAB172:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB173;

LAB176:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB175;

LAB174:    *((unsigned int *)t8) = 1;

LAB175:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB177;

LAB178:    t2 = (t0 + 30056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12696U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB181;

LAB180:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB181;

LAB184:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB182;

LAB183:    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB185;

LAB186:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB187:
LAB179:
LAB153:    goto LAB135;

LAB137:    *((unsigned int *)t53) = 1;
    goto LAB140;

LAB139:    t40 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB140;

LAB141:    t43 = (t0 + 4400);
    t44 = *((char **)t43);
    t43 = ((char*)((ng4)));
    memset(t57, 0, 8);
    xsi_vlog_signed_equal(t57, 32, t44, 32, t43, 32);
    memset(t58, 0, 8);
    t45 = (t57 + 4);
    t59 = *((unsigned int *)t45);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t45) != 0)
        goto LAB146;

LAB147:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t58);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t52 = (t53 + 4);
    t68 = (t58 + 4);
    t69 = (t64 + 4);
    t70 = *((unsigned int *)t52);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB143;

LAB144:    *((unsigned int *)t58) = 1;
    goto LAB147;

LAB146:    t51 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB147;

LAB148:    t75 = *((unsigned int *)t64);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t64) = (t75 | t76);
    t77 = (t53 + 4);
    t78 = (t58 + 4);
    t79 = *((unsigned int *)t53);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t58);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t93 & t89);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    goto LAB150;

LAB151:
LAB154:    t101 = (t0 + 30056);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t104 = (t0 + 12536U);
    t105 = *((char **)t104);
    t104 = (t0 + 16696U);
    t106 = *((char **)t104);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_minus(t107, 9, t105, 8, t106, 9);
    memset(t108, 0, 8);
    t104 = (t103 + 4);
    if (*((unsigned int *)t104) != 0)
        goto LAB156;

LAB155:    t109 = (t107 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB156;

LAB159:    if (*((unsigned int *)t103) < *((unsigned int *)t107))
        goto LAB158;

LAB157:    *((unsigned int *)t108) = 1;

LAB158:    t111 = (t108 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t108);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB160;

LAB161:    t2 = (t0 + 30056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12696U);
    t6 = *((char **)t5);
    t5 = (t0 + 16696U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 9, t6, 8, t7, 9);
    memset(t32, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB164;

LAB163:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB164;

LAB167:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB165;

LAB166:    t23 = (t32 + 4);
    t11 = *((unsigned int *)t23);
    t12 = (~(t11));
    t13 = *((unsigned int *)t32);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB168;

LAB169:    t2 = (t0 + 27976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB170:
LAB162:    goto LAB153;

LAB156:    t110 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB158;

LAB160:    t117 = ((char*)((ng0)));
    t118 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t118, t117, 0, 0, 1, 100LL);
    goto LAB162;

LAB164:    t10 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB166;

LAB165:    *((unsigned int *)t32) = 1;
    goto LAB166;

LAB168:    t24 = ((char*)((ng4)));
    t30 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t30, t24, 0, 0, 1, 100LL);
    goto LAB170;

LAB173:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB175;

LAB177:    t23 = ((char*)((ng0)));
    t24 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 100LL);
    goto LAB179;

LAB181:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB183;

LAB182:    *((unsigned int *)t8) = 1;
    goto LAB183;

LAB185:    t23 = ((char*)((ng4)));
    t24 = (t0 + 27976);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 100LL);
    goto LAB187;

}

static void Always_4991_35(char *t0)
{
    char t15[8];
    char t16[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 42216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 44008);
    *((int *)t2) = 1;
    t3 = (t0 + 42248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 42024);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    t6 = (t0 + 17336U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:
LAB12:    t2 = (t0 + 17496U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    t2 = (t0 + 17496U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t2) == 0)
        goto LAB16;

LAB18:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB19:    t5 = (t15 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB20;

LAB21:    t2 = (t0 + 30216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30216);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);

LAB22:
LAB15:    t2 = (t0 + 4944);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:    t2 = (t0 + 4944);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB43;

LAB44:    t2 = (t0 + 4944);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB71;

LAB72:    t2 = (t0 + 4944);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB91;

LAB92:
LAB93:
LAB73:
LAB45:
LAB25:
LAB10:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 42024);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:
LAB11:    t13 = ((char*)((ng4)));
    t14 = (t0 + 30216);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 6, 100LL);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    goto LAB10;

LAB13:    t4 = (t0 + 16856U);
    t5 = *((char **)t4);
    t4 = (t0 + 23976);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 6, t5, 6, t7, 6);
    t13 = ((char*)((ng9)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 6, t15, 6, t13, 6);
    t14 = (t0 + 30216);
    xsi_vlogvar_wait_assign_value(t14, t16, 0, 0, 6, 100LL);
    goto LAB15;

LAB16:    *((unsigned int *)t15) = 1;
    goto LAB19;

LAB20:    t6 = (t0 + 16856U);
    t7 = *((char **)t6);
    t6 = (t0 + 23976);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 6, t7, 6, t14, 6);
    t22 = (t0 + 30216);
    xsi_vlogvar_wait_assign_value(t22, t16, 0, 0, 6, 100LL);
    goto LAB22;

LAB23:
LAB26:    t5 = (t0 + 20936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t22 = (t13 + 4);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t22);
    t23 = (t20 ^ t21);
    t24 = (t19 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB30;

LAB27:    if (t27 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t16) = 1;

LAB30:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB31;

LAB32:    t2 = (t0 + 28136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB33:    goto LAB25;

LAB29:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB30;

LAB31:
LAB34:    t37 = (t0 + 30216);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 19256U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB36;

LAB35:    t43 = (t41 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t39) > *((unsigned int *)t41))
        goto LAB38;

LAB37:    *((unsigned int *)t42) = 1;

LAB38:    t45 = (t42 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB40;

LAB41:    t2 = ((char*)((ng4)));
    t3 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB42:    goto LAB33;

LAB36:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB38;

LAB40:    t51 = ((char*)((ng0)));
    t52 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 1, 100LL);
    goto LAB42;

LAB43:
LAB46:    t5 = (t0 + 20936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t22 = (t13 + 4);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t22);
    t23 = (t20 ^ t21);
    t24 = (t19 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB50;

LAB47:    if (t27 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t16) = 1;

LAB50:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB51;

LAB52:    t2 = (t0 + 28136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB53:    goto LAB45;

LAB49:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB50;

LAB51:
LAB54:    t37 = (t0 + 30216);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 19256U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB56;

LAB55:    t43 = (t41 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t39) > *((unsigned int *)t41))
        goto LAB58;

LAB57:    *((unsigned int *)t42) = 1;

LAB58:    t45 = (t42 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB60;

LAB61:    t2 = (t0 + 30216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19416U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB64;

LAB63:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t4) > *((unsigned int *)t6))
        goto LAB65;

LAB66:    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB68;

LAB69:    t2 = (t0 + 28136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB70:
LAB62:    goto LAB53;

LAB56:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB58;

LAB60:    t51 = ((char*)((ng0)));
    t52 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 1, 100LL);
    goto LAB62;

LAB64:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB66;

LAB65:    *((unsigned int *)t15) = 1;
    goto LAB66;

LAB68:    t22 = ((char*)((ng4)));
    t30 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t30, t22, 0, 0, 1, 100LL);
    goto LAB70;

LAB71:
LAB74:    t5 = (t0 + 20936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t22 = (t13 + 4);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t22);
    t23 = (t20 ^ t21);
    t24 = (t19 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB78;

LAB75:    if (t27 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t16) = 1;

LAB78:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB79;

LAB80:    t2 = (t0 + 28136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB81:    goto LAB73;

LAB77:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB78;

LAB79:
LAB82:    t37 = (t0 + 30216);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 19256U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB84;

LAB83:    t43 = (t41 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t39) > *((unsigned int *)t41))
        goto LAB86;

LAB85:    *((unsigned int *)t42) = 1;

LAB86:    t45 = (t42 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB88;

LAB89:    t2 = ((char*)((ng4)));
    t3 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);

LAB90:    goto LAB81;

LAB84:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB86;

LAB88:    t51 = ((char*)((ng0)));
    t52 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 1, 100LL);
    goto LAB90;

LAB91:
LAB94:    t5 = (t0 + 20936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t22 = (t13 + 4);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t22);
    t23 = (t20 ^ t21);
    t24 = (t19 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB98;

LAB95:    if (t27 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t16) = 1;

LAB98:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB99;

LAB100:    t2 = (t0 + 28136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB101:    goto LAB93;

LAB97:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB98;

LAB99:
LAB102:    t37 = (t0 + 30216);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 19256U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB104;

LAB103:    t43 = (t41 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB104;

LAB107:    if (*((unsigned int *)t39) > *((unsigned int *)t41))
        goto LAB106;

LAB105:    *((unsigned int *)t42) = 1;

LAB106:    t45 = (t42 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB108;

LAB109:    t2 = (t0 + 30216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19416U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB112;

LAB111:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB112;

LAB115:    if (*((unsigned int *)t4) > *((unsigned int *)t6))
        goto LAB113;

LAB114:    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB116;

LAB117:    t2 = (t0 + 28136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB118:
LAB110:    goto LAB101;

LAB104:    t44 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB106;

LAB108:    t51 = ((char*)((ng0)));
    t52 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 1, 100LL);
    goto LAB110;

LAB112:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB114;

LAB113:    *((unsigned int *)t15) = 1;
    goto LAB114;

LAB116:    t22 = ((char*)((ng4)));
    t30 = (t0 + 28136);
    xsi_vlogvar_wait_assign_value(t30, t22, 0, 0, 1, 100LL);
    goto LAB118;

}

static void Cont_5057_36(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char t21[8];
    char t22[8];
    char t30[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;

LAB0:    t1 = (t0 + 42464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4536);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t30, t7, 8);

LAB10:    memset(t4, 0, 8);
    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t62) != 0)
        goto LAB20;

LAB21:    t69 = (t4 + 4);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB22;

LAB23:    t76 = *((unsigned int *)t4);
    t77 = (~(t76));
    t78 = *((unsigned int *)t69);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t69) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t81, 8);

LAB30:    t80 = (t0 + 45784);
    t82 = (t80 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t85, 0, 8);
    t86 = 63U;
    t87 = t86;
    t88 = (t3 + 4);
    t89 = *((unsigned int *)t3);
    t86 = (t86 & t89);
    t90 = *((unsigned int *)t88);
    t87 = (t87 & t90);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 | t86);
    t93 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t93 | t87);
    xsi_driver_vfirst_trans(t80, 0, 5);

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 4400);
    t20 = *((char **)t19);
    t19 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t20, 32, t19, 32);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) != 0)
        goto LAB13;

LAB14:    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t7 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t7 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t68 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB21;

LAB22:    t73 = (t0 + 4672);
    t74 = *((char **)t73);
    t73 = ((char*)((ng6)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t74, 32, t73, 32);
    goto LAB23;

LAB24:    t80 = (t0 + 4672);
    t81 = *((char **)t80);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t75, 32, t81, 32);
    goto LAB30;

LAB28:    memcpy(t3, t75, 8);
    goto LAB30;

}

static void Cont_5059_37(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char t21[8];
    char t22[8];
    char t30[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;

LAB0:    t1 = (t0 + 42712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4536);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t30, t7, 8);

LAB10:    memset(t4, 0, 8);
    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t62) != 0)
        goto LAB20;

LAB21:    t69 = (t4 + 4);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB22;

LAB23:    t76 = *((unsigned int *)t4);
    t77 = (~(t76));
    t78 = *((unsigned int *)t69);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t69) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t81, 8);

LAB30:    t80 = (t0 + 45848);
    t82 = (t80 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t85, 0, 8);
    t86 = 63U;
    t87 = t86;
    t88 = (t3 + 4);
    t89 = *((unsigned int *)t3);
    t86 = (t86 & t89);
    t90 = *((unsigned int *)t88);
    t87 = (t87 & t90);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 | t86);
    t93 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t93 | t87);
    xsi_driver_vfirst_trans(t80, 0, 5);

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 4400);
    t20 = *((char **)t19);
    t19 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t20, 32, t19, 32);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) != 0)
        goto LAB13;

LAB14:    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t7 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t7 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t68 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB21;

LAB22:    t73 = (t0 + 4808);
    t74 = *((char **)t73);
    t73 = ((char*)((ng6)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t74, 32, t73, 32);
    goto LAB23;

LAB24:    t80 = (t0 + 4808);
    t81 = *((char **)t80);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t75, 32, t81, 32);
    goto LAB30;

LAB28:    memcpy(t3, t75, 8);
    goto LAB30;

}

static void Always_5064_38(char *t0)
{
    char t15[8];
    char t16[8];
    char t30[8];
    char t31[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 42960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 44024);
    *((int *)t2) = 1;
    t3 = (t0 + 42992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 42768);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    t6 = (t0 + 17336U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 42768);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:
LAB11:    t13 = (t0 + 7120);
    t14 = *((char **)t13);
    t13 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t14, 32, t13, 32);
    memset(t16, 0, 8);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t17) != 0)
        goto LAB14;

LAB15:    t24 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t24);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB16;

LAB17:    memcpy(t39, t16, 8);

LAB18:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB26;

LAB27:
LAB28:    t2 = (t0 + 6032);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    memset(t16, 0, 8);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t4) != 0)
        goto LAB31;

LAB32:    t6 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = *((unsigned int *)t6);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB33;

LAB34:    memcpy(t39, t16, 8);

LAB35:    t38 = (t39 + 4);
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t39);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB10;

LAB12:    *((unsigned int *)t16) = 1;
    goto LAB15;

LAB14:    t23 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB16:    t28 = (t0 + 4128);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_signed_less(t30, 32, t29, 32, t28, 32);
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t32) != 0)
        goto LAB21;

LAB22:    t40 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t16 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t31) = 1;
    goto LAB22;

LAB21:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB23:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t16 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t16);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB25;

LAB26:    t77 = ((char*)((ng4)));
    t78 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 2, 100LL);
    goto LAB28;

LAB29:    *((unsigned int *)t16) = 1;
    goto LAB32;

LAB31:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB32;

LAB33:    t7 = (t0 + 4128);
    t13 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_signed_less(t30, 32, t13, 32, t7, 32);
    memset(t31, 0, 8);
    t14 = (t30 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t22);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t14) != 0)
        goto LAB38;

LAB39:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t31);
    t35 = (t33 & t34);
    *((unsigned int *)t39) = t35;
    t23 = (t16 + 4);
    t24 = (t31 + 4);
    t28 = (t39 + 4);
    t36 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t24);
    t40 = (t36 | t37);
    *((unsigned int *)t28) = t40;
    t41 = *((unsigned int *)t28);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB38:    t17 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB40:    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t28);
    *((unsigned int *)t39) = (t46 | t47);
    t29 = (t16 + 4);
    t32 = (t31 + 4);
    t48 = *((unsigned int *)t16);
    t49 = (~(t48));
    t50 = *((unsigned int *)t29);
    t51 = (~(t50));
    t52 = *((unsigned int *)t31);
    t55 = (~(t52));
    t56 = *((unsigned int *)t32);
    t57 = (~(t56));
    t63 = (t49 & t51);
    t64 = (t55 & t57);
    t58 = (~(t63));
    t59 = (~(t64));
    t60 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t60 & t58);
    t61 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t58);
    t65 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t65 & t59);
    goto LAB42;

LAB43:
LAB46:    t43 = (t0 + 28776);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t53 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t53, t45, 0, 0, 64, 100LL);
    t2 = (t0 + 28776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27176);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 100LL);
    goto LAB45;

}

static void Always_5079_39(char *t0)
{
    char t15[8];
    char t16[8];
    char t20[8];
    char t21[8];
    char t28[8];
    char t73[8];
    char t74[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 43208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 44040);
    *((int *)t2) = 1;
    t3 = (t0 + 43240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1464);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 43016);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    t6 = (t0 + 17336U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:
LAB33:    t2 = (t0 + 23976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    t2 = (t0 + 7664);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t20, 0, 8);
    xsi_vlog_signed_greater(t20, 32, t3, 32, t2, 32);
    memset(t16, 0, 8);
    t4 = (t20 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) != 0)
        goto LAB36;

LAB37:    t6 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB38;

LAB39:    t22 = *((unsigned int *)t16);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t6) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t16) > 0)
        goto LAB44;

LAB45:    memcpy(t15, t28, 8);

LAB46:    t42 = (t0 + 29096);
    xsi_vlogvar_assign_value(t42, t15, 0, 0, 32);
    t2 = (t0 + 22696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25576);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t2 = (t0 + 25416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    t13 = (t4 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB48;

LAB47:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB49;

LAB50:    t32 = (t15 + 4);
    t8 = *((unsigned int *)t32);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB52;

LAB53:
LAB56:    t2 = (t0 + 22216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = *((char **)t5);
    t5 = (t0 + 25416);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    t14 = (t0 + 25576);
    t27 = (t14 + 56U);
    t32 = *((char **)t27);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t13, 32, t32, 32);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 32, t6, 32, t15, 32);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t4, 32, t16, 32);
    t33 = (t0 + 22536);
    xsi_vlogvar_assign_value(t33, t20, 0, 0, 32);

LAB54:    t2 = (t0 + 4400);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    memset(t16, 0, 8);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t4) != 0)
        goto LAB59;

LAB60:    t6 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = *((unsigned int *)t6);
    t22 = (t18 || t19);
    if (t22 > 0)
        goto LAB61;

LAB62:    memcpy(t28, t16, 8);

LAB63:    t60 = (t28 + 4);
    t57 = *((unsigned int *)t60);
    t58 = (~(t57));
    t59 = *((unsigned int *)t28);
    t61 = (t59 & t58);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB71;

LAB72:    t2 = (t0 + 4536);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    memset(t16, 0, 8);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t4) != 0)
        goto LAB183;

LAB184:    t6 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB185;

LAB186:    memcpy(t28, t16, 8);

LAB187:    t60 = (t28 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB195;

LAB196:
LAB197:
LAB73:    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 22216);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 100LL);
    t2 = (t0 + 22696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25416);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 100LL);

LAB10:    t2 = (t0 + 1464);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 43016);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:
LAB11:    t13 = ((char*)((ng4)));
    t14 = (t0 + 22216);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 55776);
    memcpy(t3, t2, 8);
    t4 = (t0 + 43016);
    xsi_process_wait(t4, 100LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t5 = (t0 + 55776);
    t6 = (t0 + 22536);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    t2 = (t0 + 5624);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t3, 32, t2, 32);
    t4 = (t0 + 23816);
    xsi_vlogvar_wait_assign_value(t4, t15, 0, 0, 32, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 23976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 24136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 100LL);
    t2 = (t0 + 6848);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t3, 32, t2, 32);
    t4 = (t0 + 25416);
    xsi_vlogvar_wait_assign_value(t4, t15, 0, 0, 32, 100LL);
    t2 = (t0 + 4128);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    memset(t16, 0, 8);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t4) != 0)
        goto LAB15;

LAB16:    t6 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB17;

LAB18:    memcpy(t28, t16, 8);

LAB19:    t60 = (t28 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t28);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB27;

LAB28:
LAB29:    t2 = (t0 + 7120);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t3, 32, t2, 32);
    t4 = (t15 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB30;

LAB31:
LAB32:    t2 = ((char*)((ng3)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 100LL);
    goto LAB10;

LAB13:    *((unsigned int *)t16) = 1;
    goto LAB16;

LAB15:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB16;

LAB17:    t7 = (t0 + 6032);
    t13 = *((char **)t7);
    t7 = ((char*)((ng0)));
    memset(t20, 0, 8);
    xsi_vlog_signed_equal(t20, 32, t13, 32, t7, 32);
    memset(t21, 0, 8);
    t14 = (t20 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t14) != 0)
        goto LAB22;

LAB23:    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t21);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t16 + 4);
    t33 = (t21 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB20:    *((unsigned int *)t21) = 1;
    goto LAB23;

LAB22:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB23;

LAB24:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t16 + 4);
    t43 = (t21 + 4);
    t44 = *((unsigned int *)t16);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t21);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB26;

LAB27:    t66 = (t0 + 28776);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t0 + 27016);
    xsi_vlogvar_wait_assign_value(t69, t68, 0, 0, 64, 100LL);
    goto LAB29;

LAB30:    t5 = ((char*)((ng4)));
    t6 = (t0 + 26696);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 100LL);
    goto LAB32;

LAB34:    *((unsigned int *)t16) = 1;
    goto LAB37;

LAB36:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB37;

LAB38:    t7 = (t0 + 22216);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t27 = (t0 + 2088);
    t32 = *((char **)t27);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_divide(t21, 32, t14, 32, t32, 32);
    goto LAB39;

LAB40:    t27 = (t0 + 22216);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    t42 = (t0 + 2360);
    t43 = *((char **)t42);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_divide(t28, 32, t34, 32, t43, 32);
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t15, 32, t21, 32, t28, 32);
    goto LAB46;

LAB44:    memcpy(t15, t21, 8);
    goto LAB46;

LAB48:    t27 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t15) = 1;
    goto LAB50;

LAB52:
LAB55:    t33 = (t0 + 22216);
    t34 = (t33 + 56U);
    t42 = *((char **)t34);
    t43 = (t0 + 2088);
    t60 = *((char **)t43);
    t43 = (t0 + 25416);
    t66 = (t43 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 6848);
    t69 = *((char **)t68);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t67, 32, t69, 32);
    t68 = (t0 + 25576);
    t70 = (t68 + 56U);
    t71 = *((char **)t70);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t16, 32, t71, 32);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_multiply(t21, 32, t60, 32, t20, 32);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t42, 32, t21, 32);
    t72 = (t0 + 22536);
    xsi_vlogvar_assign_value(t72, t28, 0, 0, 32);
    goto LAB54;

LAB57:    *((unsigned int *)t16) = 1;
    goto LAB60;

LAB59:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB60;

LAB61:    t7 = (t0 + 4400);
    t13 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_equal(t20, 32, t13, 32, t7, 32);
    memset(t21, 0, 8);
    t14 = (t20 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t20);
    t26 = (t25 & t24);
    t29 = (t26 & 1U);
    if (t29 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t14) != 0)
        goto LAB66;

LAB67:    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t21);
    t35 = (t30 | t31);
    *((unsigned int *)t28) = t35;
    t32 = (t16 + 4);
    t33 = (t21 + 4);
    t34 = (t28 + 4);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t33);
    t38 = (t36 | t37);
    *((unsigned int *)t34) = t38;
    t39 = *((unsigned int *)t34);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB63;

LAB64:    *((unsigned int *)t21) = 1;
    goto LAB67;

LAB66:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB67;

LAB68:    t41 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t41 | t44);
    t42 = (t16 + 4);
    t43 = (t21 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t52 = (t47 & t46);
    t48 = *((unsigned int *)t43);
    t49 = (~(t48));
    t50 = *((unsigned int *)t21);
    t53 = (t50 & t49);
    t51 = (~(t52));
    t54 = (~(t53));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t51);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    goto LAB70;

LAB71:
LAB74:    t66 = ((char*)((ng3)));
    t67 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t67, t66, 0, 0, 1, 100LL);
    t2 = (t0 + 17496U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t19 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB78;

LAB75:    if (t23 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t15) = 1;

LAB78:    t7 = (t15 + 4);
    t26 = *((unsigned int *)t7);
    t29 = (~(t26));
    t30 = *((unsigned int *)t15);
    t31 = (t30 & t29);
    t35 = (t31 != 0);
    if (t35 > 0)
        goto LAB79;

LAB80:
LAB180:    t2 = ((char*)((ng3)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);

LAB81:    goto LAB73;

LAB77:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB78;

LAB79:
LAB82:    t13 = (t0 + 20936);
    t14 = (t13 + 56U);
    t27 = *((char **)t14);
    t32 = ((char*)((ng9)));
    memset(t16, 0, 8);
    t33 = (t27 + 4);
    t34 = (t32 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t44 = (t38 | t41);
    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t34);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB86;

LAB83:    if (t47 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t16) = 1;

LAB86:    t43 = (t16 + 4);
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t54 = *((unsigned int *)t16);
    t55 = (t54 & t51);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB87;

LAB88:
LAB121:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 8072);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    xsi_vlog_signed_greatereq(t16, 32, t15, 32, t7, 32);
    t5 = (t16 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB122;

LAB123:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_greater(t16, 32, t15, 32, t5, 32);
    memset(t20, 0, 8);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t7) != 0)
        goto LAB134;

LAB135:    t14 = (t20 + 4);
    t17 = *((unsigned int *)t20);
    t18 = *((unsigned int *)t14);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB136;

LAB137:    memcpy(t74, t20, 8);

LAB138:    t71 = (t74 + 4);
    t61 = *((unsigned int *)t71);
    t62 = (~(t61));
    t63 = *((unsigned int *)t74);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB146;

LAB147:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB156;

LAB157:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB166;

LAB167:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_signed_leq(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB176;

LAB177:
LAB178:
LAB168:
LAB158:
LAB148:
LAB124:
LAB89:    goto LAB81;

LAB85:    t42 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB86;

LAB87:
LAB90:    t60 = (t0 + 29096);
    t66 = (t60 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 7664);
    t69 = *((char **)t68);
    memset(t20, 0, 8);
    xsi_vlog_signed_divide(t20, 32, t67, 32, t69, 32);
    t68 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t20, 32, t68, 32);
    t70 = (t21 + 4);
    t57 = *((unsigned int *)t70);
    t58 = (~(t57));
    t59 = *((unsigned int *)t21);
    t61 = (t59 & t58);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB91;

LAB92:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB95;

LAB96:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB99;

LAB100:
LAB101:
LAB97:
LAB93:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_greater(t16, 32, t15, 32, t5, 32);
    memset(t20, 0, 8);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t7) != 0)
        goto LAB105;

LAB106:    t14 = (t20 + 4);
    t17 = *((unsigned int *)t20);
    t18 = *((unsigned int *)t14);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB107;

LAB108:    memcpy(t74, t20, 8);

LAB109:    t71 = (t74 + 4);
    t61 = *((unsigned int *)t71);
    t62 = (~(t61));
    t63 = *((unsigned int *)t74);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB117;

LAB118:
LAB119:    goto LAB89;

LAB91:
LAB94:    t71 = ((char*)((ng3)));
    t72 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t72, t71, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB93;

LAB95:
LAB98:    t13 = ((char*)((ng3)));
    t14 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB97;

LAB99:
LAB102:    t13 = ((char*)((ng3)));
    t14 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB101;

LAB103:    *((unsigned int *)t20) = 1;
    goto LAB106;

LAB105:    t13 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB106;

LAB107:    t27 = (t0 + 29096);
    t32 = (t27 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 7664);
    t42 = *((char **)t34);
    memset(t21, 0, 8);
    xsi_vlog_signed_divide(t21, 32, t33, 32, t42, 32);
    t34 = (t0 + 8072);
    t43 = *((char **)t34);
    memset(t28, 0, 8);
    xsi_vlog_signed_less(t28, 32, t21, 32, t43, 32);
    memset(t73, 0, 8);
    t34 = (t28 + 4);
    t22 = *((unsigned int *)t34);
    t23 = (~(t22));
    t24 = *((unsigned int *)t28);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t34) != 0)
        goto LAB112;

LAB113:    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t73);
    t31 = (t29 & t30);
    *((unsigned int *)t74) = t31;
    t66 = (t20 + 4);
    t67 = (t73 + 4);
    t68 = (t74 + 4);
    t35 = *((unsigned int *)t66);
    t36 = *((unsigned int *)t67);
    t37 = (t35 | t36);
    *((unsigned int *)t68) = t37;
    t38 = *((unsigned int *)t68);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB109;

LAB110:    *((unsigned int *)t73) = 1;
    goto LAB113;

LAB112:    t60 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB113;

LAB114:    t40 = *((unsigned int *)t74);
    t41 = *((unsigned int *)t68);
    *((unsigned int *)t74) = (t40 | t41);
    t69 = (t20 + 4);
    t70 = (t73 + 4);
    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    t46 = *((unsigned int *)t69);
    t47 = (~(t46));
    t48 = *((unsigned int *)t73);
    t49 = (~(t48));
    t50 = *((unsigned int *)t70);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t56 & t54);
    t57 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t57 & t55);
    t58 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t58 & t54);
    t59 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t59 & t55);
    goto LAB116;

LAB117:
LAB120:    t72 = ((char*)((ng3)));
    t75 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t75, t72, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB119;

LAB122:
LAB125:    t13 = (t0 + 43016);
    t14 = (t0 + 10240);
    t27 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t27);

LAB128:    t32 = (t0 + 43112);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t42 = *((char **)t34);
    t43 = (t42 + 272U);
    t60 = *((char **)t43);
    t66 = (t60 + 0U);
    t67 = *((char **)t66);
    t52 = ((int  (*)(char *, char *))t67)(t0, t33);

LAB130:    if (t52 != 0)
        goto LAB131;

LAB126:    t33 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t33);

LAB127:    t68 = (t0 + 43112);
    t69 = *((char **)t68);
    t68 = (t0 + 10240);
    t70 = (t0 + 43016);
    t71 = 0;
    xsi_delete_subprogram_invocation(t68, t69, t0, t70, t71);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB124;

LAB129:;
LAB131:    t32 = (t0 + 43208U);
    *((char **)t32) = &&LAB128;
    goto LAB1;

LAB132:    *((unsigned int *)t20) = 1;
    goto LAB135;

LAB134:    t13 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB135;

LAB136:    t27 = (t0 + 29096);
    t32 = (t27 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 7664);
    t42 = *((char **)t34);
    memset(t21, 0, 8);
    xsi_vlog_signed_divide(t21, 32, t33, 32, t42, 32);
    t34 = (t0 + 8072);
    t43 = *((char **)t34);
    memset(t28, 0, 8);
    xsi_vlog_signed_leq(t28, 32, t21, 32, t43, 32);
    memset(t73, 0, 8);
    t34 = (t28 + 4);
    t22 = *((unsigned int *)t34);
    t23 = (~(t22));
    t24 = *((unsigned int *)t28);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t34) != 0)
        goto LAB141;

LAB142:    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t73);
    t31 = (t29 & t30);
    *((unsigned int *)t74) = t31;
    t66 = (t20 + 4);
    t67 = (t73 + 4);
    t68 = (t74 + 4);
    t35 = *((unsigned int *)t66);
    t36 = *((unsigned int *)t67);
    t37 = (t35 | t36);
    *((unsigned int *)t68) = t37;
    t38 = *((unsigned int *)t68);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB143;

LAB144:
LAB145:    goto LAB138;

LAB139:    *((unsigned int *)t73) = 1;
    goto LAB142;

LAB141:    t60 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB142;

LAB143:    t40 = *((unsigned int *)t74);
    t41 = *((unsigned int *)t68);
    *((unsigned int *)t74) = (t40 | t41);
    t69 = (t20 + 4);
    t70 = (t73 + 4);
    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    t46 = *((unsigned int *)t69);
    t47 = (~(t46));
    t48 = *((unsigned int *)t73);
    t49 = (~(t48));
    t50 = *((unsigned int *)t70);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t56 & t54);
    t57 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t57 & t55);
    t58 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t58 & t54);
    t59 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t59 & t55);
    goto LAB145;

LAB146:
LAB149:    t72 = (t0 + 43016);
    t75 = (t0 + 10240);
    t76 = xsi_create_subprogram_invocation(t72, 0, t0, t75, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t75, t76);

LAB152:    t77 = (t0 + 43112);
    t78 = *((char **)t77);
    t79 = (t78 + 80U);
    t80 = *((char **)t79);
    t81 = (t80 + 272U);
    t82 = *((char **)t81);
    t83 = (t82 + 0U);
    t84 = *((char **)t83);
    t85 = ((int  (*)(char *, char *))t84)(t0, t78);

LAB154:    if (t85 != 0)
        goto LAB155;

LAB150:    t78 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t78);

LAB151:    t86 = (t0 + 43112);
    t87 = *((char **)t86);
    t86 = (t0 + 10240);
    t88 = (t0 + 43016);
    t89 = 0;
    xsi_delete_subprogram_invocation(t86, t87, t0, t88, t89);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB148;

LAB153:;
LAB155:    t77 = (t0 + 43208U);
    *((char **)t77) = &&LAB152;
    goto LAB1;

LAB156:
LAB159:    t13 = (t0 + 43016);
    t14 = (t0 + 10240);
    t27 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t27);

LAB162:    t32 = (t0 + 43112);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t42 = *((char **)t34);
    t43 = (t42 + 272U);
    t60 = *((char **)t43);
    t66 = (t60 + 0U);
    t67 = *((char **)t66);
    t52 = ((int  (*)(char *, char *))t67)(t0, t33);

LAB164:    if (t52 != 0)
        goto LAB165;

LAB160:    t33 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t33);

LAB161:    t68 = (t0 + 43112);
    t69 = *((char **)t68);
    t68 = (t0 + 10240);
    t70 = (t0 + 43016);
    t71 = 0;
    xsi_delete_subprogram_invocation(t68, t69, t0, t70, t71);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB158;

LAB163:;
LAB165:    t32 = (t0 + 43208U);
    *((char **)t32) = &&LAB162;
    goto LAB1;

LAB166:
LAB169:    t13 = (t0 + 43016);
    t14 = (t0 + 10240);
    t27 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t27);

LAB172:    t32 = (t0 + 43112);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t42 = *((char **)t34);
    t43 = (t42 + 272U);
    t60 = *((char **)t43);
    t66 = (t60 + 0U);
    t67 = *((char **)t66);
    t52 = ((int  (*)(char *, char *))t67)(t0, t33);

LAB174:    if (t52 != 0)
        goto LAB175;

LAB170:    t33 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t33);

LAB171:    t68 = (t0 + 43112);
    t69 = *((char **)t68);
    t68 = (t0 + 10240);
    t70 = (t0 + 43016);
    t71 = 0;
    xsi_delete_subprogram_invocation(t68, t69, t0, t70, t71);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB168;

LAB173:;
LAB175:    t32 = (t0 + 43208U);
    *((char **)t32) = &&LAB172;
    goto LAB1;

LAB176:
LAB179:    t13 = ((char*)((ng3)));
    t14 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB178;

LAB181:    *((unsigned int *)t16) = 1;
    goto LAB184;

LAB183:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB184;

LAB185:    t7 = (t0 + 4400);
    t13 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_signed_equal(t20, 32, t13, 32, t7, 32);
    memset(t21, 0, 8);
    t14 = (t20 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t14) != 0)
        goto LAB190;

LAB191:    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t21);
    t31 = (t29 & t30);
    *((unsigned int *)t28) = t31;
    t32 = (t16 + 4);
    t33 = (t21 + 4);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB192;

LAB193:
LAB194:    goto LAB187;

LAB188:    *((unsigned int *)t21) = 1;
    goto LAB191;

LAB190:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB191;

LAB192:    t40 = *((unsigned int *)t28);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t28) = (t40 | t41);
    t42 = (t16 + 4);
    t43 = (t21 + 4);
    t44 = *((unsigned int *)t16);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t21);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t55);
    t58 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t58 & t54);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    goto LAB194;

LAB195:
LAB198:    t66 = ((char*)((ng3)));
    t67 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t67, t66, 0, 0, 1, 100LL);
    t2 = (t0 + 17496U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t19 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB202;

LAB199:    if (t23 != 0)
        goto LAB201;

LAB200:    *((unsigned int *)t15) = 1;

LAB202:    t7 = (t15 + 4);
    t26 = *((unsigned int *)t7);
    t29 = (~(t26));
    t30 = *((unsigned int *)t15);
    t31 = (t30 & t29);
    t35 = (t31 != 0);
    if (t35 > 0)
        goto LAB203;

LAB204:
LAB304:    t2 = ((char*)((ng3)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);

LAB205:    goto LAB197;

LAB201:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB202;

LAB203:
LAB206:    t13 = (t0 + 20936);
    t14 = (t13 + 56U);
    t27 = *((char **)t14);
    t32 = ((char*)((ng9)));
    memset(t16, 0, 8);
    t33 = (t27 + 4);
    t34 = (t32 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t44 = (t38 | t41);
    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t34);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB210;

LAB207:    if (t47 != 0)
        goto LAB209;

LAB208:    *((unsigned int *)t16) = 1;

LAB210:    t43 = (t16 + 4);
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t54 = *((unsigned int *)t16);
    t55 = (t54 & t51);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB211;

LAB212:
LAB245:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 8072);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    xsi_vlog_signed_greatereq(t16, 32, t15, 32, t7, 32);
    t5 = (t16 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB246;

LAB247:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_greater(t16, 32, t15, 32, t5, 32);
    memset(t20, 0, 8);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB256;

LAB257:    if (*((unsigned int *)t7) != 0)
        goto LAB258;

LAB259:    t14 = (t20 + 4);
    t17 = *((unsigned int *)t20);
    t18 = *((unsigned int *)t14);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB260;

LAB261:    memcpy(t74, t20, 8);

LAB262:    t71 = (t74 + 4);
    t61 = *((unsigned int *)t71);
    t62 = (~(t61));
    t63 = *((unsigned int *)t74);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB270;

LAB271:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB280;

LAB281:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB290;

LAB291:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_signed_leq(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB300;

LAB301:
LAB302:
LAB292:
LAB282:
LAB272:
LAB248:
LAB213:    goto LAB205;

LAB209:    t42 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB210;

LAB211:
LAB214:    t60 = (t0 + 29096);
    t66 = (t60 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 7664);
    t69 = *((char **)t68);
    memset(t20, 0, 8);
    xsi_vlog_signed_divide(t20, 32, t67, 32, t69, 32);
    t68 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t20, 32, t68, 32);
    t70 = (t21 + 4);
    t57 = *((unsigned int *)t70);
    t58 = (~(t57));
    t59 = *((unsigned int *)t21);
    t61 = (t59 & t58);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB215;

LAB216:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng0)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB219;

LAB220:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_equal(t16, 32, t15, 32, t5, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB223;

LAB224:    t2 = (t0 + 29096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t4, 32, t6, 32);
    t5 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_greater(t16, 32, t15, 32, t5, 32);
    memset(t20, 0, 8);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t7) != 0)
        goto LAB229;

LAB230:    t14 = (t20 + 4);
    t17 = *((unsigned int *)t20);
    t18 = *((unsigned int *)t14);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB231;

LAB232:    memcpy(t74, t20, 8);

LAB233:    t71 = (t74 + 4);
    t61 = *((unsigned int *)t71);
    t62 = (~(t61));
    t63 = *((unsigned int *)t74);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB241;

LAB242:
LAB243:
LAB225:
LAB221:
LAB217:    goto LAB213;

LAB215:
LAB218:    t71 = ((char*)((ng3)));
    t72 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t72, t71, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB217;

LAB219:
LAB222:    t13 = ((char*)((ng3)));
    t14 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB221;

LAB223:
LAB226:    t13 = ((char*)((ng3)));
    t14 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB225;

LAB227:    *((unsigned int *)t20) = 1;
    goto LAB230;

LAB229:    t13 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB230;

LAB231:    t27 = (t0 + 29096);
    t32 = (t27 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 7664);
    t42 = *((char **)t34);
    memset(t21, 0, 8);
    xsi_vlog_signed_divide(t21, 32, t33, 32, t42, 32);
    t34 = (t0 + 8072);
    t43 = *((char **)t34);
    memset(t28, 0, 8);
    xsi_vlog_signed_less(t28, 32, t21, 32, t43, 32);
    memset(t73, 0, 8);
    t34 = (t28 + 4);
    t22 = *((unsigned int *)t34);
    t23 = (~(t22));
    t24 = *((unsigned int *)t28);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB234;

LAB235:    if (*((unsigned int *)t34) != 0)
        goto LAB236;

LAB237:    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t73);
    t31 = (t29 & t30);
    *((unsigned int *)t74) = t31;
    t66 = (t20 + 4);
    t67 = (t73 + 4);
    t68 = (t74 + 4);
    t35 = *((unsigned int *)t66);
    t36 = *((unsigned int *)t67);
    t37 = (t35 | t36);
    *((unsigned int *)t68) = t37;
    t38 = *((unsigned int *)t68);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB238;

LAB239:
LAB240:    goto LAB233;

LAB234:    *((unsigned int *)t73) = 1;
    goto LAB237;

LAB236:    t60 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB237;

LAB238:    t40 = *((unsigned int *)t74);
    t41 = *((unsigned int *)t68);
    *((unsigned int *)t74) = (t40 | t41);
    t69 = (t20 + 4);
    t70 = (t73 + 4);
    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    t46 = *((unsigned int *)t69);
    t47 = (~(t46));
    t48 = *((unsigned int *)t73);
    t49 = (~(t48));
    t50 = *((unsigned int *)t70);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t56 & t54);
    t57 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t57 & t55);
    t58 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t58 & t54);
    t59 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t59 & t55);
    goto LAB240;

LAB241:
LAB244:    t72 = ((char*)((ng3)));
    t75 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t75, t72, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB243;

LAB246:
LAB249:    t13 = (t0 + 43016);
    t14 = (t0 + 10240);
    t27 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t27);

LAB252:    t32 = (t0 + 43112);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t42 = *((char **)t34);
    t43 = (t42 + 272U);
    t60 = *((char **)t43);
    t66 = (t60 + 0U);
    t67 = *((char **)t66);
    t52 = ((int  (*)(char *, char *))t67)(t0, t33);

LAB254:    if (t52 != 0)
        goto LAB255;

LAB250:    t33 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t33);

LAB251:    t68 = (t0 + 43112);
    t69 = *((char **)t68);
    t68 = (t0 + 10240);
    t70 = (t0 + 43016);
    t71 = 0;
    xsi_delete_subprogram_invocation(t68, t69, t0, t70, t71);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB248;

LAB253:;
LAB255:    t32 = (t0 + 43208U);
    *((char **)t32) = &&LAB252;
    goto LAB1;

LAB256:    *((unsigned int *)t20) = 1;
    goto LAB259;

LAB258:    t13 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB259;

LAB260:    t27 = (t0 + 29096);
    t32 = (t27 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 7664);
    t42 = *((char **)t34);
    memset(t21, 0, 8);
    xsi_vlog_signed_divide(t21, 32, t33, 32, t42, 32);
    t34 = (t0 + 8072);
    t43 = *((char **)t34);
    memset(t28, 0, 8);
    xsi_vlog_signed_leq(t28, 32, t21, 32, t43, 32);
    memset(t73, 0, 8);
    t34 = (t28 + 4);
    t22 = *((unsigned int *)t34);
    t23 = (~(t22));
    t24 = *((unsigned int *)t28);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB263;

LAB264:    if (*((unsigned int *)t34) != 0)
        goto LAB265;

LAB266:    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t73);
    t31 = (t29 & t30);
    *((unsigned int *)t74) = t31;
    t66 = (t20 + 4);
    t67 = (t73 + 4);
    t68 = (t74 + 4);
    t35 = *((unsigned int *)t66);
    t36 = *((unsigned int *)t67);
    t37 = (t35 | t36);
    *((unsigned int *)t68) = t37;
    t38 = *((unsigned int *)t68);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB267;

LAB268:
LAB269:    goto LAB262;

LAB263:    *((unsigned int *)t73) = 1;
    goto LAB266;

LAB265:    t60 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB266;

LAB267:    t40 = *((unsigned int *)t74);
    t41 = *((unsigned int *)t68);
    *((unsigned int *)t74) = (t40 | t41);
    t69 = (t20 + 4);
    t70 = (t73 + 4);
    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    t46 = *((unsigned int *)t69);
    t47 = (~(t46));
    t48 = *((unsigned int *)t73);
    t49 = (~(t48));
    t50 = *((unsigned int *)t70);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t56 & t54);
    t57 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t57 & t55);
    t58 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t58 & t54);
    t59 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t59 & t55);
    goto LAB269;

LAB270:
LAB273:    t72 = (t0 + 43016);
    t75 = (t0 + 10240);
    t76 = xsi_create_subprogram_invocation(t72, 0, t0, t75, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t75, t76);

LAB276:    t77 = (t0 + 43112);
    t78 = *((char **)t77);
    t79 = (t78 + 80U);
    t80 = *((char **)t79);
    t81 = (t80 + 272U);
    t82 = *((char **)t81);
    t83 = (t82 + 0U);
    t84 = *((char **)t83);
    t85 = ((int  (*)(char *, char *))t84)(t0, t78);

LAB278:    if (t85 != 0)
        goto LAB279;

LAB274:    t78 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t78);

LAB275:    t86 = (t0 + 43112);
    t87 = *((char **)t86);
    t86 = (t0 + 10240);
    t88 = (t0 + 43016);
    t89 = 0;
    xsi_delete_subprogram_invocation(t86, t87, t0, t88, t89);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB272;

LAB277:;
LAB279:    t77 = (t0 + 43208U);
    *((char **)t77) = &&LAB276;
    goto LAB1;

LAB280:
LAB283:    t13 = (t0 + 43016);
    t14 = (t0 + 10240);
    t27 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t27);

LAB286:    t32 = (t0 + 43112);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t42 = *((char **)t34);
    t43 = (t42 + 272U);
    t60 = *((char **)t43);
    t66 = (t60 + 0U);
    t67 = *((char **)t66);
    t52 = ((int  (*)(char *, char *))t67)(t0, t33);

LAB288:    if (t52 != 0)
        goto LAB289;

LAB284:    t33 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t33);

LAB285:    t68 = (t0 + 43112);
    t69 = *((char **)t68);
    t68 = (t0 + 10240);
    t70 = (t0 + 43016);
    t71 = 0;
    xsi_delete_subprogram_invocation(t68, t69, t0, t70, t71);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB282;

LAB287:;
LAB289:    t32 = (t0 + 43208U);
    *((char **)t32) = &&LAB286;
    goto LAB1;

LAB290:
LAB293:    t13 = (t0 + 43016);
    t14 = (t0 + 10240);
    t27 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t27);

LAB296:    t32 = (t0 + 43112);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t42 = *((char **)t34);
    t43 = (t42 + 272U);
    t60 = *((char **)t43);
    t66 = (t60 + 0U);
    t67 = *((char **)t66);
    t52 = ((int  (*)(char *, char *))t67)(t0, t33);

LAB298:    if (t52 != 0)
        goto LAB299;

LAB294:    t33 = (t0 + 10240);
    xsi_vlog_subprogram_popinvocation(t33);

LAB295:    t68 = (t0 + 43112);
    t69 = *((char **)t68);
    t68 = (t0 + 10240);
    t70 = (t0 + 43016);
    t71 = 0;
    xsi_delete_subprogram_invocation(t68, t69, t0, t70, t71);
    t2 = (t0 + 22536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t6, 32);
    t5 = (t0 + 22536);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 32);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB292;

LAB297:;
LAB299:    t32 = (t0 + 43208U);
    *((char **)t32) = &&LAB296;
    goto LAB1;

LAB300:
LAB303:    t13 = ((char*)((ng3)));
    t14 = (t0 + 27496);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 100LL);
    t2 = (t0 + 26216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 100LL);
    goto LAB302;

}


extern void xilinxcorelib_ver_m_00000000003098655076_3779698860_init()
{
	static char *pe[] = {(void *)NetDecl_3856_0,(void *)NetDecl_3906_1,(void *)NetDecl_3919_2,(void *)Cont_3942_3,(void *)Cont_3948_4,(void *)Cont_3949_5,(void *)Cont_3950_6,(void *)Always_3953_7,(void *)Cont_3979_8,(void *)Cont_3980_9,(void *)Cont_3988_10,(void *)Cont_3989_11,(void *)Cont_3990_12,(void *)Always_3993_13,(void *)NetDecl_4082_14,(void *)NetDecl_4088_15,(void *)Always_4098_16,(void *)Always_4133_17,(void *)Initial_4410_18,(void *)Cont_4460_19,(void *)Cont_4463_20,(void *)Cont_4468_21,(void *)Cont_4472_22,(void *)Cont_4486_23,(void *)Cont_4487_24,(void *)Cont_4613_25,(void *)Cont_4631_26,(void *)Always_4661_27,(void *)Cont_4726_28,(void *)Cont_4727_29,(void *)Always_4728_30,(void *)Always_4737_31,(void *)Cont_4898_32,(void *)Cont_4899_33,(void *)Always_4902_34,(void *)Always_4991_35,(void *)Cont_5057_36,(void *)Cont_5059_37,(void *)Always_5064_38,(void *)Always_5079_39};
	static char *se[] = {(void *)sp_write_fifo,(void *)sp_read_fifo,(void *)sp_log2_val,(void *)sp_hexstr_conv};
	xsi_register_didat("xilinxcorelib_ver_m_00000000003098655076_3779698860", "isim/module_test_isim_beh.exe.sim/xilinxcorelib_ver/m_00000000003098655076_3779698860.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
