/*
 * Component description for NVM
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2022-02-03T13:54:44Z */
#ifndef _WBZ35_NVM_COMPONENT_H_
#define _WBZ35_NVM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR NVM                                          */
/* ************************************************************************** */

/* -------- NVM_NVMCON : (NVM Offset: 0x00) (R/W 32)  -------- */
#define NVM_NVMCON_RESETVALUE                 _U_(0x00)                                            /**<  (NVM_NVMCON)   Reset Value */

#define NVM_NVMCON_NVMOP_Pos                  _U_(0)                                               /**< (NVM_NVMCON)  Position */
#define NVM_NVMCON_NVMOP_Msk                  (_U_(0xF) << NVM_NVMCON_NVMOP_Pos)                   /**< (NVM_NVMCON)  Mask */
#define NVM_NVMCON_NVMOP(value)               (NVM_NVMCON_NVMOP_Msk & ((value) << NVM_NVMCON_NVMOP_Pos))
#define NVM_NVMCON_LVDERR_Pos                 _U_(12)                                              /**< (NVM_NVMCON)  Position */
#define NVM_NVMCON_LVDERR_Msk                 (_U_(0x1) << NVM_NVMCON_LVDERR_Pos)                  /**< (NVM_NVMCON)  Mask */
#define NVM_NVMCON_LVDERR(value)              (NVM_NVMCON_LVDERR_Msk & ((value) << NVM_NVMCON_LVDERR_Pos))
#define NVM_NVMCON_WRERR_Pos                  _U_(13)                                              /**< (NVM_NVMCON)  Position */
#define NVM_NVMCON_WRERR_Msk                  (_U_(0x1) << NVM_NVMCON_WRERR_Pos)                   /**< (NVM_NVMCON)  Mask */
#define NVM_NVMCON_WRERR(value)               (NVM_NVMCON_WRERR_Msk & ((value) << NVM_NVMCON_WRERR_Pos))
#define NVM_NVMCON_WREN_Pos                   _U_(14)                                              /**< (NVM_NVMCON)  Position */
#define NVM_NVMCON_WREN_Msk                   (_U_(0x1) << NVM_NVMCON_WREN_Pos)                    /**< (NVM_NVMCON)  Mask */
#define NVM_NVMCON_WREN(value)                (NVM_NVMCON_WREN_Msk & ((value) << NVM_NVMCON_WREN_Pos))
#define NVM_NVMCON_WR_Pos                     _U_(15)                                              /**< (NVM_NVMCON)  Position */
#define NVM_NVMCON_WR_Msk                     (_U_(0x1) << NVM_NVMCON_WR_Pos)                      /**< (NVM_NVMCON)  Mask */
#define NVM_NVMCON_WR(value)                  (NVM_NVMCON_WR_Msk & ((value) << NVM_NVMCON_WR_Pos))
#define NVM_NVMCON_Msk                        _U_(0x0000F00F)                                      /**< (NVM_NVMCON) Register Mask  */


/* -------- NVM_NVMCONCLR : (NVM Offset: 0x04) (R/W 32)  -------- */
#define NVM_NVMCONCLR_RESETVALUE              _U_(0x00)                                            /**<  (NVM_NVMCONCLR)   Reset Value */

#define NVM_NVMCONCLR_Msk                     _U_(0x00000000)                                      /**< (NVM_NVMCONCLR) Register Mask  */


/* -------- NVM_NVMCONSET : (NVM Offset: 0x08) (R/W 32)  -------- */
#define NVM_NVMCONSET_RESETVALUE              _U_(0x00)                                            /**<  (NVM_NVMCONSET)   Reset Value */

#define NVM_NVMCONSET_Msk                     _U_(0x00000000)                                      /**< (NVM_NVMCONSET) Register Mask  */


/* -------- NVM_NVMCONINV : (NVM Offset: 0x0C) (R/W 32)  -------- */
#define NVM_NVMCONINV_RESETVALUE              _U_(0x00)                                            /**<  (NVM_NVMCONINV)   Reset Value */

#define NVM_NVMCONINV_Msk                     _U_(0x00000000)                                      /**< (NVM_NVMCONINV) Register Mask  */


/* -------- NVM_NVMCON2 : (NVM Offset: 0x10) (R/W 32)  -------- */
#define NVM_NVMCON2_RESETVALUE                _U_(0x11F4000)                                       /**<  (NVM_NVMCON2)   Reset Value */

