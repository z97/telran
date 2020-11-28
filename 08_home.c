/*
 * 08_home.c
 *
 *  Created on: 27 Nov 2020
 *      Author: artem
 */

#include <stdio.h>

int delay_city(int city){
	int res = -1;
	if(city == 1) //Tel Aviv
		res = 20;
	else if(city == 2) //Jerusalem
		res = 18;
	else if(city == 3) //Beer Sheva
		res = 12;
	else if(city == 4) //Ashdod
		res = 17;
	else if(city < 1 || city > 4)
		printf("Wrong number of city.\n");
	else
		printf("Nothing was input\n");
	return res;
}

int delay_traffic(float hour){
	int res = -1;
	if(hour >= 6 && hour <= 8)
		res = 25;
	else if(hour > 8 && hour <= 10)
		res = 30;
	else if(hour > 10 && hour <= 13)
		res = 15;
	else if(hour < 6 || hour > 13)
		printf("Wrong hour of bus route.\n");
	else
		printf("Nothing was input\n");
	return res;
}

int delay_year(int year){
	int res = -1;
	if(year >= 1995 && year < 2005)
		res = 10;
	else if(year >= 2005 && year <= 2010)
		res = 7;
	else if(year > 2010 && year <= 2020)
		res = 3;
	else if(year < 1995 || year > 2020)
		printf("Wrong year\n");
	else
		printf("Nothing was input\n");
	return res;
}

int timeOnBusRoute(int stops, int timePerStop, int city, float hour, int year){
	int dTime = stops * timePerStop;
	int dCity = delay_city(city);
	int dHour = delay_traffic(hour);
	int dYear = delay_year(year);
	return dTime + dCity + dHour + dYear;
}
