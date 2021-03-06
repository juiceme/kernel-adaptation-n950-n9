/**
 * include/linux/ad58xx.h
 *
 * Copyright (C) 2010 Nokia Corporation
 *
 * Contact: Atanas Filipov <atanasf@mm-sol.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef __AD58XX_USER_H_
#define __AD58XX_USER_H_

#include <linux/videodev2.h>

/* AD58XX Focus modes */
enum v4l2_ad58xx_focus_mode {
	AD58XX_FOCUS_MODE_IM		= 0,
	AD58XX_FOCUS_MODE_SFSS		= 1,
	AD58XX_FOCUS_MODE_SFMSP1	= 2,
	AD58XX_FOCUS_MODE_MFMSP1	= 3,
	AD58XX_FOCUS_MODE_SFMSP2	= 4,
	AD58XX_FOCUS_MODE_MFMSP2	= 5,
};

/* AD58XX Ringing control modes */
enum v4l2_ad58xx_rc_mode {
	AD58XX_VCM_MODE_ARC_RES01	= 0,
	AD58XX_VCM_MODE_ARC_ESRC	= 1,
	AD58XX_VCM_MODE_ARC_RES05	= 2,
	AD58XX_VCM_MODE_ARC_RES02	= 3,
};

/* AD5817 Output drive modes */
enum v4l2_ad58xx_lin_mode {
	AD5817_LIN_MODE_FULL_PWM	= 0,
	AD5817_LIN_MODE_FULL_LINEAR	= 1,
	AD5817_LIN_MODE_AUTO_MODE0	= 2,
	AD5817_LIN_MODE_AUTO_MODE1	= 3,
};

/* AD5817 Master clock */
enum v4l2_ad58xx_set_clk {
	AD5817_SET_CLK_INT_CLK		= 0,
	AD5817_SET_CLK_EXT_CLK_4_8	= 1,
	AD5817_SET_CLK_EXT_CLK_9_6	= 2,
	AD5817_SET_CLK_EXT_CLK_19_2	= 3,
};

/* BU8051GWZ Output voltage */
enum v4l2_ad58xx_gainsel {
	BU8051GWZ_GAINSEL_2_70		= 0,
	BU8051GWZ_GAINSEL_2_75		= 1,
	BU8051GWZ_GAINSEL_2_80		= 2,
	BU8051GWZ_GAINSEL_2_85		= 3,
};

/* Control IDs specific to the AD58XX driver */
#define V4L2_CID_AD58XX_FOCUS_MODE	(V4L2_CID_CAMERA_CLASS_BASE + 1000)
#define V4L2_CID_AD58XX_FOCUS_RINGCTRL	(V4L2_CID_CAMERA_CLASS_BASE + 1001)
#define V4L2_CID_AD58XX_FOCUS_SW_RESET	(V4L2_CID_CAMERA_CLASS_BASE + 1002)
#define V4L2_CID_AD58XX_CHANGE_NUM_P1	(V4L2_CID_CAMERA_CLASS_BASE + 1003)
#define V4L2_CID_AD58XX_CHANGE_NUM_P2	(V4L2_CID_CAMERA_CLASS_BASE + 1004)
#define V4L2_CID_AD58XX_STROBE_CNT_P1	(V4L2_CID_CAMERA_CLASS_BASE + 1005)
#define V4L2_CID_AD58XX_STROBE_CNT_P2	(V4L2_CID_CAMERA_CLASS_BASE + 1006)
#define V4L2_CID_AD58XX_VCM_MOVE_TIME	(V4L2_CID_CAMERA_CLASS_BASE + 1007)
#define V4L2_CID_AD58XX_VCM_THRESHOLD	(V4L2_CID_CAMERA_CLASS_BASE + 1008)
#define V4L2_CID_AD58XX_VCM_MODE_ARC	(V4L2_CID_CAMERA_CLASS_BASE + 1009)
#define V4L2_CID_AD58XX_VCM_MODE_ADJ	(V4L2_CID_CAMERA_CLASS_BASE + 1010)

#define V4L2_CID_AD5817_LIN_MODE	(V4L2_CID_CAMERA_CLASS_BASE + 1011)
#define V4L2_CID_AD5817_CLK_DIV		(V4L2_CID_CAMERA_CLASS_BASE + 1012)
#define V4L2_CID_AD5817_FORCE_DISK	(V4L2_CID_CAMERA_CLASS_BASE + 1013)
#define V4L2_CID_AD5817_LDO_VANA_DSBL	(V4L2_CID_CAMERA_CLASS_BASE + 1014)
#define V4L2_CID_AD5817_CP_DISABLE	(V4L2_CID_CAMERA_CLASS_BASE + 1015)
#define V4L2_CID_AD5817_LDO_VANA	(V4L2_CID_CAMERA_CLASS_BASE + 1016)

/* Control IDs specific to the BU8051GWZ driver */
#define V4L2_CID_BU8051GWZ_OP1		(V4L2_CID_CAMERA_CLASS_BASE + 1017)
#define V4L2_CID_BU8051GWZ_OP2		(V4L2_CID_CAMERA_CLASS_BASE + 1018)
#define V4L2_CID_BU8051GWZ_OP3		(V4L2_CID_CAMERA_CLASS_BASE + 1019)
#define V4L2_CID_BU8051GWZ_OP4		(V4L2_CID_CAMERA_CLASS_BASE + 1020)
#define V4L2_CID_BU8051GWZ_GAINSEL	(V4L2_CID_CAMERA_CLASS_BASE + 1021)
#define V4L2_CID_BU8051GWZ_GAINSELEN	(V4L2_CID_CAMERA_CLASS_BASE + 1022)
#define V4L2_CID_BU8051GWZ_SCO		(V4L2_CID_CAMERA_CLASS_BASE + 1023)
#define V4L2_CID_BU8051GWZ_SF		(V4L2_CID_CAMERA_CLASS_BASE + 1024)
#define V4L2_CID_BU8051GWZ_PWM		(V4L2_CID_CAMERA_CLASS_BASE + 1025)

/** Temporary backward compatibility for AD5836 */
#define V4L2_CID_AD5836_FOCUS_MODE	V4L2_CID_AD58XX_FOCUS_MODE
#define V4L2_CID_AD5836_FOCUS_RINGCTRL	V4L2_CID_AD58XX_FOCUS_RINGCTRL
#define V4L2_CID_AD5836_FOCUS_SW_RESET	V4L2_CID_AD58XX_FOCUS_SW_RESET
#define V4L2_CID_AD5836_CHANGE_NUM_P1	V4L2_CID_AD58XX_CHANGE_NUM_P1
#define V4L2_CID_AD5836_CHANGE_NUM_P2	V4L2_CID_AD58XX_CHANGE_NUM_P2
#define V4L2_CID_AD5836_STROBE_CNT_P1	V4L2_CID_AD58XX_STROBE_CNT_P1
#define V4L2_CID_AD5836_STROBE_CNT_P2	V4L2_CID_AD58XX_STROBE_CNT_P2
#define V4L2_CID_AD5836_VCM_MOVE_TIME	V4L2_CID_AD58XX_VCM_MOVE_TIME
#define V4L2_CID_AD5836_VCM_THRESHOLD	V4L2_CID_AD58XX_VCM_THRESHOLD
#define V4L2_CID_AD5836_VCM_MODE_ARC	V4L2_CID_AD58XX_VCM_MODE_ARC
#define V4L2_CID_AD5836_VCM_MODE_ADJ	V4L2_CID_AD58XX_VCM_MODE_ADJ

#endif /* __AD58XX_USER_H_ */
