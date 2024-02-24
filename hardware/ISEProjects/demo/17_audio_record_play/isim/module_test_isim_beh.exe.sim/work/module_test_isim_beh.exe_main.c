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
    xilinxcorelib_ver_m_00000000000200492576_0461066331_init();
    xilinxcorelib_ver_m_00000000000200492576_2247654869_init();
    xilinxcorelib_ver_m_00000000000808571076_1265922180_init();
    xilinxcorelib_ver_m_00000000001159543956_2280596105_init();
    xilinxcorelib_ver_m_00000000001291582275_0903547506_init();
    work_m_00000000003420487832_1838428081_init();
    work_m_00000000002635792531_3108156769_init();
    xilinxcorelib_ver_m_00000000003098655076_3779698860_init();
    xilinxcorelib_ver_m_00000000001159543956_3096741100_init();
    xilinxcorelib_ver_m_00000000001291582275_3818444898_init();
    work_m_00000000003420487832_1336183369_init();
    work_m_00000000000806892381_2631546682_init();
    work_m_00000000002783222012_3774233016_init();
    work_m_00000000002959518260_0719654312_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002959518260_0719654312");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
