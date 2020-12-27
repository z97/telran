#include <stdio.h>

int arrayEvensCount(int ar[], int len);
int searchMaxIndex(int ar[], int len);

int main(){
	int ar[] = {9, 7, 8, 6, 9, 3, 2, 6, 9};
	int res = arrayEvensCount(ar, 9);
	printf("Evens Count = %d \n", res);
	res = searchMaxIndex(ar, 9);
	printf("Max Index is %d", res);
	return 0;
}

int searchMaxIndex(int ar[], int len){
	int max = ar[0], maxInd = 0, i;
	for(i = 0, max; i < len; i++){
		if(ar[i] > max){
			max = ar[i];
			maxInd = i;
		}
	}
	return maxInd;
}

int arrayEvensCount(int ar[], int len){
	int count, i;
	for(i = 0, count = 0; i < len; i++){
		if (ar[i] % 2 == 0){
			count++;
		}
	}
	return count;
}
