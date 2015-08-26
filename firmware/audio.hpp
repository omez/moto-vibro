/*
 * audio.hpp
 *
 *  Created on: 25 ���. 2015 �.
 *      Author: OmeZ
 */

#ifndef AUDIO_HPP_
#define AUDIO_HPP_

#include <inttypes.h>



typedef struct {
	uint8_t right;
	uint8_t left;
} audio_t;


uint8_t get_audio_level();


#endif /* AUDIO_HPP_ */
