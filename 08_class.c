/*
 * classwork_8_2.c
 *
 *  Created on: 27 Nov 2020
 *      Author: artem
 */
#include <stdio.h>
int delay_transport(int transport){
	int res = -1;
	if(transport == 1)
		res = 14;
	else if(transport == 2)
		res = 12;
	else if(transport == 3)
		res = 7;
	else if(transport == 4)
		res = 4;
	else
		printf("Wrong transport\n");
	return res;
}

int delay_traffic(float hour){
	int res = -1;
	if(hour >= 6 && hour < 8)
		res = 9;
	else if(hour >= 8 && hour <= 10)
		res = 14;
	else if(hour > 10 && hour <= 12)
		res = 7;
	else
		printf("Error: wrong hour\n");
	return res;
}

int pure_time(int transport){
	int res = -1;
	if (transport == 1)
		res = 35;
	else if (transport == 2)
		res = 32;
	else if (transport == 3)
		res = 25;
	else if (transport == 4)
		res = 22;
	else
		printf("Error: wrong transport\n");
	return res;
}

int timeToWork(int transport, float hour){
	int pTime = pure_time(transport);
	int dTrafic = delay_traffic(hour);
	int dTransport = delay_transport(transport);
	return pTime + dTrafic + dTransport;
}
