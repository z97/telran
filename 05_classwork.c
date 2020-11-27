/*
 * classwork_5.c
 *
 *  Created on: 18 Nov 2020
 *      Author: artem_s
 */

#include<stdio.h>

float circleLength(float radius);
float housePrice(float area, float price);
int reminder(int a, int b);

int main() {
	float length = circleLength(10);
	printf("Length of circle = %.2f\n", length);
	float res = housePrice(10, 15);
	printf("Total price = %.2f\n", res);
	int rem = reminder(17, 5);
	printf("reminder = %d\n", rem);
	return 0;
}

float circleLength(float radius) {
	float pi = 3.14;
	float length = 2 * pi * radius;
	return length;
}

float housePrice(float area, float price) {
	float res = area * price;
	return res;
}

int reminder(int a, int b) {
	return a % b;
}
