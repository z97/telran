#include <stdio.h>

int numberSum(int number);
int XpowerY(int x, int y);

int main(){
	int a = 5;
	do{
		printf("a = %d\n", a);
		a--;
	}while(a > 0);
	int b = numberSum(7);
	printf("%d\n", b);
	return 0;
}

int numberSum(int number){
	int sum = 0;
	while(number > 0){
		sum = sum + number;
		number--;
	}
	return sum;
}

int XpowerY(int x, int y){
	int res = 1;
	while(y > 0){
		res = res * x;
		y--;
	}
	return res;
}
/*
 * number = 5
 * 5 + 4 + 3 + 2 + 1 = 15
 *
 *
 *
 *
 * res = 1
 * x = 2 y = 4
 */
