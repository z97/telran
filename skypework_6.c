/*
 * skypework_6.c
 *
 *  Created on: 20 Nov 2020
 *      Author: artem_s
 */

#include<stdio.h>

float mult(float a, float b);
float salary(float hours, float wage);
float exchange(float shek, float rate);

int main(){
	float res = mult(5.5, 2.2);
	printf("res = %f\n", res);

	res = salary(182, 29.12);
	printf("Salary: %.2f NIS \n", res);

	res = exchange(1000, 3.35);
	printf("In dollars: %.2f \n", res);

	return 0;
}

float mult(float a, float b){
	return a * b;
}

float salary(float hours, float wage){
	return hours * wage;
}

float exchange(float shek, float rate){
	return shek / rate;
}
