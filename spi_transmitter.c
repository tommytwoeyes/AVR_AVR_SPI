/**
 * File: spi_transmitter.c
 * Author: Tom Malone
 * 
 * Simple SPI usage between two Atmel ATmega328 microcontrollers.
 */
 
#ifndef _AVR_SPI_XMIT_H
#define _AVR_SPI_XMIT_H 1

#include <avr/io.h>
#include "spi_transmitter.h"

void init_SPI(void) {
	// Enable SPI by turning off PRSPI bit in Power Reduction Register
	PRR &= ~(1 << PRSPI);
	
	// Config SCK and MOSI for output
	SPI_DDR |= (1 << SPI_SCK) | (1 << SPI_MOSI);
	
	// Config SS as output 
	// (see datasheet and App Note AVR151 for setting SS as input in 
	// SPI multi-master mode. Things get more complicated for SS in 
	// that mode).
	SPI_DDR |= (1 << SPI_SS);
}

#endif /* _AVR_SPI_XMIT_H */
