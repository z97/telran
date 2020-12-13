#include <stdio.h>

void print_abc_reverse(); // Answer 1
void print_abc_4_in_row(); // Answer 2
void printNumberInColumn(int num); // Answer 4
//Tools:
int countDigit(int num); //counts the number of digits in integer.
int powx(int x, int y); //multiplies the first number the second number of times.

int main() {
	printf("Exercise 1\n");
	print_abc_reverse();
	printf("\nExercise 2\n");
	print_abc_4_in_row();
	printf("\n\nExercise 4\n");
	printNumberInColumn(875546);
	return 0;
}

void printNumberInColumn(int num) {
	int len = countDigit(num) - 1;
	int pow = powx(10, len);
	int b = 0;
	while (pow > 0) {
		int a = num / pow;
		int c = a - b;
		printf("%d\n", c);
		pow = pow / 10;
		b = a * 10;
	}
}

void print_abc_4_in_row() {
	int sym, count;
	for (sym = 'a', count = 0; sym <= 'z'; sym++) {
		printf("%c->%d\t", sym, sym);
		count++;
		if (count == 4) {
			printf("\n");
			count = 0;
		}
	}
}

void print_abc_reverse() {
	int sym;
	for (sym = 'z'; sym >= 'a'; sym--) {
		printf("%c->%d\n", sym, sym);
	}
}

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
