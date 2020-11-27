/*
 * homework_7.c
 *
 *  Created on: 25 Nov 2020
 *      Author: artem
 */

#include<stdio.h>

void fan(int mode);
void myAge(int age);
void medTest(int pulse, int age);

int main(){
	fan(0); // set speed of fan(0 is off)
	myAge(25); // set your age in integer number
	medTest(115, 25); // first number is your pulse in beats per minute, second number is you age in integer number
	return 0;
}
void medTest(int pulse, int age){
	if((age > 0 && age < 35 && pulse < 120) || (age >= 35 && age <= 55 && pulse < 110) || (age > 55 && age <= 100 && pulse < 100)){
		printf("you are healthy");
	}else{
		printf("you have problem with your heath");
	}
}

void myAge(int age){
	if(age >= 0 && age < 18){
		printf("Child\n");
	}
	if (age >= 18 && age < 65){
		printf("Adult\n");
	}
	if (age >= 65){
		printf("Senior\n");
	}
}

void fan(int mode){
	if(mode == 0){
		printf("switch off\n");
	}
	if(mode == 1){
		printf("speed 1\n");
	}
	if(mode == 2){
		printf("speed 2\n");
	}
	if (mode == 3){
		printf("speed 3\n");
	}
}
