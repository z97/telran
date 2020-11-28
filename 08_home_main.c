/*
 * 08_home_main.c
 *
 *  Created on: 27 Nov 2020
 *      Author: artem
 */

#include <stdio.h>

int timeOnBusRoute(int stops, int timePerStop, int city, float hour, int year);

int main(){
	int time = timeOnBusRoute(35, 7, 1, 7, 2012);
	printf("Total time of bus on route is %d min\n", time);
	return 0;
}
