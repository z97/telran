#include <stdio.h>
//Exercise 1
void sortBubbleMinToEnd(int ar[], int len);
int minToEnd(int ar[], int len);
//Exercise 2
void sortBubbleEvenToEnd(int ar[], int len);
int evenToEnd(int ar[], int len);
//Exercise 3
/*
 * Schema:
 * The array must be divided into two parts. Left side with odd numbers and right side with even numbers
 * countEvenArray - get the starting point for the second part of the array
 * evenToEnd - move all unsorted even numbers to the right side of array
 * Do the sorting twice from the starting point:
 * The first time from 0 to the number of odd numbers
 * The second time from the number of odd numbers to the end of the array
 */
int evenToEndSort(int ar[], int len);
void sortBubbleMaxToEndOdd(int ar[], int len);
void sortBubbleMaxToEndEven(int ar[], int len);
//Tools=============================
void printArray(int ar[], int len);
int countEvenArray(int ar[], int len);
int maxToEndWithStartPoint(int ar[], int len, int start);

int main() {
	int ar[] = { 5, 7, 12, 13, 7, 8, 4, 14, 9, 8, 2, 3, 16, 4, 18, 5, 15};
	int len = 17;
	printf("Exercise 1, bubble sorting, minimum to end:\n");
	sortBubbleMinToEnd(ar, len);
	printArray(ar, len);
	printf("Exercise 2, bubble sorting, even numbers to end:\n");
	sortBubbleEvenToEnd(ar, len);
	printArray(ar, len);
	printf("Exercise 3, bubble sorting, even numbers to end and maximum numbers to end of their part:\n");
	evenToEndSort(ar, len);
	printArray(ar, len);
	return 0;
}
//Exercise 1=========================
void sortBubbleMinToEnd(int ar[], int len) {
	int res_minToEnd = 0;
	do {
		res_minToEnd = minToEnd(ar, len);
	} while (res_minToEnd != 0);
}

int minToEnd(int ar[], int len) {
	int temp, i, flag = 0;
	for (i = 0; i < len - 1; i++) {
		if (ar[i] < ar[i + 1]) {
			temp = ar[i];
			ar[i] = ar[i + 1];
			ar[i + 1] = temp;
			flag = 1;
		}
	}
	return flag;
}

//Exercise 2========================
void sortBubbleEvenToEnd(int ar[], int len) {
	int res_evenToEnd = 0;
	do {
		res_evenToEnd = evenToEnd(ar, len);
	} while (res_evenToEnd != 0);
}

int evenToEnd(int ar[], int len) {
	int temp, i, flag = 0;
	for (i = 0; i < len - 1; i++) {
		if (ar[i] % 2 == 0 && ar[i + 1] % 2 != 0) {
			temp = ar[i + 1];
			ar[i + 1] = ar[i];
			ar[i] = temp;
			flag = 1;
		}
	}
	return flag;
}

//Exercise 3========================
int evenToEndSort(int ar[], int len) {
	int countEven = countEvenArray(ar, len);
	int countOdd = len - countEven;
	evenToEnd(ar, len);
	sortBubbleEvenToEnd(ar, len);
	//First sorting:
	maxToEndWithStartPoint(ar, countOdd, 0);
	sortBubbleMaxToEndOdd(ar, countOdd);
	//Second sorting:
	maxToEndWithStartPoint(ar, len , countOdd);
	sortBubbleMaxToEndEven(ar, len);
}

void sortBubbleMaxToEndOdd(int ar[], int len) {
	int res_maxToEnd = 0;
	do {
		res_maxToEnd = maxToEndWithStartPoint(ar, len, 0);
	} while (res_maxToEnd != 0);
}

void sortBubbleMaxToEndEven(int ar[], int len) {
	int countEven = countEvenArray(ar, len);
	int countOdd = len - countEven;
	int res_maxToEnd = 0;
	do {
		res_maxToEnd = maxToEndWithStartPoint(ar, len, countOdd);
	} while (res_maxToEnd != 0);
}

//Tools=============================
void printArray(int ar[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}

int countEvenArray(int ar[], int len) {
	int i, count = 0;
	for (i = 0; i < len; i++) {
		if (ar[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}

int maxToEndWithStartPoint(int ar[], int len, int start) {
	int temp, i, flag = 0;
	for (i = start; i < len - 1; i++) {
		if (ar[i] > ar[i + 1]) {
			temp = ar[i + 1];
			ar[i + 1] = ar[i];
			ar[i] = temp;
			flag = 1;
		}
	}
	return flag;
}
