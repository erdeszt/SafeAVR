#ifndef SAFEAVR_CONFIG_H
#define SAFEAVR_CONFIG_H

#include <safeavr/core/types.h>

#define SAFEAVR_FEATURE_GPIO 1
#define SAFEAVR_FEATURE_USART 1
#define SAFEAVR_FEATURE_TIMER 1
#define SAFEAVR_FEATURE_ADC 1

const u16 SAFEAVR_USART_TX_MAX_STRING_SIZE = 128;
const u16 SAFEAVR_USART_TX_MAX_WAIT = 10000;
const u16 SAFEAVR_USART_RX_MAX_WAIT = 10000;
const u16 SAFEAVR_TIMER_MAX_WAIT = 50000;
const u16 SAFEAVR_TIMER_MAX_DELAY = 10000;

#endif /* SAFEAVR_CONFIG_H */