#define NVM_NVMCON2_NVMPREPG_Pos              _U_(0)                                               /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_NVMPREPG_Msk              (_U_(0x1) << NVM_NVMCON2_NVMPREPG_Pos)               /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_NVMPREPG(value)           (NVM_NVMCON2_NVMPREPG_Msk & ((value) << NVM_NVMCON2_NVMPREPG_Pos))
#define NVM_NVMCON2_RETRY_Pos                 _U_(8)                                               /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_RETRY_Msk                 (_U_(0x3) << NVM_NVMCON2_RETRY_Pos)                  /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_RETRY(value)              (NVM_NVMCON2_RETRY_Msk & ((value) << NVM_NVMCON2_RETRY_Pos))
#define NVM_NVMCON2_VREAD1_Pos                _U_(12)                                              /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_VREAD1_Msk                (_U_(0x1) << NVM_NVMCON2_VREAD1_Pos)                 /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_VREAD1(value)             (NVM_NVMCON2_VREAD1_Msk & ((value) << NVM_NVMCON2_VREAD1_Pos))
#define NVM_NVMCON2_CREAD1_Pos                _U_(13)                                              /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_CREAD1_Msk                (_U_(0x1) << NVM_NVMCON2_CREAD1_Pos)                 /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_CREAD1(value)             (NVM_NVMCON2_CREAD1_Msk & ((value) << NVM_NVMCON2_CREAD1_Pos))
#define NVM_NVMCON2_TEMP_Pos                  _U_(14)                                              /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_TEMP_Msk                  (_U_(0x1) << NVM_NVMCON2_TEMP_Pos)                   /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_TEMP(value)               (NVM_NVMCON2_TEMP_Msk & ((value) << NVM_NVMCON2_TEMP_Pos))
#define NVM_NVMCON2_WS_Pos                    _U_(16)                                              /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_WS_Msk                    (_U_(0x1F) << NVM_NVMCON2_WS_Pos)                    /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_WS(value)                 (NVM_NVMCON2_WS_Msk & ((value) << NVM_NVMCON2_WS_Pos))
#define NVM_NVMCON2_SLEEP_Pos                 _U_(24)                                              /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_SLEEP_Msk                 (_U_(0x1) << NVM_NVMCON2_SLEEP_Pos)                  /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_SLEEP(value)              (NVM_NVMCON2_SLEEP_Msk & ((value) << NVM_NVMCON2_SLEEP_Pos))
#define NVM_NVMCON2_ERS_Pos                   _U_(28)                                              /**< (NVM_NVMCON2)  Position */
#define NVM_NVMCON2_ERS_Msk                   (_U_(0xF) << NVM_NVMCON2_ERS_Pos)                    /**< (NVM_NVMCON2)  Mask */
#define NVM_NVMCON2_ERS(value)                (NVM_NVMCON2_ERS_Msk & ((value) << NVM_NVMCON2_ERS_Pos))
#define NVM_NVMCON2_Msk                       _U_(0xF11F7301)                                      /**< (NVM_NVMCON2) Register Mask  */

#define NVM_NVMCON2_VREAD_Pos                 _U_(12)                                              /**< (NVM_NVMCON2 Position)  */
#define NVM_NVMCON2_VREAD_Msk                 (_U_(0x1) << NVM_NVMCON2_VREAD_Pos)                  /**< (NVM_NVMCON2 Mask) VREAD */
#define NVM_NVMCON2_VREAD(value)              (NVM_NVMCON2_VREAD_Msk & ((value) << NVM_NVMCON2_VREAD_Pos)) 
#define NVM_NVMCON2_CREAD_Pos                 _U_(13)                                              /**< (NVM_NVMCON2 Position)  */
#define NVM_NVMCON2_CREAD_Msk                 (_U_(0x1) << NVM_NVMCON2_CREAD_Pos)                  /**< (NVM_NVMCON2 Mask) CREAD */
#define NVM_NVMCON2_CREAD(value)              (NVM_NVMCON2_CREAD_Msk & ((value) << NVM_NVMCON2_CREAD_Pos)) 

/* -------- NVM_NVMCON2CLR : (NVM Offset: 0x14) (R/W 32)  -------- */
#define NVM_NVMCON2CLR_RESETVALUE             _U_(0x00)                                            /**<  (NVM_NVMCON2CLR)   Reset Value */

#define NVM_NVMCON2CLR_Msk                    _U_(0x00000000)                                      /**< (NVM_NVMCON2CLR) Register Mask  */


/* -------- NVM_NVMCON2SET : (NVM Offset: 0x18) (R/W 32)  -------- */
#define NVM_NVMCON2SET_RESETVALUE             _U_(0x00)                                            /**<  (NVM_NVMCON2SET)   Reset Value */

#define NVM_NVMCON2SET_Msk                    _U_(0x00000000)                                      /**< (NVM_NVMCON2SET) Register Mask  */


