#pragma once

#include "hal_platform_nrf52840_config.h"
#include "platforms.h"

#define HAL_PLATFORM_NCP (1)
#define HAL_PLATFORM_NCP_AT (1)
#define HAL_PLATFORM_CELLULAR (1)
#define HAL_PLATFORM_CELLULAR_SERIAL (HAL_USART_SERIAL2)
#define HAL_PLATFORM_SETUP_BUTTON_UX (1)
#define HAL_PLATFORM_SPI_NUM (2)
#define HAL_PLATFORM_I2C_NUM (3)
#define HAL_PLATFORM_USART_NUM (2)

#define HAL_PLATFORM_PMIC_BQ24195 (1)
#define HAL_PLATFORM_PMIC_BQ24195_I2C (HAL_I2C_INTERFACE2)
#define HAL_PLATFORM_PMIC_INT_PIN_PRESENT (1)
#define HAL_PLATFORM_ETHERNET_FEATHERWING_SPI_CLOCK (16000000)
#define HAL_PLATFORM_FUELGAUGE_MAX17043 (1)
#define HAL_PLATFORM_FUELGAUGE_MAX17043_I2C (HAL_I2C_INTERFACE2)
#define HAL_PLATFORM_HW_FORM_FACTOR_SOM (1)
#define HAL_PLATFORM_POWER_MANAGEMENT (1)
#define HAL_PLATFORM_POWER_MANAGEMENT_OPTIONAL (0)
#define HAL_PLATFORM_PMIC_BQ24195_FAULT_COUNT_THRESHOLD (4)
#define HAL_PLATFORM_RADIO_ANTENNA_INTERNAL (1)
#define HAL_PLATFORM_RADIO_ANTENNA_EXTERNAL (1)

#define HAL_PLATFORM_IO_EXTENSION (1)
#define HAL_PLATFORM_MCP23S17 (1)
#define HAL_PLATFORM_MCP23S17_SPI (HAL_SPI_INTERFACE2)
#define HAL_PLATFORM_MCP23S17_SPI_CLOCK (16000000)
#define HAL_PLATFORM_DEMUX (1)

#define HAL_PLATFORM_EXTERNAL_RTC (1)
#define HAL_PLATFORM_EXTERNAL_RTC_I2C (HAL_I2C_INTERFACE2)
#define HAL_PLATFORM_EXTERNAL_RTC_I2C_ADDR (0x69)
#define HAL_PLATFORM_EXTERNAL_RTC_CAL_XT (-45) // This value should be calculated and averaged at 25 celsius degrees during manufacturing

#define HAL_PLATFORM_I2C3 (1)

#define HAL_PLATFORM_FLASH_MX25R6435FZNIL0 (1)

#define PRODUCT_SERIES "boron"
