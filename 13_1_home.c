#include <stdio.h>

void figureOne(int n);
void figureTwo(int n);
void figureThree(int n);
void figureFour(int n);
void figureFive(int n);

int main() {
	printf("= Exercise 1 =\n");
	figureOne(14);
	printf("\n");
	printf("= Exercise 2 =\n");
	figureTwo(14);
	printf("\n");
	printf("= Exercise 3 =\n");
	figureThree(14);
	printf("\n");
	printf("= Exercise 4 =\n");
	figureFour(14);
	printf("\n");
	printf("= Exercise 5 =\n");
	figureFive(14);
	printf("\n");
	return 0;
}

void figureOne(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n || j == i || i > j) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void figureTwo(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n || j == i || i + j == n + 1
					|| (j - i > 0 && j + i <= n)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void figureThree(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n || j == i || i + j == n + 1
					|| (j - i > 0 && j + i <= n) || (j - i < 0 && j + i > n)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

}

void figureFour(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n || j == i || i + j == n + 1
					|| (i - j > 0 && j + i <= n) || (i + j > n && j - i > 0)) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

}

void figureFive(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i > j) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

}

