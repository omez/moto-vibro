/*
 * led.hpp
 *
 *  Created on: 31 авг. 2015 г.
 *      Author: OmeZ
 */

#ifndef AVR_HAL_LED_HPP_
#define AVR_HAL_LED_HPP_

namespace AvrHal {

	template <> class Led {

	public:

		static void update();

	};


}

#endif /* AVR_HAL_LED_HPP_ */
