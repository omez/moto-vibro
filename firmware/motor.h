/*
 * motor.h
 *
 *  Created on: 25 рту. 2015 у.
 *      Author: OmeZ
 */

#ifndef MOTOR_H_
#define MOTOR_H_


class Motor {

private:
	static unsigned char power;

public:

	static void init();

	static void start();

	static void stop();

	static void setPower(unsigned char power);

};

#endif /* MOTOR_H_ */
