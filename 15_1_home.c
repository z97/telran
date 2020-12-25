#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int getMin(int arr[], int size);
int getIndexOfMax(int arr[], int size);
float avg(int arr[], int size);
//Tools:
void fillArray(int arr[], int size, int min, int max);
void printArray(int ar[], int len);

int main() {
	int size = 10;
	int arr[size];
	fillArray(arr, size, 10, 99);
	printArray(arr, size);
	int res = getMin(arr, size);
	printf("Minimum element of array is %d\n", res);
	res = getIndexOfMax(arr, size);
	printf("Index of maximum element of array is %d\n", res);
	float res_f = avg(arr, size);
	printf("Average of elements in array is %f\n", res_f);
	return 0;
}

float avg(int arr[], int size) {
	float sum = 0;
	int i;
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int getIndexOfMax(int arr[], int size) {
	int max;
	int i;
	int a = 0;
	for (i = 0, max = arr[0]; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			a = i;
		}
	}
	return a;
}

int getMin(int arr[], int size) {
	int min = 0;
	int i;
	for (i = 0, min = arr[0]; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

//Tools:
void fillArray(int arr[], int size, int min, int max) {
	srand(time(NULL));
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = min + rand() % (max + 1 - min);
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
