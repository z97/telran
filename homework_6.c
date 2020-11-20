/*
 * homework_6.c
 *
 *  Created on: 20 Nov 2020
 *      Author: artem_s
 */

#include <stdio.h>

void isPositive(int a);
int getMin(int a, int b);
float salary(float hours, float wage, float bonus, float tax);
int getMax(int a, int b);
int getMin2(int a, int b);

int main(){
	isPositive(-8); // question 1

    int resInt = getMin(5, -2);
	printf("Minimum is %d \n", resInt); // question 2

	float resFloat = salary(182, 29.12, 20, 10);
	printf("Net salary is %.2f NIS \n", resFloat); // question 3

	resInt = getMin2(-9, 5);
	printf("Minimum is %d \n", resInt * -1); // question 4

	return 0;
}

void isPositive(int a){
	a >= 0 ? printf("Positive \n") : printf("Negative \n");
}

int getMin(int a, int b){
	return a < b ? a : b;
}

float salary(float hours, float wage, float bonus, float tax){
	float sal = hours * wage;
	float bns = sal * bonus / 100;
	float salWithBonus = sal + bns;
	return salWithBonus * ((100 - tax) / 100);
}

int getMax(int a, int b){
	return a > b ? a : b;
}

int getMin2(int a, int b){
	return getMax(-a, -b);
}
