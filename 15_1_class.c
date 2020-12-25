#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void printArray(int ar[], int len);
void fillArray(int arr[], int size, int min, int max);
int sumArray(int arr[], int size);
int search(int arr[], int size, int value);
int getMax(int arr[], int size);

int main() {
	int size = 10;
	int arr[size];
	fillArray(arr, size, 10, 99);
	printArray(arr, size);
// printf("%d\n", RAND_MAX);
	int res = sumArray(arr, size);
	printf("%d\n", res);
	res = search(arr, size, 77);
	printf("%d\n", res);
	res = getMax(arr, size);
	printf("max = %d", res);
	return 0;
}

int getMax(int arr[], int size) {
	int max = 0;
	for (int i = 0, max = arr[0]; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int search(int arr[], int size, int value) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			return i;
		}
	}
	return -1;
}

int sumArray(int arr[], int size) {
	int sum = 0;
	int i;
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

void fillArray(int arr[], int size, int min, int max) {
	srand(time(NULL));
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = min + rand() % (max + 1 - min);
	}
}

void printArray(int ar[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}
