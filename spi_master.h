/**
 * File: spi_master.h
 * Author: Tom Malone
 * 
 * Simple SPI usage between two Atmel ATmega328 microcontrollers.
 */

#include "spi_mnemonics.h"

/* SLAVE SELECT/DESELECT Macros */
// Signal initiation of communication cycle (Slave Select pin low)
#define SLAVE_SELECT	SPI_PORT &= ~(1 << SPI_SS); 
// Signal end of communication cycle (Slave Select pin high)
#define SLAVE_DESELECT	SPI_PORT |= (1 << SPI_SS);

void init_SPI(void);
