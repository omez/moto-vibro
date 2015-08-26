/*
 * main.cpp
 *
 *  Created on: 25 ���. 2015 �.
 *      Author: OmeZ
 */

#include "motor.h"
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#include "avr_hal/io.hpp"
#include "avr_hal/button.hpp"


void clbk() {
	PortB1::toggle();
}

typedef TButton<PortB2, clbk> Button;


volatile unsigned char volume_left = 0;
volatile unsigned char volume_right = 0;


// http://www.nongnu.org/avr-libc/user-manual/group__avr__interrupts.html
ISR(ADC_vect) {

	volume_left = ADCH;
	volume_right = ADCH;

}


int main() {


	PortB1::setDirWrite();
	PortB1::set();


//	DDRB |= (1 << PORTB1);
//	PORTB |= (1<<PORTB1);


//	cli();
//	ADMUX |= (0 << REFS1) | (1 << REFS0); // 5V power voltage reference
//	ADMUX |= (1 << ADLAR); // Left adjustment
//	ADMUX |= (0 << MUX3) | (0 << MUX2) | (1 << MUX1) | (1 << MUX0); // ADC3 measurment
//
//	ADCSRA |= (1 << ADIE); // enable interrupt
//	ADCSRB |= (0 << ADTS2) | (0 << ADTS1) | (0 << ADTS0); // Free running mode
//
//	ADCSRA |= (1 << ADEN); // enable ADC
//	ADCSRA |= (1 << ADSC); // start conversion
//	ADCSRA |= (1 << ADATE); // enable autostart
//	sei();

	//Motor::init();
	//Motor::start();

	while (true) {
		//Motor::setTorque(volume_left);
		Button::singleClick();
		_delay_ms(10);
	}

	return 0;
}
