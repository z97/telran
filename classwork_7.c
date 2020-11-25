/*
 * ternary.c
 *
 *  Created on: Nov 24, 2020
 *      Author: edward
 */

#include<stdio.h>
void isPositive(int a);
float getMin(float a, float b);
float getMax(float a, float b);

int main() {
	isPositive(15);
	isPositive(-20);
	isPositive(0);
	float min = getMin(5, 7);
	printf("min = %f\n", min);
	return 0;
}

float getMax(float a, float b) {
	return a > b ? a : b;
}

float getMin(float a, float b) {
	//return a < b ? a : b;
	//return a + b - getMax(a,b);
	//return -getMax(-a, -b);
	return (a < b) * a + (b <= a) * b;
}

void isPositive(int a) {
	a >= 0 ? printf("Positive\n") : printf("Negative\n");
}