/* -------- NVM_NVMCON2INV : (NVM Offset: 0x1C) (R/W 32)  -------- */
#define NVM_NVMCON2INV_RESETVALUE             _U_(0x00)                                            /**<  (NVM_NVMCON2INV)   Reset Value */

#define NVM_NVMCON2INV_Msk                    _U_(0x00000000)                                      /**< (NVM_NVMCON2INV) Register Mask  */


/* -------- NVM_NVMKEY : (NVM Offset: 0x20) (R/W 32)  -------- */
#define NVM_NVMKEY_RESETVALUE                 _U_(0x00)                                            /**<  (NVM_NVMKEY)   Reset Value */

#define NVM_NVMKEY_NVMKEY_Pos                 _U_(0)                                               /**< (NVM_NVMKEY)  Position */
#define NVM_NVMKEY_NVMKEY_Msk                 (_U_(0xFFFFFFFF) << NVM_NVMKEY_NVMKEY_Pos)           /**< (NVM_NVMKEY)  Mask */
#define NVM_NVMKEY_NVMKEY(value)              (NVM_NVMKEY_NVMKEY_Msk & ((value) << NVM_NVMKEY_NVMKEY_Pos))
#define NVM_NVMKEY_Msk                        _U_(0xFFFFFFFF)                                      /**< (NVM_NVMKEY) Register Mask  */


/* -------- NVM_NVMADDR : (NVM Offset: 0x30) (R/W 32)  -------- */
#define NVM_NVMADDR_RESETVALUE                _U_(0x00)                                            /**<  (NVM_NVMADDR)   Reset Value */

#define NVM_NVMADDR_NVMADDR_Pos               _U_(0)                                               /**< (NVM_NVMADDR)  Position */
#define NVM_NVMADDR_NVMADDR_Msk               (_U_(0xFFFFFFFF) << NVM_NVMADDR_NVMADDR_Pos)         /**< (NVM_NVMADDR)  Mask */
#define NVM_NVMADDR_NVMADDR(value)            (NVM_NVMADDR_NVMADDR_Msk & ((value) << NVM_NVMADDR_NVMADDR_Pos))
#define NVM_NVMADDR_Msk                       _U_(0xFFFFFFFF)                                      /**< (NVM_NVMADDR) Register Mask  */


/* -------- NVM_NVMDATA0 : (NVM Offset: 0x40) (R/W 32)  -------- */
#define NVM_NVMDATA0_RESETVALUE               _U_(0x00)                                            /**<  (NVM_NVMDATA0)   Reset Value */

#define NVM_NVMDATA0_NVMDATA0_Pos             _U_(0)                                               /**< (NVM_NVMDATA0)  Position */
#define NVM_NVMDATA0_NVMDATA0_Msk             (_U_(0xFFFFFFFF) << NVM_NVMDATA0_NVMDATA0_Pos)       /**< (NVM_NVMDATA0)  Mask */
#define NVM_NVMDATA0_NVMDATA0(value)          (NVM_NVMDATA0_NVMDATA0_Msk & ((value) << NVM_NVMDATA0_NVMDATA0_Pos))
#define NVM_NVMDATA0_Msk                      _U_(0xFFFFFFFF)                                      /**< (NVM_NVMDATA0) Register Mask  */


/* -------- NVM_NVMDATA1 : (NVM Offset: 0x50) (R/W 32)  -------- */
#define NVM_NVMDATA1_RESETVALUE               _U_(0x00)                                            /**<  (NVM_NVMDATA1)   Reset Value */

#define NVM_NVMDATA1_NVMDATA1_Pos             _U_(0)                                               /**< (NVM_NVMDATA1)  Position */
#define NVM_NVMDATA1_NVMDATA1_Msk             (_U_(0xFFFFFFFF) << NVM_NVMDATA1_NVMDATA1_Pos)       /**< (NVM_NVMDATA1)  Mask */
#define NVM_NVMDATA1_NVMDATA1(value)          (NVM_NVMDATA1_NVMDATA1_Msk & ((value) << NVM_NVMDATA1_NVMDATA1_Pos))
#define NVM_NVMDATA1_Msk                      _U_(0xFFFFFFFF)                                      /**< (NVM_NVMDATA1) Register Mask  */


/* -------- NVM_NVMDATA2 : (NVM Offset: 0x60) (R/W 32)  -------- */
#define NVM_NVMDATA2_RESETVALUE               _U_(0x00)                                            /**<  (NVM_NVMDATA2)   Reset Value */

