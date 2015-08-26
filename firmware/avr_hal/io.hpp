/*
 * io.hpp
 *
 *  Created on: 26 авг. 2015 г.
 *      Author: OmeZ
 */

#ifndef AVR_HAL_IO_HPP_
#define AVR_HAL_IO_HPP_

#include <avr/io.h>
#include "port.hpp"

/**
 * Port definitions
 */
#ifdef PORTA
MAKE_PORT(PORTA, DDRA, PINA, PortA, 'A')
typedef TPin<PortA, 0> PortA0;
typedef TPin<PortA, 1> PortA1;
typedef TPin<PortA, 2> PortA2;
typedef TPin<PortA, 3> PortA3;
typedef TPin<PortA, 4> PortA4;
typedef TPin<PortA, 5> PortA5;
typedef TPin<PortA, 6> PortA6;
typedef TPin<PortA, 7> PortA7;
#endif

#ifdef PORTB
MAKE_PORT(PORTB, DDRB, PINB, PortB, 'B')
typedef TPin<PortB, 0> PortB0;
typedef TPin<PortB, 1> PortB1;
typedef TPin<PortB, 2> PortB2;
typedef TPin<PortB, 3> PortB3;
typedef TPin<PortB, 4> PortB4;
typedef TPin<PortB, 5> PortB5;
typedef TPin<PortB, 6> PortB6;
typedef TPin<PortB, 7> PortB7;
#endif

#ifdef PORTC
MAKE_PORT(PORTC, DDRC, PINC, PortC, 'C')
typedef TPin<PortB, 0> PortB0;
typedef TPin<PortB, 1> PortB1;
typedef TPin<PortB, 2> PortB2;
typedef TPin<PortB, 3> PortB3;
typedef TPin<PortB, 4> PortB4;
typedef TPin<PortB, 5> PortB5;
typedef TPin<PortB, 6> PortB6;
typedef TPin<PortB, 7> PortB7;
#endif

#endif /* AVR_HAL_IO_HPP_ */
