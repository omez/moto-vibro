/*
 * port.hpp
 *
 * Inspired by http://easyelectronics.ru/rabota-s-portami-vvoda-vyvoda-mikrokontrollerov-na-si.html
 *
 * Author: OmeZ
 */

#ifndef AVR_HAL_PORT_HPP_
#define AVR_HAL_PORT_HPP_

#include <inttypes.h>

#define MAKE_PORT(portName, ddrName, pinName, className, ID) \
class className{\
public:\
	typedef uint8_t DataT;\
private:\
	static volatile DataT &data()\
	{\
		return portName;\
	}\
	static volatile DataT &dir()\
	{\
		return ddrName;\
	}\
	static volatile DataT &pin()\
	{\
		return pinName;\
	}\
public:\
	static void write(DataT value)\
	{\
		data() = value;\
	}\
	static void clearAndSet(DataT clearMask, DataT value)\
	{\
		data() = (data() & ~clearMask) | value;\
	}\
	static DataT read()\
	{\
		return data();\
	}\
	static void dirWrite(DataT value)\
	{\
		dir() = value;\
	}\
	static DataT dirRead()\
	{\
		return dir();\
	}\
	static void set(DataT value)\
	{\
		data() |= value;\
	}\
	static void clear(DataT value)\
	{\
		data() &= ~value;\
	}\
	static void toggle(DataT value)\
	{\
		data() ^= value;\
	}\
	static void dirSet(DataT value)\
	{\
		dir() |= value;\
	}\
	static void dirClear(DataT value)\
	{\
		dir() &= ~value;\
	}\
	static void dirToggle(DataT value)\
	{\
		dir() ^= value;\
	}\
	static DataT pinRead()\
	{\
		return pin();\
	}\
	enum{Id = ID};\
	enum{Width=sizeof(DataT)*8};\
};


template<class PORT, uint8_t PIN> class TPin {
public:
	typedef PORT Port;
	enum {
		Number = PIN
	};
	static void set() {
		PORT::set(1 << PIN);
	}
	static void set(uint8_t val) {
		if (val)
			set();
		else
			clear();
	}
	static void setDir(uint8_t val) {
		if (val)
			setDirWrite();
		else
			setDirRead();
	}
	static void clear() {
		PORT::clear(1 << PIN);
	}
	static void toggle() {
		PORT::toggle(1 << PIN);
	}
	static void setDirRead() {
		PORT::dirClear(1 << PIN);
	}
	static void setDirWrite() {
		PORT::dirSet(1 << PIN);
	}
	static uint8_t isSet() {
		return PORT::pinRead() & (uint8_t) (1 << PIN);
	}
};

#endif /* AVR_HAL_PORT_HPP_ */
