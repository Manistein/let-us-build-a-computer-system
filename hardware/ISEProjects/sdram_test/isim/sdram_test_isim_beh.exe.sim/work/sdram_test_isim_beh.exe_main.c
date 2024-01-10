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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_13701390776532775226_2297623829_init();
    unisims_ver_m_03665957290517102759_2282143210_init();
    unisims_ver_m_06158891332638045337_3897995058_init();
    unisims_ver_m_06158891332638045337_1625843133_init();
    unisims_ver_m_11740342327072834795_0225263307_init();
    unisims_ver_m_17544706326343019120_3923196629_init();
    unisims_ver_m_02760857255181855774_2593380106_init();
    work_m_02362620179442869614_2718054263_init();
    work_m_04038735517441032298_3844621758_init();
    work_m_08735340575927942808_2879558445_init();
    work_m_09963662111222425182_2300816568_init();
    work_m_16392951145262737069_2586284071_init();
    work_m_06755388247874779350_1064651464_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_06755388247874779350_1064651464");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