#define NVM_NVMDATA2_NVMDATA2_Pos             _U_(0)                                               /**< (NVM_NVMDATA2)  Position */
#define NVM_NVMDATA2_NVMDATA2_Msk             (_U_(0xFFFFFFFF) << NVM_NVMDATA2_NVMDATA2_Pos)       /**< (NVM_NVMDATA2)  Mask */
#define NVM_NVMDATA2_NVMDATA2(value)          (NVM_NVMDATA2_NVMDATA2_Msk & ((value) << NVM_NVMDATA2_NVMDATA2_Pos))
#define NVM_NVMDATA2_Msk                      _U_(0xFFFFFFFF)                                      /**< (NVM_NVMDATA2) Register Mask  */


/* -------- NVM_NVMDATA3 : (NVM Offset: 0x70) (R/W 32)  -------- */
#define NVM_NVMDATA3_RESETVALUE               _U_(0x00)                                            /**<  (NVM_NVMDATA3)   Reset Value */

#define NVM_NVMDATA3_NVMDATA3_Pos             _U_(0)                                               /**< (NVM_NVMDATA3)  Position */
#define NVM_NVMDATA3_NVMDATA3_Msk             (_U_(0xFFFFFFFF) << NVM_NVMDATA3_NVMDATA3_Pos)       /**< (NVM_NVMDATA3)  Mask */
#define NVM_NVMDATA3_NVMDATA3(value)          (NVM_NVMDATA3_NVMDATA3_Msk & ((value) << NVM_NVMDATA3_NVMDATA3_Pos))
#define NVM_NVMDATA3_Msk                      _U_(0xFFFFFFFF)                                      /**< (NVM_NVMDATA3) Register Mask  */


/* -------- NVM_NVMSRCADDR : (NVM Offset: 0xC0) (R/W 32)  -------- */
#define NVM_NVMSRCADDR_RESETVALUE             _U_(0x00)                                            /**<  (NVM_NVMSRCADDR)   Reset Value */

#define NVM_NVMSRCADDR_NVMSRCADDR_Pos         _U_(0)                                               /**< (NVM_NVMSRCADDR)  Position */
#define NVM_NVMSRCADDR_NVMSRCADDR_Msk         (_U_(0xFFFFFFFF) << NVM_NVMSRCADDR_NVMSRCADDR_Pos)   /**< (NVM_NVMSRCADDR)  Mask */
#define NVM_NVMSRCADDR_NVMSRCADDR(value)      (NVM_NVMSRCADDR_NVMSRCADDR_Msk & ((value) << NVM_NVMSRCADDR_NVMSRCADDR_Pos))
#define NVM_NVMSRCADDR_Msk                    _U_(0xFFFFFFFF)                                      /**< (NVM_NVMSRCADDR) Register Mask  */


/* -------- NVM_NVMPWPLT : (NVM Offset: 0xD0) (R/W 32)  -------- */
#define NVM_NVMPWPLT_RESETVALUE               _U_(0x00)                                            /**<  (NVM_NVMPWPLT)   Reset Value */

#define NVM_NVMPWPLT_PWPLT_Pos                _U_(0)                                               /**< (NVM_NVMPWPLT)  Position */
#define NVM_NVMPWPLT_PWPLT_Msk                (_U_(0xFFFFFF) << NVM_NVMPWPLT_PWPLT_Pos)            /**< (NVM_NVMPWPLT)  Mask */
#define NVM_NVMPWPLT_PWPLT(value)             (NVM_NVMPWPLT_PWPLT_Msk & ((value) << NVM_NVMPWPLT_PWPLT_Pos))
#define NVM_NVMPWPLT_ULOCK_Pos                _U_(31)                                              /**< (NVM_NVMPWPLT)  Position */
#define NVM_NVMPWPLT_ULOCK_Msk                (_U_(0x1) << NVM_NVMPWPLT_ULOCK_Pos)                 /**< (NVM_NVMPWPLT)  Mask */
#define NVM_NVMPWPLT_ULOCK(value)             (NVM_NVMPWPLT_ULOCK_Msk & ((value) << NVM_NVMPWPLT_ULOCK_Pos))
#define NVM_NVMPWPLT_Msk                      _U_(0x80FFFFFF)                                      /**< (NVM_NVMPWPLT) Register Mask  */


/* -------- NVM_NVMPWPLTCLR : (NVM Offset: 0xD4) (R/W 32)  -------- */
#define NVM_NVMPWPLTCLR_RESETVALUE            _U_(0x00)                                            /**<  (NVM_NVMPWPLTCLR)   Reset Value */

#define NVM_NVMPWPLTCLR_Msk                   _U_(0x00000000)                                      /**< (NVM_NVMPWPLTCLR) Register Mask  */


