/**
 * File: spi_master.h
 * Author: Tom Malone
 * 
 * Simple SPI usage between two Atmel ATmega328 microcontrollers.
 */

#include "spi_mnemonics.h"

/* Macros */
#define MASTER_MODE()		(SPCR |= (1 << MSTR);
#define SLAVE_MODE()		(SPCR &= ~(1 << MSTR);

// Signal initiation of communication cycle (Slave Select pin low)
#define SLAVE_SELECT()		SPI_PORT &= ~(1 << SPI_SS); 

// Signal end of communication cycle (Slave Select pin high)
#define SLAVE_DESELECT()	SPI_PORT |= (1 << SPI_SS);

void init_SPI(void);
