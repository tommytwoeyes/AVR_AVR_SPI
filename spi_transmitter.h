/**
 * File: spi_transmitter.h
 * Author: Tom Malone
 * 
 * Simple SPI usage between two Atmel ATmega328 microcontrollers.
 */

/* Register/Port/Pin Definitions */
#define SPI_DDR					DDRB
#define SPI_PORT				PORTB
#define SPI_PIN					PINB
#define SPI_SS					PB2			// Slave Select
#define SPI_MOSI				PB3			// Master Out/Slave In
#define SPI_MISO				PB4			// Master In/Slave Out
#define SPI_SCK					PB5			// Shift Clock

void init_SPI(void);