/* -------- NVM_NVMPWPLTSET : (NVM Offset: 0xD8) (R/W 32)  -------- */
#define NVM_NVMPWPLTSET_RESETVALUE            _U_(0x00)                                            /**<  (NVM_NVMPWPLTSET)   Reset Value */

#define NVM_NVMPWPLTSET_Msk                   _U_(0x00000000)                                      /**< (NVM_NVMPWPLTSET) Register Mask  */


/* -------- NVM_NVMPWPLTINV : (NVM Offset: 0xDC) (R/W 32)  -------- */
#define NVM_NVMPWPLTINV_RESETVALUE            _U_(0x00)                                            /**<  (NVM_NVMPWPLTINV)   Reset Value */

#define NVM_NVMPWPLTINV_Msk                   _U_(0x00000000)                                      /**< (NVM_NVMPWPLTINV) Register Mask  */


/* -------- NVM_NVMPWPGTE : (NVM Offset: 0xE0) (R/W 32)  -------- */
#define NVM_NVMPWPGTE_RESETVALUE              _U_(0x80FFFFFF)                                      /**<  (NVM_NVMPWPGTE)   Reset Value */

#define NVM_NVMPWPGTE_PWPGTE_Pos              _U_(0)                                               /**< (NVM_NVMPWPGTE)  Position */
#define NVM_NVMPWPGTE_PWPGTE_Msk              (_U_(0xFFFFFF) << NVM_NVMPWPGTE_PWPGTE_Pos)          /**< (NVM_NVMPWPGTE)  Mask */
#define NVM_NVMPWPGTE_PWPGTE(value)           (NVM_NVMPWPGTE_PWPGTE_Msk & ((value) << NVM_NVMPWPGTE_PWPGTE_Pos))
#define NVM_NVMPWPGTE_ULOCK_Pos               _U_(31)                                              /**< (NVM_NVMPWPGTE)  Position */
#define NVM_NVMPWPGTE_ULOCK_Msk               (_U_(0x1) << NVM_NVMPWPGTE_ULOCK_Pos)                /**< (NVM_NVMPWPGTE)  Mask */
#define NVM_NVMPWPGTE_ULOCK(value)            (NVM_NVMPWPGTE_ULOCK_Msk & ((value) << NVM_NVMPWPGTE_ULOCK_Pos))
#define NVM_NVMPWPGTE_Msk                     _U_(0x80FFFFFF)                                      /**< (NVM_NVMPWPGTE) Register Mask  */


/* -------- NVM_NVMPWPGTECLR : (NVM Offset: 0xE4) (R/W 32)  -------- */
#define NVM_NVMPWPGTECLR_RESETVALUE           _U_(0x00)                                            /**<  (NVM_NVMPWPGTECLR)   Reset Value */

#define NVM_NVMPWPGTECLR_Msk                  _U_(0x00000000)                                      /**< (NVM_NVMPWPGTECLR) Register Mask  */


/* -------- NVM_NVMPWPGTESET : (NVM Offset: 0xE8) (R/W 32)  -------- */
#define NVM_NVMPWPGTESET_RESETVALUE           _U_(0x00)                                            /**<  (NVM_NVMPWPGTESET)   Reset Value */

#define NVM_NVMPWPGTESET_Msk                  _U_(0x00000000)                                      /**< (NVM_NVMPWPGTESET) Register Mask  */


/* -------- NVM_NVMPWPGTEINV : (NVM Offset: 0xEC) (R/W 32)  -------- */
#define NVM_NVMPWPGTEINV_RESETVALUE           _U_(0x00)                                            /**<  (NVM_NVMPWPGTEINV)   Reset Value */

#define NVM_NVMPWPGTEINV_Msk                  _U_(0x00000000)                                      /**< (NVM_NVMPWPGTEINV) Register Mask  */


/* -------- NVM_NVMLBWP : (NVM Offset: 0xF0) (R/W 32)  -------- */
#define NVM_NVMLBWP_RESETVALUE                _U_(0x80FFFFFF)                                      /**<  (NVM_NVMLBWP)   Reset Value */

