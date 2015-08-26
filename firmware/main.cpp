/*
 * main.cpp
 *
 *  Created on: 25 ���. 2015 �.
 *      Author: OmeZ
 */

#include "motor.h"
#include <avr/io.h>
#include <util/delay.h>

int main() {

	Motor::init();
	Motor::start();

	unsigned short i=0;
	while (true) {
		_delay_ms(100);
		i++;
		Motor::setTorque(i);
	}

	return 0;
}
