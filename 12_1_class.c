#include <stdio.h>

int oddsSum(int num);
void printNumberRevers(int num);
int reverseNumber(int num);

int main() {
	int res = oddsSum(77654566);
	printf("res = %d\n", res);
	printNumberRevers(765789);
	res = reverseNumber(876545);
	printf("res = %d\n", res);
	return 0;
}

int reverseNumber(int num) {
	int res = 0, rem = 0;
	do{
		rem = num % 10;
		res = (res * 10) + rem;
		num /= 10;
	}while(num != 0);
	return res;
}

void printNumberRevers(int num) {
	int rem = 0;
	do {
		rem = num % 10;
		printf("%d", rem);
		num /= 10;
	} while (num != 0);
	printf("\n");
}

int oddsSum(int num) {
	int sum = 0, rem = 0;
	do {
		rem = num % 10;
		if (rem % 2 != 0) {
			sum += rem;
		}
		num /= 10;
	} while (num != 0);
	return sum;
}