#define NVM_NVMLBWP_LBWP0_Pos                 _U_(0)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP0_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP0_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP0(value)              (NVM_NVMLBWP_LBWP0_Msk & ((value) << NVM_NVMLBWP_LBWP0_Pos))
#define NVM_NVMLBWP_LBWP1_Pos                 _U_(1)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP1_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP1_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP1(value)              (NVM_NVMLBWP_LBWP1_Msk & ((value) << NVM_NVMLBWP_LBWP1_Pos))
#define NVM_NVMLBWP_LBWP2_Pos                 _U_(2)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP2_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP2_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP2(value)              (NVM_NVMLBWP_LBWP2_Msk & ((value) << NVM_NVMLBWP_LBWP2_Pos))
#define NVM_NVMLBWP_LBWP3_Pos                 _U_(3)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP3_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP3_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP3(value)              (NVM_NVMLBWP_LBWP3_Msk & ((value) << NVM_NVMLBWP_LBWP3_Pos))
#define NVM_NVMLBWP_LBWP4_Pos                 _U_(4)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP4_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP4_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP4(value)              (NVM_NVMLBWP_LBWP4_Msk & ((value) << NVM_NVMLBWP_LBWP4_Pos))
#define NVM_NVMLBWP_LBWP5_Pos                 _U_(5)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP5_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP5_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP5(value)              (NVM_NVMLBWP_LBWP5_Msk & ((value) << NVM_NVMLBWP_LBWP5_Pos))
#define NVM_NVMLBWP_LBWP6_Pos                 _U_(6)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP6_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP6_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP6(value)              (NVM_NVMLBWP_LBWP6_Msk & ((value) << NVM_NVMLBWP_LBWP6_Pos))
#define NVM_NVMLBWP_LBWP7_Pos                 _U_(7)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP7_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP7_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP7(value)              (NVM_NVMLBWP_LBWP7_Msk & ((value) << NVM_NVMLBWP_LBWP7_Pos))
#define NVM_NVMLBWP_LBWP8_Pos                 _U_(8)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP8_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP8_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP8(value)              (NVM_NVMLBWP_LBWP8_Msk & ((value) << NVM_NVMLBWP_LBWP8_Pos))
#define NVM_NVMLBWP_LBWP9_Pos                 _U_(9)                                               /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP9_Msk                 (_U_(0x1) << NVM_NVMLBWP_LBWP9_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP9(value)              (NVM_NVMLBWP_LBWP9_Msk & ((value) << NVM_NVMLBWP_LBWP9_Pos))
#define NVM_NVMLBWP_LBWP10_Pos                _U_(10)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP10_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP10_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP10(value)             (NVM_NVMLBWP_LBWP10_Msk & ((value) << NVM_NVMLBWP_LBWP10_Pos))
#define NVM_NVMLBWP_LBWP11_Pos                _U_(11)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP11_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP11_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP11(value)             (NVM_NVMLBWP_LBWP11_Msk & ((value) << NVM_NVMLBWP_LBWP11_Pos))
#define NVM_NVMLBWP_LBWP12_Pos                _U_(12)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP12_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP12_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP12(value)             (NVM_NVMLBWP_LBWP12_Msk & ((value) << NVM_NVMLBWP_LBWP12_Pos))
#define NVM_NVMLBWP_LBWP13_Pos                _U_(13)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP13_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP13_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP13(value)             (NVM_NVMLBWP_LBWP13_Msk & ((value) << NVM_NVMLBWP_LBWP13_Pos))
#define NVM_NVMLBWP_LBWP14_Pos                _U_(14)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP14_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP14_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP14(value)             (NVM_NVMLBWP_LBWP14_Msk & ((value) << NVM_NVMLBWP_LBWP14_Pos))
#define NVM_NVMLBWP_LBWP15_Pos                _U_(15)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP15_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP15_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP15(value)             (NVM_NVMLBWP_LBWP15_Msk & ((value) << NVM_NVMLBWP_LBWP15_Pos))
#define NVM_NVMLBWP_LBWP16_Pos                _U_(16)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP16_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP16_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP16(value)             (NVM_NVMLBWP_LBWP16_Msk & ((value) << NVM_NVMLBWP_LBWP16_Pos))
#define NVM_NVMLBWP_LBWP17_Pos                _U_(17)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP17_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP17_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP17(value)             (NVM_NVMLBWP_LBWP17_Msk & ((value) << NVM_NVMLBWP_LBWP17_Pos))
#define NVM_NVMLBWP_LBWP18_Pos                _U_(18)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP18_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP18_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP18(value)             (NVM_NVMLBWP_LBWP18_Msk & ((value) << NVM_NVMLBWP_LBWP18_Pos))
#define NVM_NVMLBWP_LBWP19_Pos                _U_(19)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP19_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP19_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP19(value)             (NVM_NVMLBWP_LBWP19_Msk & ((value) << NVM_NVMLBWP_LBWP19_Pos))
#define NVM_NVMLBWP_LBWP20_Pos                _U_(20)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP20_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP20_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP20(value)             (NVM_NVMLBWP_LBWP20_Msk & ((value) << NVM_NVMLBWP_LBWP20_Pos))
#define NVM_NVMLBWP_LBWP21_Pos                _U_(21)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP21_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP21_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP21(value)             (NVM_NVMLBWP_LBWP21_Msk & ((value) << NVM_NVMLBWP_LBWP21_Pos))
#define NVM_NVMLBWP_LBWP22_Pos                _U_(22)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP22_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP22_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP22(value)             (NVM_NVMLBWP_LBWP22_Msk & ((value) << NVM_NVMLBWP_LBWP22_Pos))
#define NVM_NVMLBWP_LBWP23_Pos                _U_(23)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_LBWP23_Msk                (_U_(0x1) << NVM_NVMLBWP_LBWP23_Pos)                 /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_LBWP23(value)             (NVM_NVMLBWP_LBWP23_Msk & ((value) << NVM_NVMLBWP_LBWP23_Pos))
#define NVM_NVMLBWP_ULOCK_Pos                 _U_(31)                                              /**< (NVM_NVMLBWP)  Position */
#define NVM_NVMLBWP_ULOCK_Msk                 (_U_(0x1) << NVM_NVMLBWP_ULOCK_Pos)                  /**< (NVM_NVMLBWP)  Mask */
#define NVM_NVMLBWP_ULOCK(value)              (NVM_NVMLBWP_ULOCK_Msk & ((value) << NVM_NVMLBWP_ULOCK_Pos))
#define NVM_NVMLBWP_Msk                       _U_(0x80FFFFFF)                                      /**< (NVM_NVMLBWP) Register Mask  */

