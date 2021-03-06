/*
 * driver_config.h
 *
 *  Created on: Aug 31, 2010
 *      Author: nxp28548
 */

#ifndef DRIVER_CONFIG_H_
#define DRIVER_CONFIG_H

#include <LPC11xx.h>

#define CONFIG_ENABLE_DRIVER_CRP						1
#define CONFIG_CRP_SETTING_NO_CRP						1

#define CONFIG_ENABLE_DRIVER_SSP						1

#define CONFIG_ENABLE_DRIVER_GPIO						1
#define CONFIG_GPIO_DEFAULT_PIOINT2_IRQHANDLER			1
#define CONFIG_ENABLE_DRIVER_ADC                        1
#define CONFIG_ADC_ENABLE_ADC_IRQHANDLER                1
#define CONFIG_ADC_DEFAULT_ADC_IRQHANDLER               1

#define CONFIG_ENABLE_DRIVER_UART                       1
#define CONFIG_UART_ENABLE_INTERRUPT                    1
#define CONFIG_UART_DEFAULT_UART_IRQHANDLER             1

#define CONFIG_ENABLE_DRIVER_I2C                        1
#define CONFIG_I2C_DEFAULT_I2C_IRQHANDLER				1

#define SMALLSIGNALS 1

/* DRIVER_CONFIG_H_ */
#endif
