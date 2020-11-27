/*
 * skypework_6_2.c
 *
 *  Created on: 20 Nov 2020
 *      Author: artem_s
 */

#include <stdio.h>

float percent(float num, float p);
float salary(float hours, float wage, float bonus);

int main(){
	float res = percent(80, 20);
	printf("res = %.3f \n", res);
	res = salary(182, 29.12, 20);
	printf("salary wit bonus is %.2f NIS", res);
	return 0;
}

float percent(float num, float p){
	return num * p / 100;
}

float salary(float hours, float wage, float bonus){
	float sal = hours * wage;
	float bns = sal * bonus / 100;
	return sal + bns;
}
