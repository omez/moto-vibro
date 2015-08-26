/*
 * button.hpp
 *
 *  Created on: 26 авг. 2015 г.
 *      Author: OmeZ
 */

#ifndef AVR_HAL_BUTTON_HPP_
#define AVR_HAL_BUTTON_HPP_

#include "port.hpp"

typedef void TButtonCallback(void);

template <class TPin, TButtonCallback singleClickCallback> class TButton {

public:

	static void singleClick() {
		singleClickCallback();
	}

	static void doubleClick() {}

	static void longClick() {}

};

#endif /* AVR_HAL_BUTTON_HPP_ */