#define NVM_NVMLBWP_LBWP_Pos                  _U_(0)                                               /**< (NVM_NVMLBWP Position)  */
#define NVM_NVMLBWP_LBWP_Msk                  (_U_(0xFFFFFF) << NVM_NVMLBWP_LBWP_Pos)              /**< (NVM_NVMLBWP Mask) LBWP */
#define NVM_NVMLBWP_LBWP(value)               (NVM_NVMLBWP_LBWP_Msk & ((value) << NVM_NVMLBWP_LBWP_Pos)) 

/* -------- NVM_NVMLBWPCLR : (NVM Offset: 0xF4) (R/W 32)  -------- */
#define NVM_NVMLBWPCLR_RESETVALUE             _U_(0x00)                                            /**<  (NVM_NVMLBWPCLR)   Reset Value */

#define NVM_NVMLBWPCLR_Msk                    _U_(0x00000000)                                      /**< (NVM_NVMLBWPCLR) Register Mask  */


/* -------- NVM_NVMLBWPSET : (NVM Offset: 0xF8) (R/W 32)  -------- */
#define NVM_NVMLBWPSET_RESETVALUE             _U_(0x00)                                            /**<  (NVM_NVMLBWPSET)   Reset Value */

#define NVM_NVMLBWPSET_Msk                    _U_(0x00000000)                                      /**< (NVM_NVMLBWPSET) Register Mask  */


/* -------- NVM_NVMLBWPINV : (NVM Offset: 0xFC) (R/W 32)  -------- */
#define NVM_NVMLBWPINV_RESETVALUE             _U_(0x00)                                            /**<  (NVM_NVMLBWPINV)   Reset Value */

#define NVM_NVMLBWPINV_Msk                    _U_(0x00000000)                                      /**< (NVM_NVMLBWPINV) Register Mask  */


