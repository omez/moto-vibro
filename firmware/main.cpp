/*
 * main.cpp
 *
 *  Created on: 25 ���. 2015 �.
 *      Author: OmeZ
 */


#define UPDATE_DELAY_US 100			// Delay for updates


#include <avr/io.h>
#include "avr_hal/port.hpp"

#ifdef PORTB
MAKE_PORT(PORTB, DDRB, PINB, PortB, 'B')
typedef AvrHal::TPin<PortB, 0> PortB0;
typedef AvrHal::TPin<PortB, 1> PortB1;
typedef AvrHal::TPin<PortB, 2> PortB2;
typedef AvrHal::TPin<PortB, 3> PortB3;
typedef AvrHal::TPin<PortB, 4> PortB4;
typedef AvrHal::TPin<PortB, 5> PortB5;
typedef AvrHal::TPin<PortB, 6> PortB6;
typedef AvrHal::TPin<PortB, 7> PortB7;
#endif


//#include "motor.h"
#include <util/delay.h>
//#include <avr/interrupt.h>

//#include "avr_hal/io.hpp"
//#include "avr_hal/button.hpp"

//typedef AvrHal::TButton<PortB2> Button;

//void clbk() {
//	PortB1::toggle();
//}
//
//typedef TButton<PortB2, clbk> Button;


//volatile unsigned char volume_left = 0;
//volatile unsigned char volume_right = 0;


// http://www.nongnu.org/avr-libc/user-manual/group__avr__interrupts.html
//ISR(ADC_vect) {
//
//	volume_left = ADCH;
//	volume_right = ADCH;
//
//}


int main() {


	for (;;) {
		//Button::update();
		//Led::update();
		_delay_ms(UPDATE_DELAY_US);
	}

	return 0;
}
