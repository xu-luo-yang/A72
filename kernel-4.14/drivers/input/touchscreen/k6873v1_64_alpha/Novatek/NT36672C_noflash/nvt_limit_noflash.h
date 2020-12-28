/***************************************************
 * File:nvt_limit.h
 * VENDOR_EDIT
 * Copyright (c)  2017 - 2030  CUSTOM_O Mobile communication Corp.ltd.
 * Description:
 *             nova nt36525b test limit data
 * Version:1.0:
 * Date created:2017-09-15
 * Author: Cong.Dai@Bsp.Driver
 * TAG: BSP.TP.Init
 * *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * INFORMATION CONTAINED IN THIS DOCUMENT IS PROVIDED "AS-IS," AND SYNAPTICS
 * EXPRESSLY DISCLAIMS ALL EXPRESS AND IMPLIED WARRANTIES, INCLUDING ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE,
 * AND ANY WARRANTIES OF NON-INFRINGEMENT OF ANY INTELLECTUAL PROPERTY RIGHTS.
 * IN NO EVENT SHALL SYNAPTICS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, PUNITIVE, OR CONSEQUENTIAL DAMAGES ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OF THE INFORMATION CONTAINED IN THIS DOCUMENT, HOWEVER CAUSED
 * AND BASED ON ANY THEORY OF LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, AND EVEN IF SYNAPTICS WAS ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE. IF A TRIBUNAL OF COMPETENT JURISDICTION DOES
 * NOT PERMIT THE DISCLAIMER OF DIRECT DAMAGES OR ANY OTHER DAMAGES, SYNAPTICS'
 * TOTAL CUMULATIVE LIABILITY TO ANY PARTY SHALL NOT EXCEED ONE HUNDRED U.S.
 * DOLLARS.
 * -------------- Revision History: -----------------
 *  <author >  <data>  <version>  <desc>
 ***************************************************/

#ifndef NVT_H_LIMIT_NOFLASH
#define NVT_H_LIMIT_NOFLASH

//---Screen on test---
static uint32_t Doze_X_Channel = 2;
/*Doze FW Rawdata Test*/
static int32_t PS_Config_Lmt_Doze_Rawdata_P = 1000;
static int32_t PS_Config_Lmt_Doze_Rawdata_N = 200;
static int32_t PS_Config_Doze_Noise_Test_Frame = 50;
/*Doze Noise Test*/
static int32_t PS_Config_Lmt_Doze_Diff_P = 500;
static int32_t PS_Config_Lmt_Doze_Diff_N = -500;
/*FW cc data test*/
static int32_t PS_Config_Lmt_FW_CC_P = 100;
static int32_t PS_Config_Lmt_FW_CC_N = 70;
/*Noise Test*/
static int32_t PS_Config_Lmt_FW_Diff_P = 60;
static int32_t PS_Config_Lmt_FW_Diff_N = -60;
/*Short Test*/
static int32_t PS_Config_Lmt_Short_Rawdata_N = 11000;
static int32_t PS_Config_Lmt_Short_Rawdata_P = 14000;
static int32_t PS_Config_Diff_Test_Frame = 50;

//---LPWGModeTest---
static int32_t PS_Config_Lmt_LPWG_Rawdata_P = 1300;
static int32_t PS_Config_Lmt_LPWG_Rawdata_N = 500;
static int32_t PS_Config_Lmt_LPWG_Diff_P = 60;
static int32_t PS_Config_Lmt_LPWG_Diff_N = -60;

static uint8_t AIN_X[40] = { 17, 16, 15, 14, 13, 12, 11, 10, 9,
			     8,  7,  6,  5,  4,  3,  2,  1,  0 };
static uint8_t AIN_Y[40] = { 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21,
			     20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,
			     9,  8,  7,  6,  5,  4,  3,  2,  1,  0 };

/*FW Rawdata Test*/
static int32_t PS_Config_Lmt_FW_Rawdata_P[40 * 40] = {
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
	1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300, 1300,
};

static int32_t PS_Config_Lmt_FW_Rawdata_N[40 * 40] = {
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,
	500, 500,
};

/*Open Test*/
static int32_t PS_Config_Lmt_Open_Rawdata_P[40 * 40] = {
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000, 13000,
	13000, 13000, 13000, 13000, 13000, 13000,
};

static int32_t PS_Config_Lmt_Open_Rawdata_N[40 * 40] = {
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
	6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500, 6500,
};

#endif