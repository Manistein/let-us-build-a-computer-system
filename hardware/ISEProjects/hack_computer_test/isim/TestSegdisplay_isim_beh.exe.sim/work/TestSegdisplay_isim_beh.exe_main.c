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
    work_m_15403559766696264815_2150635731_init();
    xilinxcorelib_ver_m_04284627112054182733_0512766346_init();
    xilinxcorelib_ver_m_04284627112054182733_2708713321_init();
    xilinxcorelib_ver_m_18166792875774041790_2843080771_init();
    xilinxcorelib_ver_m_17738287534884592592_0275550433_init();
    xilinxcorelib_ver_m_01110455461284762708_0536766214_init();
    work_m_13486228919492782400_3068663738_init();
    work_m_18008836384248249375_1197804094_init();
    work_m_01451918325491598495_0694886188_init();
    work_m_17137875466399854043_0300706239_init();
    work_m_13399063947178281931_2727772941_init();
    work_m_13129779053770389891_0926659585_init();
    work_m_00685734330937432065_1463512774_init();
    work_m_07593237029702937802_4102813665_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_07593237029702937802_4102813665");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
