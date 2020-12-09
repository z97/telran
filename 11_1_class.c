#include<stdio.h>

int sumDigit(int num);
int countDigit(int num);
int sumEvenDigit(int num);
float powXY(float x, int y);
float pow(float x, float y);

int main() {
	int res = sumDigit(5234517);
	printf("sum = %d\n", res); //expected 27
	res = countDigit(0);
	printf("count = %d\n", res);
	res = sumEvenDigit(5234517);
	printf("sum of even digits is %d\n", res);
	return 0;
}

int sumDigit(int num) {
	int res = 0;
	while (num != 0) {
		int x = num % 10;
		num /= 10;
		res += x;
	}
	return res;
}

int countDigit(int num) {
	int res = 0;
	do {
		res++;
		num /= 10;
	} while (num != 0);
	return res;
}

int sumEvenDigit(int num) {
	int res = 0;
	while (num != 0) {
		int x = num % 10;
		num /= 10;
		if (x % 2 == 0) {
			res += x;
		}
	}
	return res;
}

float powXY(float x, int y) {
	if (y >= 0) {
		return pow(x, y);
	} else {
		return 1 / pow(x, -y);
	}
}

float pow(float x, float y) {
	float a = 1;
	while (y > 0) {
		a *= x;
		y--;
	}
	return a;
}
