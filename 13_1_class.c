#include<stdio.h>

void printStars(int row, int col);
void pithagoras();
void figure(int n);

int main() {
//printStars(4, 5);
//pithagoras();
	figure(15);
	return 0;
}

void figure(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n || j == i || i + j == n + 1) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void pithagoras() {
	int j, i;
	for (i = 1; i < 11; i++) {
		for (j = 1; j < 11; j++) {
			printf("%d\t", i * j);
		}
		printf("\n");
	}
}

void printStars(int row, int col) {
	int j, i;
	for (i = 1; i <= row; i++) {
		for (j = 1; j <= col; j++) {
			printf("*");
		}
		printf("\n");
	}
}
