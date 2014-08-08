/**
 * File: spi_transmitter.c
 * Author: Tom Malone
 * 
 * Simple SPI usage between two Atmel ATmega328 microcontrollers.
 */
 
#ifndef _AVR_SPI_XMIT_H
#define _AVR_SPI_XMIT_H 1

#include <avr/io.h>


void init_SPI(void) {
	// Enable SPI by turning off PRSPI bit in Power Reduction Register
	PRR &= ~(1 << PRSPI);
}

#endif /* _AVR_SPI_XMIT_H */
