#include <stdio.h>

void printArray(int ar[], int len);
void printOddsArray(int ar[], int len);

int main() {
	int ar[] = { 8, 5, 9, 4, 1, 2 };
	int len = 6;
	int i = 5;
	for (i = 0; i < 6; i++) {
		printf("%d \n", ar[i]);
	}
	printf("%d \n", ar[len - 1]);
	printArray(ar, len);
	printOddsArray(ar, len);
	return 0;
}

void printOddsArray(int ar[], int len){
	int i;
	for(i = 0; i < len; i++){
		if(ar[i]% 2 != 0){
			printf("%d ", ar[i]);
		}
	}
	printf("\n");
}

void printArray(int ar[], int len){
	int i;
	for(i = 0; i < len; i++){
		printf("%d", ar[i]);
	}
	printf("\n");
}
