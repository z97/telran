#include <stdio.h>

void sortBubble(int ar[], int len);
int evenToEndSort(int ar[], int len);
int evenToEnd(int ar[], int len);
int minToEnd(int ar[], int len);
//Tools=============================
void printArray(int ar[], int len);
int mergeArrays(int ar1[], int len1, int ar2[], int len2);

int main() {

	return 0;
}

void sortBubble(int ar[], int len) {
	int res_minToEnd = 0;
	int res_evenToEnd = 0;
	int res_evenToEndSort = 0;
	do {
		res_minToEnd = maxToEnd(ar, len);
	} while (res_minToEnd != 0 && res_evenToEnd != 0 && res_evenToEndSort != 0);
}

int evenToEndSort(int ar[], int len) {

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

int minToEnd(int ar[], int len) {
	int temp, i, flag = 0;
	for (i = 0; i < len - 1; i++) {
		if (ar[i] < ar[i + 1]) {
			temp = ar[i + 1];
			ar[i + 1] = ar[i];
			ar[i] = temp;
			flag = 1;
		}
	}
	return flag;
}
//Tools=============================
void printArray(int ar[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d", ar[i]);
	}
	printf("\n");
}

int mergeArrays(int ar1[], int len1, int ar2[], int len2) {
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
	return merge;
}

int countEvenArray(int ar[], int len){
	int i, count = 0;
	for(i = 0; i < len; i++){
		if(ar[i] % 2 == 0){
			count ++;
		}
	}
	return count;
}

int splitArrayEvenOdd(int ar[], int len){
	int i;
	int lenEven = countEvenArray(ar, len);
	int lenOdd = len - lenEven;
	int arEven[lenEven];
	int arOdd[lenOdd];
	for(i = 0; i < len; i++){
		int a = 0;
		int b = 0;
		if(ar[i] % 2 == 0){
			arEven[a] = ar[i];
			a++;
		}
		if(ar[i] % 2 != 0){
			arOdd[b] = ar[i];
			b++
		}
	}
}
