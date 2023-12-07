/***************************************************************************
 ***************************************************************************
 ***                                                                     ***
 ***    Workfile:   ccn_crc.h                                            ***
 ***    Revision:   0.1                                                  ***
 ***    Archive:                                                         ***
 ***    Author:     Ni Jian                                              ***
 ***    Date:       Sep 30 2014                                          ***
 ***                                                                     ***
 ***    CARRIER CONFIDENTIAL & PROPRIETARY                               ***
 ***    COPYRIGHT, CARRIER CORPORATION, 2014                             ***
 ***    UNPUBLISHED WORK                                                 ***
 ***    ALL RIGHTS RESERVED                                              ***
 ***                                                                     ***
 ***************************************************************************
 ***                                                                     ***
 ***************************************************************************
 ***                                                                     ***
 ***  Project:           NSC BOOTLOADER SOFTWARE                         ***
 ***                                                                     ***
 ***  Filename:          ccn_crc.h                                       ***
 ***                                                                     ***
 ***  Task/Routine(s):                                                   ***
 ***                                                                     ***
 ***  Author:            Ni Jian                                         ***
 ***                                                                     ***
 ***  Description:       NSC boot CCN CRC driver header                  ***
 ***                                                                     ***
 ***************************************************************************
 ***                                                                     ***
 ***                                                                     ***
 ***            Ni Jian            xx/xx/xx         ver x.xx             ***
 ***     ---------------------     --------        ----------            ***
 ***          . original          09/30/2014          0.1                ***
 ***                                                                     ***
 ***                                                                     ***
 ***************************************************************************
 **************************************************************************/

#ifndef _CCN_CRC_H_
#define _CCN_CRC_H_

//extern const uint16_t crc_table_1[];
//extern const uint16_t crc_table_2[];
extern const uint16_t crc16_table[];
uint16_t ccn_crc_calc(uint8_t *data_pointer, uint16_t);

extern const uint8_t CRC_L[];
extern const uint8_t CRC_H[];
uint16_t modbus_crc_calc(uint8_t *DataArray, uint16_t);
uint8_t xor_calc(uint8_t *DataArray, uint16_t);
//uint8_t crc8_calc(uint8_t *buffer, uint16_t);

#endif /* _CCN_CRC_H_ */
