#include<stdio.h>

int main(){
	int ar[7];
	ar[3] = 7;
	ar[0] = 1;
	printf("%d\n", ar[6]);
	int ar1[5] = {5, 9, 6};
	int ar2[6] = {};
	int ar3[] = {9, 2, 3, 7, 2, 1};
	ar[3] = 5;// java
	int a = ar3[1] + ar3[0];
	printf("a = %d \n", a);
	return 0;
}
