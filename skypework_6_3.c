/*
 * skypework_6_3.c
 *
 *  Created on: 20 Nov 2020
 *      Author: artem_s
 */

//operators

#include<stdio.h>

void isEquals(int a, int b);
int getMax(int a, int b);

int main(){
	int a = 2, b = 3, c = 0;
	c = a % b;
	printf("c = %d\n", c);

	a++;
	printf("a = %d \n", a);

	a--;
	printf("a = %d \n", a);

	a = 4;
	b = 6;
	c = a == b;
	printf("c = %d \n", c);

	c = a != b;
	printf("c = %d \n", c);

	c = a < b;
	printf("c = %d \n", c);

	c = a > b;
	printf("c = %d \n", c);

	//conditional operator
	a = 6;
	b = 8;

	a > b ? printf("Hello \n") : printf("Bye \n");

	c = a == b ? 6: 7;
	printf("c = %d \n", c);

	c = a !=b  ? 6 : 7;
	printf("c = %d \n", c);

	isEquals(7, 7);

	c = getMax(4, 5);
	printf("Max = %d \n", c);

	return 0;
}

void isEquals(int a, int b){
	a == b ? printf("Equals\n") : printf("Not Equals\n");
}

int getMax(int a, int b){
	return a > b ? a : b;
}



/*
 * Homework :
 *
 * 1. void is Positive(int number)
 * if number equals or more than 0
 * print "Positive", if not "Negative"
 *
 * 2. int getMin(int a, int b)
 * return min from 2 numbers
 *
 * 3. float salary(float hours, float wage, float bonus, float tax)
 * hours - hours in month(182)
 * wage - rate in hours(29.12)
 * bonus - bonus in percents(15)
 * tax - tax(%) after bonus + salary before bonus
 *
 * 4. int getMin(int a, int b)
 * dont use conditional operator but u can use fubction getMax
 *
 *
 */
