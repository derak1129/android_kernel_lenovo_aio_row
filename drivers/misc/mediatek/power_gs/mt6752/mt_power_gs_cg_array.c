// This file is generated by GenLP_setting.pl v1.4

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

#include <mach/mt_typedefs.h>
#include <mach/mt_power_gs.h>

const unsigned int AP_CG_gs_dpidle_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80818180,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x81808181,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81810300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00008181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081BFE3, 0x0000B1E2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1BFE3, 0x0000B1E2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2F77EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000094,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000084,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000084,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000044,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x000003FF,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_dpidle = AP_CG_gs_dpidle_data;

unsigned int AP_CG_gs_dpidle_len = 192;

const unsigned int AP_CG_gs_suspend_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80808080,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x80808080,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x80808080,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81810300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00008181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081BFE3, 0x0080BFE2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1BFE3, 0x0080BFE2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FFFFFFF,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000094,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000084,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000084,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000044,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x000003FF,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00001000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_suspend = AP_CG_gs_suspend_data;

unsigned int AP_CG_gs_suspend_len = 192;

const unsigned int AP_CG_gs_vp_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x01810101,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80010100,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x01008101,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81010300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00000181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081B1E3, 0x0081B0C0,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1B1E3, 0x0081B0C0,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FF7EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000001,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000001,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000001,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000001,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000001,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000001,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000000,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFF7BFC,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x0000030C,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000001,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000001,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFF0,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_vp = AP_CG_gs_vp_data;

unsigned int AP_CG_gs_vp_len = 192;

const unsigned int AP_CG_gs_paging_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80818180,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x81808181,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81810300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00008181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081B1E3, 0x0001B1E2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1B1E3, 0x0001B1E2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FF7EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000044,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x000003FF,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_paging = AP_CG_gs_paging_data;

unsigned int AP_CG_gs_paging_len = 192;

const unsigned int AP_CG_gs_mp3_play_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80818180,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x00008101,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81010300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00008181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081B1E3, 0x0001B1C2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1B1E3, 0x0001B1C2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FF7EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000000,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x000003FF,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_mp3_play = AP_CG_gs_mp3_play_data;

unsigned int AP_CG_gs_mp3_play_len = 192;

const unsigned int AP_CG_gs_idle_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80818180,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x81808181,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81810300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00008181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081BFE3, 0x0000B1E2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1BFE3, 0x0000B1E2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2F77EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000094,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000084,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000084,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000044,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x000003FF,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_idle = AP_CG_gs_idle_data;

unsigned int AP_CG_gs_idle_len = 192;

const unsigned int AP_CG_gs_clkon_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0003008, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x00000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF8000000, 0x00001111, 0x00001111,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000001 // VENC_CE
};

const unsigned int *AP_CG_gs_clkon = AP_CG_gs_clkon_data;

unsigned int AP_CG_gs_clkon_len = 192;

const unsigned int AP_CG_gs_talk_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80818180,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x01008181,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81810300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00000181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081B1E3, 0x0001B1C2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1B1E3, 0x0001B1C2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FF7EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000000,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFF7BFC,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x0000030C,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_talk = AP_CG_gs_talk_data;

unsigned int AP_CG_gs_talk_len = 192;

const unsigned int AP_CG_gs_connsys_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80818180,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x81808181,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81810300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00008181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081B1E3, 0x0001B1E2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1B1E3, 0x0001B1E2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FF7EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000044,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x000003FF,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_connsys = AP_CG_gs_connsys_data;

unsigned int AP_CG_gs_connsys_len = 192;

const unsigned int AP_CG_gs_mne_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0001040, 0x0040CF82, 0x00000000,// INFRA_PDN0
    0xF0001044, 0x0040CF82, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x0040CF82, 0x00000000,// INFRA_PDN_STA
    0xF3FFF000, 0x0000000E, 0x00000000,// MFG_CG_CON
    0xF3FFF004, 0x0000000E, 0x00000000,// MFG_CG_SET
    0xF3FFF008, 0x0000000E, 0x00000000,// MFG_CG_CLR
    0xF3FFF00C, 0x00000001, 0x00000000,// MFG_RESET
    0xF4000100, 0xFFFFFFFF, 0x00000000,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x00000000,// MMSYS_CG_CON1
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF7000000, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_mne = AP_CG_gs_mne_data;

unsigned int AP_CG_gs_mne_len = 192;

const unsigned int AP_CG_gs_datalink_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x00810106,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x80818180,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x81808181,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81810300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00008181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081B1E3, 0x0001B1E2,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1B1E3, 0x0001B1E2,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FF7EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000000,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000002,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000000,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000002,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000044,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFFFFFF,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x000003FF,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000BE1,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000000,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000000 // VENC_CE
};

const unsigned int *AP_CG_gs_datalink = AP_CG_gs_datalink_data;

unsigned int AP_CG_gs_datalink_len = 192;

