/*
 * ifElsePlay.c
 *
 *  Created on: Nov 24, 2020
 *      Author: edward
 */

#include<stdio.h>
void checkHeight(int height);
float getMax(float a, float b);
void checkArmy(int age);
void taxi(int driverCode);
float calculator(float a, float b, int oper);

int main() {
	int height = 198;
	checkHeight(height);
	height = 185;
	checkHeight(height);
	float res = getMax(7.5, 8.3);
	printf("max = %f\n", res);
	checkArmy(15);
	taxi(20);
	res = calculator(3, 5, 5);
	printf("result = %f\n", res);
	return 0;
}

float calculator(float a, float b, int oper) {
	if (oper == 1) {
		return a + b;
	}
	if (oper == 2) {
		return a - b;
	}
	if (oper == 3) {
		return a * b;
	}
	if (oper == 4) {
		return a / b;
	}
	printf("Wrong operation\n");
	return 0;
}

void taxi(int driverCode) {
	printf("\n");
	if (driverCode == 1) {
		printf("Haim go!\n");
	}
	if (driverCode == 2) {
		printf("Peter go!\n");
	}
	if (driverCode == 3) {
		printf("Tigran go!\n");
	}
	if (driverCode == 4) {
		printf("Mary go!\n");
	}
	printf("\n");
}

void checkArmy(int age) {
	if (age >= 18 && age < 44) {
		printf("Go to army\n");
	} else {
		printf("Go rest\n");
	}
}

float getMax(float a, float b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

void checkHeight(int height) {
	if (height > 190) {
		printf("I am very tall\n");
		printf("I want additional meal\n");
	} else {
		printf("I am ordinary\n");
	}
	printf("My height = %d\n\n", height);
}
