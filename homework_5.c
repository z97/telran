/*
 * homework_5.c
 *
 *  Created on: 18 Nov 2020
 *      Author: artem_s
 */

#include<stdio.h>

float percent(int num, int per);
float salary(int hour, float wage, int bonus); // bonus is integer percent eg 25
float cash(int kg, int price, int discount); // discount is integer percent eg 35

int main(){
	int per = 20;
	int num = 150;
	float res_percent = percent(num, per);
	printf("%.1f is %d %% from %d\n", res_percent, per, num);

	float res_salary = salary(182, 29, 30);
	printf("Total salary is %.2f nis\n", res_salary);

	int kg = 4;
	int price = 9;
	int discount = 15;
	float res_cash = cash(kg, price, discount);
	printf("Total price of %d kg by %d nis/kg with discount of %d %% is %.2f nis\n", kg, price, discount, res_cash);

	return 0;
}

float percent(int num, int per){
	float res;
	return res = num / 100.0 * per;
}

float salary(int hour, float wage, int bonus){
	float res;
	return res = hour * wage * (1.0 + (bonus / 100.0));
}

float cash(int kg, int price, int discount){
	float res;
	return res = price * kg * (1.0 - discount / 100.0);
}
