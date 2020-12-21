#include <stdio.h>

void printEvensArray(int ar[], int len);
void printArrayReverse(int ar[], int len);
int arrayEvensSum(int ar[], int len);
void mergeArrays(int ar1[], int len1, int ar2[], int len2);

int main() {
	int ar[] = { 9, 2, 4, 5, 6, 1, };
	printf("Evens array\n");
	printEvensArray(ar, 6); // first argument is array, second is length of the array
//======================================
	printf("Array reverse\n");
	printArrayReverse(ar, 6); // first argument is array, second is length of the array
//======================================
	printf("Sum of even numbers\n");
	int sum = arrayEvensSum(ar, 6); // first argument is array, second is length of the array
	printf("%d\n", sum);
//======================================
	printf("Merge of two arrays one after one\n");
	int ar1[] = { 9, 2, 4, 7 };
	int len1 = 4;
	int ar2[] = { 8, 1, 6 };
	int len2 = 3;
	mergeArrays(ar1, len1, ar2, len2); // first argument is array1, second argument is length of the array1, third argument is array2, four argument is length of the array2
	return 0;
}

void mergeArrays(int ar1[], int len1, int ar2[], int len2) {
	int i;
	int k;
	int mergeLen = len1 + len2;
	int merge[mergeLen];
	for (i = 0; i < len1; i++) {
		merge[i] = ar1[i];
	}
	k = i;
	i = 0;
	while (i < len2) {
		merge[k] = ar2[i];
		k++;
		i++;
	}
	for (i = 0; i < k; i++)
		printf("%d ", merge[i]);
}

int arrayEvensSum(int ar[], int len) {
	int i = 0;
	int sum = 0;
	for (i = 0; i < len; i++) {
		if (ar[i] % 2 == 0) {
			sum += ar[i];
		}
	}
	return sum;
}

void printArrayReverse(int ar[], int len) {
	for (int i = len - 1; i >= 0; i--) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void printEvensArray(int ar[], int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		if (ar[i] % 2 == 0) {
			printf("%d ", ar[i]);
		}
	}
	printf("\n");
}
