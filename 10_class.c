#include <stdio.h>

void print_stars(int stars);

int main(){
	int a = 5, count = 0;
	while(a > 0){
		printf("a = %d\n", a);
		//a--;
		count++;
		if(count == 5)
			break;
	}
	printf("End of loop count = %d\n", count);
	print_stars(20);
	return 0;
}

void print_stars(int stars){
	while(stars > 0){
		printf("*");
		if(stars % 3 == 0){
			printf("\n");
		}
		stars--;
	}
	printf("\n");
}
