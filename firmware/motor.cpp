/*
 * motor.cpp
 *
 *  Created on: 25 ���. 2015 �.
 *      Author: OmeZ
 */

#include "motor.h"

#include <avr/io.h>
#include <avr/interrupt.h>

void Motor::init() {

	cli();

	DDRB |= (1 << PORTB0);
	PORTB &= ~(1 << PORTB0); // low level

	// Setup timer as FastPWM mode on OCR0A
	// set prescaler to clk / 256
	TCCR0B |= (1 << CS02) | (0<< CS01) | (0<< CS00);

	// Set weveform generation mode to
	// 0 1 1	Fast PWM
	TCCR0B |= (0 << WGM02);
	TCCR0A |= (1 << WGM01) | (1 << WGM00);

	sei();

	return;
}

void Motor::start() {
	// Connect PWM port
	TCCR0A |= (1 << COM0A1);
}

void Motor::stop() {
	// Disconnect PWM port
	TCCR0A &= ~(1 << COM0A1);
}

void Motor::setTorque(unsigned char power) {
	OCR0A = power;
}
