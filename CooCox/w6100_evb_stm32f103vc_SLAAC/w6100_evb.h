#ifndef __W6100_EVB_H_
#define __W6100_EVB_H_

#include "stm32f10x_conf.h"

#define PRINTF_USART			USART1
#define PRINTF_USART_RCC		RCC_APB2Periph_USART1
#define PRINTF_USART_TX_PIN		GPIO_Pin_9
#define PRINTF_USART_TX_PORT	GPIOA
#define PRINTF_USART_RX_PIN		GPIO_Pin_10
#define PRINTF_USART_RX_PORT	GPIOA

#define W6100_GPIO_RCC			RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOE | RCC_APB2Periph_GPIOF
#define W6100_RESET_PIN			GPIO_Pin_8
#define W6100_RESET_PORT		GPIOD
//#define W6100_CS_PIN			GPIO_Pin_12
//#define W6100_CS_PORT			GPIOB
#define W6100_CS_PIN			GPIO_Pin_7
#define W6100_CS_PORT			GPIOD

#define W6100_INT_PIN			GPIO_Pin_9
#define W6100_INT_PORT			GPIOD

#define W6100_SPI				SPI2
#define W6100_SPI_RCC			RCC_APB1Periph_SPI2
#define W6100_SPI_PORT			GPIOB


#define W6100_SPI_SCK_PIN		GPIO_Pin_13  //
//#define W6100_SPI_MOSI_PIN		GPIO_Pin_15
//#define W6100_SPI_MISO_PIN		GPIO_Pin_14

#define W6100_SPI_MOSI_PIN		GPIO_Pin_14
#define W6100_SPI_MISO_PIN		GPIO_Pin_15
#endif