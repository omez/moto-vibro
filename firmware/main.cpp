/*
 * main.cpp
 *
 *  Created on: 25 рту. 2015 у.
 *      Author: OmeZ
 */


#include "motor.h"
#include <avr/io.h>

int main() {
	DDRB |= (1 << PORTB0);
		PORTB &= ~(1 << PORTB0);
		PORTB |= (1 << PORTB0);

	Motor::init();



	while (true) {}

	return 0;
}
