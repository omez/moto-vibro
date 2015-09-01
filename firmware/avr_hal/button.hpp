/*
 * button.hpp
 *
 *  Created on: 26 авг. 2015 г.
 *      Author: OmeZ
 */

#ifndef AVR_HAL_BUTTON_HPP_
#define AVR_HAL_BUTTON_HPP_

#include "port.hpp"

namespace AvrHal {

//typedef void TButtonCallback(void);

//void TButtonCallbackNoop() {};

template <
	class TPin
	//TButtonCallback singleClickCallback = TButtonCallbackNoop,
	//TButtonCallback doubleClickCallback = TButtonCallbackNoop,
	//TButtonCallback longClickCallback = TButtonCallbackNoop
> class TButton {


private:

	char events[1];

public:

	static void update() {

	}

};



}

#endif /* AVR_HAL_BUTTON_HPP_ */
