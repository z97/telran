#include<stdio.h>
int timeOnBusRoute(int stops, int timePerStop, int city, float hour, int year);
int timeCity(int city);
int trafficHour(float hour);
int timeBusYear(int year);

int main() {
	int time = timeOnBusRoute(30, 7, 1, 7, 2005);
	printf("total time = %d", time);
	return 0;
}

int timeOnBusRoute(int stops, int timePerStop, int city, float hour, int year) {
	return stops * timePerStop + timeCity(city) + trafficHour(hour)
			+ timeBusYear(year);
}
int timeBusYear(int year) {
	if (year > 1995 && year < 2005) {
		return 10;
	}
	if (year >= 2005 && year <= 2010) {
		return 7;
	}
	if (year > 2010 && year <= 2019) {
		return 5;
	}
	printf("Wrong year\n");
	return -1;
}

int trafficHour(float hour) {
	if (hour >= 6 && hour <= 8) {
		return 25;
	}
	if (hour > 8 && hour < 10) {
		return 30;
	}
	if (hour > 10 && hour < 13) {
		return 15;
	}
	printf("Wrong hour\n");
	return -1;
}

int timeCity(int city) {
	switch(city){
	case 1:
		return 20;
	case 2:
		return 18;
	case 3:
		return 12;
	case 4:
		return 17;
	default:
		printf("Wrong number of city\n");
		return -1;
	}
//	if (city == 1) {
//		return 20;
//	}
//	if (city == 2) {
//		return 18;
//	}
//	if (city == 3) {
//		return 12;
//	}
//	if (city == 4) {
//		return 17;
//	}
//	printf("Wrong number of city\n");
//	return -1;
