/*
 * motor.cpp
 *
 *  Created on: 25 рту. 2015 у.
 *      Author: OmeZ
 */

#include "motor.h"

#include <avr/io.h>


unsigned char Motor::power = 255;

void Motor::init() {
	//setPower(255);

	DDRB |= (1 << PORTB0);
	PORTB &= ~(1 << PORTB0);
	PORTB |= (1 << PORTB0);


	TCCR0A |= (1 << COM0A0);
	TCCR0A |= (1 << WGM01) | (1<< WGM00);

	OCR0A = 0x0F;

	return;
}

void Motor::start() {}

void Motor::stop() {}

void Motor::setPower(unsigned char power) {}
