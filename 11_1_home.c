#include <stdio.h>

int sumOddDidits(int num); //Answer 1
void printReversNumber(int num); //Answer 2
int getReverseNumber(int num); //Answer 3
void luckyTicket(int num); //Answer 4
//Tools-------------------
int countDigit(int num);
int powx(int x, int y);
int sumEvenPlaceDigits(int num);
int sumOddPlaceDigits(int num);
//------------------------
int main() {
	int res = sumOddDidits(76543211); //1) Enter integer number to receive sum of odd digits there.
	printf("Sum of odd digits is %d\n", res);
	printReversNumber(723); //2) Enter integer number to reverse it.
	res = getReverseNumber(87545660); //3) Enter integer number to reverse it.
	printf("Reverse number is %d\n", res);
	luckyTicket(245575); //4) Enter number of ticket where you want to know is the "Lucky Ticket" or not.
	return 0;
}

void luckyTicket(int num) {
	int x = sumEvenPlaceDigits(num);
	int y = sumOddPlaceDigits(num);
	if (x == y) {
		printf("It is lucky ticket\n");
	} else {
		printf("It is not lucky ticket\n");
	}
}

int getReverseNumber(int num) {
	int count = countDigit(num) - 1;
	int res = 0;
	while (num != 0) {
		int x = num % 10;
		int y = powx(10, count);
		res = res + x * y;
		count--;
		num /= 10;
	}
	return res;
}

void printReversNumber(int num) {
	int count = countDigit(num) - 1;
	int res = 0;
	while (num != 0) {
		int x = num % 10;
		int y = powx(10, count);
		res = res + x * y;
		count--;
		num /= 10;
	}
	printf("Reverse number is %d\n", res);
}

int sumOddDidits(int num) {
	int res = 0;
	while (num != 0) {
		int x = num % 10;
		num /= 10;
		if (x % 2 != 0) {
			res += x;
		}
	}
	return res;
}

/*
 * Tools:
 * 1)countDigit - counts the number of digits in integer.
 * 2)powx - multiplies the first number the second number of times.
 * 3)sumEvenPlaceDigits - counts the sum of the digits only that stand in even places.
 * 4)sumOddPlaceDigits - counts the sum of the digits only that stand in odd places.
 */
int countDigit(int num) {
	int res = 0;
	do {
		res++;
		num /= 10;
	} while (num != 0);
	return res;
}

int powx(int x, int y) {
	int a = 1;
	while (y != 0) {
		a *= x;
		y--;
	}
	return a;
}

int sumEvenPlaceDigits(int num) {
	int sum = 0;
	num = num / 10;
	while (num > 0) {
		int x = 10;
		int reminder = num % x;
		sum = sum + reminder;
		num /= x * 10;
	}
	return sum;
}

int sumOddPlaceDigits(int num) {
	int sum = 0;
	while (num > 0) {
		int x = 10;
		int reminder = num % x;
		sum = sum + reminder;
		num /= x * 10;
	}
	return sum;
}
