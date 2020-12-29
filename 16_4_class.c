#include <stdio.h>
void selectionSort(int ar[], int size);
void printArray(int ar[], int size);
int indexMaxOfRange(int ar[], int i, int size);

int main(){
	int size = 10;
	int ar[]  = {16, 35, 55, 71, 25, 94, 35, 52, 69, 14};
	selectionSort(ar, size);
	printArray(ar, size);
	return 0;
}

void selectionSort(int ar[], int size){
	int i;
	for(i = 0 ; i < size; i++){
		int index = indexMaxOfRange(ar, i, size);
		int temp = ar[i];
		ar[i] = ar[index];
		ar[index] = temp;
	}
}

int indexMaxOfRange(int ar[], int i, int size){
	int j, index;
	for(j = i, index = i; j < size; j++){
		if(ar[index] < ar[j]){
			index = j;
		}
	}
	return index;
}

void printArray(int ar[], int size){
	int i;
	for(i = 0; i< size; i++){
		printf("%d\t", ar[i]);
	}
}