const unsigned int AP_CG_gs_vr_data[] = {
 // Address     Mask        Golden Setting Value
    0xF0000040, 0xFFFFFFFF, 0x01810101,// CLK_CFG_0
    0xF0000050, 0xFFFFFFFF, 0x00018100,// CLK_CFG_1
    0xF0000060, 0xFFFFFFFF, 0x81818180,// CLK_CFG_2
    0xF0000070, 0xFFFFFFFF, 0x01008101,// CLK_CFG_3
    0xF0000080, 0xFFFFFFFF, 0x81010300,// CLK_CFG_4
    0xF0000090, 0x00009787, 0x00000181,// CLK_CFG_5
    0xF0000200, 0x000003FF, 0x000003FF,// CLK_SCP_CFG_0
    0xF0000204, 0x00000011, 0x00000011,// CLK_SCP_CFG_1
    0xF0001040, 0x0081B1E3, 0x0001B040,// INFRA_PDN0
    0xF0001044, 0x00C1BFE3, 0x00000000,// INFRA_PDN1
    0xF0001048, 0x00C1B1E3, 0x0001B040,// INFRA_PDN_STA
    0xF0003008, 0x3FFFFFFF, 0x2FF7EFFD,// PERI_GLOBALCON_PDN0_SET
    0xF0003010, 0x3FFFFFFF, 0x00000000,// PERI_GLOBALCON_PDN0_CLR
    0xF0003018, 0x0C000000, 0x0C000000,// PERI_GLOBALCON_PDN0_STA
    0xF000F640, 0x000000B4, 0x00000000,// DRAMC_PD_CTRL
    0xF000F690, 0x00000084, 0x00000000,// DRAMC_PD_CTRL_05PHY
    0xF0012640, 0x00000084, 0x00000000,// DRAMC_PD_CTRL
    0xF0209008, 0x00000007, 0x00000000,// AP_PLL_CON2
    0xF020900C, 0x0007FFFF, 0x00000000,// AP_PLL_CON3
    0xF0209010, 0x0000000F, 0x00000000,// AP_PLL_CON4
    0xF0209018, 0x0007FFFF, 0x00000000,// AP_PLL_CON6
    0xF0209020, 0xFFFFFFFF, 0x05010501,// CLKSQ_STB_CON0
    0xF0209024, 0x0000000F, 0x00000003,// PLL_PWR_CON0
    0xF0209028, 0x0000000F, 0x00000001,// PLL_PWR_CON1
    0xF020902C, 0x0000000F, 0x00000008,// PLL_ISO_CON0
    0xF0209030, 0x0000000F, 0x00000001,// PLL_ISO_CON1
    0xF0209034, 0x0000000F, 0x00000006,// PLL_STB_CON0
    0xF0209038, 0x000000FF, 0x00000096,// DIV_STB_CON0
    0xF020903C, 0x0000000F, 0x00000001,// PLL_CHG_CON0
    0xF0209200, 0x00000001, 0x00000000,// ARMCA15PLL_CON0
    0xF020920C, 0x00000003, 0x00000002,// ARMCA15PLL_PWR_CON0
    0xF0209240, 0x00000001, 0x00000000,// MMPLL_CON0
    0xF020924C, 0x00000003, 0x00000002,// MMPLL_PWR_CON0
    0xF0209250, 0x00000001, 0x00000001,// MSDCPLL_CON0
    0xF020925C, 0x00000003, 0x00000001,// MSDCPLL_PWR_CON0
    0xF0209260, 0x00000001, 0x00000001,// VENCPLL_CON0
    0xF020926C, 0x00000003, 0x00000001,// VENCPLL_PWR_CON0
    0xF0209270, 0x00000001, 0x00000000,// TVDPLL_CON0
    0xF020927C, 0x00000003, 0x00000002,// TVDPLL_PWR_CON0
    0xF0209290, 0x00000001, 0x00000000,// VCODECPLL_CON0
    0xF020929C, 0x00000003, 0x00000002,// VCODECPLL_PWR_CON0
    0xF02092A0, 0x00000001, 0x00000000,// APLL1_CON0
    0xF02092B0, 0x00000003, 0x00000002,// APLL1_PWR_CON0
    0xF02092B4, 0x00000001, 0x00000000,// APLL2_CON0
    0xF02092C4, 0x00000003, 0x00000002,// APLL2_PWR_CON0
    0xF1220000, 0x00000044, 0x00000000,// AUDIO_TOP_CON0
    0xF4000100, 0xFFFFFFFF, 0xFFFF7BFC,// MMSYS_CG_CON0
    0xF4000110, 0x000003FF, 0x0000030C,// MMSYS_CG_CON1
    0xF5000000, 0x00000BE1, 0x00000000,// IMG_CG_CON
    0xF6000000, 0x00000001, 0x00000000,// VDEC_CKEN_SET
    0xF6000004, 0x00000001, 0x00000000,// VDEC_CKEN_CLR
    0xF6000008, 0x00000001, 0x00000000,// LARB_CKEN_SET
    0xF600000C, 0x00000001, 0x00000000,// LARB_CKEN_CLR
    0xF6000010, 0x00000001, 0x00000001,// VDEC_RESETB
    0xF6000014, 0x00000001, 0x00000001,// LARB_RESTB
    0xF7000000, 0xFFFFFFFF, 0xFFFFFFFF,// MJC_SW_CG_CON
    0xF7000004, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_SET
    0xF7000008, 0xFFFFFFFF, 0x00000000,// MJC_SW_CG_CLR
    0xF8000000, 0x00001111, 0x00000011,// VENCSYS_CG_CON
    0xF80020EC, 0x00000001, 0x00000001 // VENC_CE
};

const unsigned int *AP_CG_gs_vr = AP_CG_gs_vr_data;

unsigned int AP_CG_gs_vr_len = 192;

