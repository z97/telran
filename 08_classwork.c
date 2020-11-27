/*
 * 08_classwork.c
 *
 *  Created on: 27 Nov 2020
 *      Author: artem
 */

/*
 * Bus - 1, train - 2, car - 3, bike - 4
 *
 * 1. pure time
 * -------------
 * bus(1) - 35 min
 * train(2) - 32 min
 * car(3) - 25 min
 * bike(4) - 22 min
 *
 * 2. delay traffic
 * -------------
 * [6] - 8 - 9 min
 * [8] - [10] - 14 min
 * 10 - [12] - 7 min
 *
 * 3. delay transport
 * -------------
 * bus(1) - 14 min
 * train(2) - 12 min
 * car(3) - 7 min
 * bike(4)- 4 min
 *
 * 4. time_to_work
 */

#include <stdio.h>

int timeToWork(int transport, float hour);

int main(){
	int time = timeToWork(2, 7.5);
	printf("Total time: %d min\n", time);
	return 0;
}
