/**
 * File: spi_master.c
 * Author: Tom Malone
 * 
 * Simple SPI usage between two Atmel ATmega328 microcontrollers.
 */
 
#ifndef _AVR_SPI_MASTER_H
#define _AVR_SPI_MASTER_H 1

#include <avr/io.h>
#include "spi_master.h"

void init_SPI(void) {
	// Ensure SPI will work by turning off PRSPI bit in the 
	// Power Reduction Register
	PRR &= ~(1 << PRSPI);
	
	// Config SCK and MOSI for output
	SPI_DDR |= (1 << SPI_SCK) | (1 << SPI_MOSI);
	
	// Config SS as output 
	// (see datasheet and App Note AVR151 for setting SS as input in 
	// SPI multi-master mode. Things get more complicated for SS in 
	// that mode).
	SPI_DDR |= (1 << SPI_SS);
	
	// Enable SPI module
	SPCR |= (1 << SPE);
	
	// Configure MASTER mode
	SPCR |= (1 << MSTR);
	
	// Set SPI Shift Clock: div 16 is suitable for breadboards with 
	// longer connections.
	SPCR |= (1 << SPR0); 
}

#endif /* _AVR_SPI_MASTER_H */
