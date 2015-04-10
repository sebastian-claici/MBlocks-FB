/*
 * defines.h
 *
 * Created: 11/6/2014 11:32:00 AM
 *  Author: kwgilpin
 */ 


#ifndef DEFINES_H_
#define DEFINES_H_


#define I2C_REGISTER_ADDR_LEDS_TOP					0x00
#define I2C_REGISTER_ADDR_LEDS_BOTTOM				0x01

#define I2C_REGISTER_ADDR_AMBIENT_LIGHT				0x10

/* */
#define I2C_REGISTER_ADDR_IR_LEDS_MANUAL_CONTROL	0x20

/* Multi-byte register to which data to be transmitted should be written */
#define I2C_REGISTER_ADDR_TX_BUF					0x30
/* Read only register indicating how many bytes remain to be transmitted */
#define I2C_REGISTER_ADDR_TX_COUNT					0x31
/* Select which IR LEDs are used for transmission */
#define I2C_REGISTER_ADDR_TX_LED_SELECT				0x33

#define I2C_REGISTER_ADDR_RX_BUF					0x40
#define I2C_REGISTER_ADDR_RX_COUNT					0x41
#define I2C_REGISTER_ADDR_RX_FLUSH					0x42
#define I2C_REGISTER_ADDR_RX_ENABLE					0x43

#define I2C_REGISTER_ADDR_SLEEP						0x50


#define DDR_LED_RED				DDRA
#define PORT_LED_RED			PORTA
#define PIN_LED_RED				PINA
#define PIN_NUMBER_LED_RED		1

#define DDR_LED_GREEN			DDRC
#define PORT_LED_GREEN			PORTC
#define PIN_LED_GREEN			PINC
#define PIN_NUMBER_LED_GREEN	5

#define DDR_LED_BLUE			DDRA
#define PORT_LED_BLUE			PORTA
#define PIN_LED_BLUE			PINA
#define PIN_NUMBER_LED_BLUE		0

#define DDR_LED_ANODE1			DDRC
#define PORT_LED_ANODE1			PORTC
#define PIN_LED_ANODE1			PINC
#define PIN_NUMBER_LED_ANODE1	4

#define DDR_LED_ANODE2			DDRC
#define PORT_LED_ANODE2			PORTC
#define PIN_LED_ANODE2			PINC
#define PIN_NUMBER_LED_ANODE2	2

#define DDR_IRLED1_ANODE		DDRA
#define PORT_IRLED1_ANODE		PORTA
#define PIN_IRLED1_ANODE		PINA
#define PIN_NUMBER_IRLED1_ANODE	4

#define DDR_IRLED2_ANODE		DDRA
#define PORT_IRLED2_ANODE		PORTA
#define PIN_IRLED2_ANODE		PINA
#define PIN_NUMBER_IRLED2_ANODE	5

#define DDR_IRLED3_ANODE		DDRB
#define PORT_IRLED3_ANODE		PORTB
#define PIN_IRLED3_ANODE		PINB
#define PIN_NUMBER_IRLED3_ANODE	3

#define DDR_IRLED4_ANODE		DDRA
#define PORT_IRLED4_ANODE		PORTA
#define PIN_IRLED4_ANODE		PINA
#define PIN_NUMBER_IRLED4_ANODE	2

#define DDR_SENSOREN			DDRA
#define PORT_SENSOREN			PORTA
#define PIN_SENSOREN			PINA
#define PIN_NUMBER_SENSOREN		3

#endif /* DEFINES_H_ */