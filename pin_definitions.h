/**
 * File: pin_definitions.h
 * Author: Tom Malone
 * 
 * Contains Register/Port/Pin mnemonics for ATmega168 & ATmega328 
 * microcontrollers, SPI module.
 * 
 * These definitions should be modified in accordance with the datasheet 
 * for the microcontroller in use.
 */

/* Register/Port/Pin Definitions */
#define SPI_DDR					DDRB
#define SPI_PORT				PORTB
#define SPI_PIN					PINB
#define SPI_SS					PB2			// Slave Select
#define SPI_MOSI				PB3			// Master Out/Slave In
#define SPI_MISO				PB4			// Master In/Slave Out
#define SPI_SCK					PB5			// Shift Clock
