#include <stdio.h>

void printEvens(int number);
int factorial(int number);
float XpowerY(int x, int y);

int main(){
	printEvens(10);//Enter positive integer number to receive even numbers.
	int fact = factorial(6);//Enter positive integer number for factorial it.
	printf("%d\n", fact);
	float res = XpowerY(-4, -7);//Enter first integer number multiply it (second number) times on itself.
	printf("%f\n", res);
	return 0;
}

int factorial(int number){
	int fact = 1;
	while(number > 0){
		fact =  fact * number;
		number--;
	}
	return fact;
}

void printEvens(int number){
	while(number > 0){
		if(number % 2 == 0){
			printf("%d\n ", number);
		}
		number--;
	}
}
