#include <stdio.h>

int maxToEnd(int ar[], int len);
void printArray(int ar[], int len);
void sortBubble(int ar[], int len);

int main() {
	int ar[] = { 6, 2, 5, 7, 1, 4 };
	sortBubble(ar, 6);
	printArray(ar, 6);
	return 0;
}

void sortBubble(int ar[], int len) {
	int res = 0;
	do {
		res = maxToEnd(ar, len);
	} while (res != 0);
}

void printArray(int ar[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d", ar[i]);
	}
	printf("\n");
}

int maxToEnd(int ar[], int len) {
	int temp, i, flag = 0;
	for (i = 0; i < len - 1; i++) {
		if (ar[i] > ar[i + 1]) {
			temp = ar[i + 1];
			ar[i + 1] = ar[i];
			ar[i] = temp;
			flag = 1;
		}
	}
	return flag;
}