/** \brief NVM register offsets definitions */
#define NVM_NVMCON_REG_OFST            (0x00)              /* (NVM_NVMCON)  Offset */
#define NVM_NVMCONCLR_REG_OFST         (0x04)              /* (NVM_NVMCONCLR)  Offset */
#define NVM_NVMCONSET_REG_OFST         (0x08)              /* (NVM_NVMCONSET)  Offset */
#define NVM_NVMCONINV_REG_OFST         (0x0C)              /* (NVM_NVMCONINV)  Offset */
#define NVM_NVMCON2_REG_OFST           (0x10)              /* (NVM_NVMCON2)  Offset */
#define NVM_NVMCON2CLR_REG_OFST        (0x14)              /* (NVM_NVMCON2CLR)  Offset */
#define NVM_NVMCON2SET_REG_OFST        (0x18)              /* (NVM_NVMCON2SET)  Offset */
#define NVM_NVMCON2INV_REG_OFST        (0x1C)              /* (NVM_NVMCON2INV)  Offset */
#define NVM_NVMKEY_REG_OFST            (0x20)              /* (NVM_NVMKEY)  Offset */
#define NVM_NVMADDR_REG_OFST           (0x30)              /* (NVM_NVMADDR)  Offset */
#define NVM_NVMDATA0_REG_OFST          (0x40)              /* (NVM_NVMDATA0)  Offset */
#define NVM_NVMDATA1_REG_OFST          (0x50)              /* (NVM_NVMDATA1)  Offset */
#define NVM_NVMDATA2_REG_OFST          (0x60)              /* (NVM_NVMDATA2)  Offset */
#define NVM_NVMDATA3_REG_OFST          (0x70)              /* (NVM_NVMDATA3)  Offset */
#define NVM_NVMSRCADDR_REG_OFST        (0xC0)              /* (NVM_NVMSRCADDR)  Offset */
#define NVM_NVMPWPLT_REG_OFST          (0xD0)              /* (NVM_NVMPWPLT)  Offset */
#define NVM_NVMPWPLTCLR_REG_OFST       (0xD4)              /* (NVM_NVMPWPLTCLR)  Offset */
#define NVM_NVMPWPLTSET_REG_OFST       (0xD8)              /* (NVM_NVMPWPLTSET)  Offset */
#define NVM_NVMPWPLTINV_REG_OFST       (0xDC)              /* (NVM_NVMPWPLTINV)  Offset */
#define NVM_NVMPWPGTE_REG_OFST         (0xE0)              /* (NVM_NVMPWPGTE)  Offset */
#define NVM_NVMPWPGTECLR_REG_OFST      (0xE4)              /* (NVM_NVMPWPGTECLR)  Offset */
#define NVM_NVMPWPGTESET_REG_OFST      (0xE8)              /* (NVM_NVMPWPGTESET)  Offset */
#define NVM_NVMPWPGTEINV_REG_OFST      (0xEC)              /* (NVM_NVMPWPGTEINV)  Offset */
#define NVM_NVMLBWP_REG_OFST           (0xF0)              /* (NVM_NVMLBWP)  Offset */
#define NVM_NVMLBWPCLR_REG_OFST        (0xF4)              /* (NVM_NVMLBWPCLR)  Offset */
#define NVM_NVMLBWPSET_REG_OFST        (0xF8)              /* (NVM_NVMLBWPSET)  Offset */
#define NVM_NVMLBWPINV_REG_OFST        (0xFC)              /* (NVM_NVMLBWPINV)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief NVM register API structure */
typedef struct
{  /* flash controller */
  __IO  uint32_t                       NVM_NVMCON;         /**< Offset: 0x00 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMCONCLR;      /**< Offset: 0x04 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMCONSET;      /**< Offset: 0x08 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMCONINV;      /**< Offset: 0x0C (R/W  32)  */
  __IO  uint32_t                       NVM_NVMCON2;        /**< Offset: 0x10 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMCON2CLR;     /**< Offset: 0x14 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMCON2SET;     /**< Offset: 0x18 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMCON2INV;     /**< Offset: 0x1C (R/W  32)  */
  __IO  uint32_t                       NVM_NVMKEY;         /**< Offset: 0x20 (R/W  32)  */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       NVM_NVMADDR;        /**< Offset: 0x30 (R/W  32)  */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       NVM_NVMDATA0;       /**< Offset: 0x40 (R/W  32)  */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       NVM_NVMDATA1;       /**< Offset: 0x50 (R/W  32)  */
  __I   uint8_t                        Reserved4[0x0C];
  __IO  uint32_t                       NVM_NVMDATA2;       /**< Offset: 0x60 (R/W  32)  */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       NVM_NVMDATA3;       /**< Offset: 0x70 (R/W  32)  */
  __I   uint8_t                        Reserved6[0x4C];
  __IO  uint32_t                       NVM_NVMSRCADDR;     /**< Offset: 0xC0 (R/W  32)  */
  __I   uint8_t                        Reserved7[0x0C];
  __IO  uint32_t                       NVM_NVMPWPLT;       /**< Offset: 0xD0 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMPWPLTCLR;    /**< Offset: 0xD4 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMPWPLTSET;    /**< Offset: 0xD8 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMPWPLTINV;    /**< Offset: 0xDC (R/W  32)  */
  __IO  uint32_t                       NVM_NVMPWPGTE;      /**< Offset: 0xE0 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMPWPGTECLR;   /**< Offset: 0xE4 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMPWPGTESET;   /**< Offset: 0xE8 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMPWPGTEINV;   /**< Offset: 0xEC (R/W  32)  */
  __IO  uint32_t                       NVM_NVMLBWP;        /**< Offset: 0xF0 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMLBWPCLR;     /**< Offset: 0xF4 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMLBWPSET;     /**< Offset: 0xF8 (R/W  32)  */
  __IO  uint32_t                       NVM_NVMLBWPINV;     /**< Offset: 0xFC (R/W  32)  */
} nvm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ35_NVM_COMPONENT_H_ */
