#include <stdio.h>

int main(){
	int a = 5;
	while(a > 0){
		printf("a = %d\n", a);
		a--;
	}
	printf("-----------\n");
	for(a = 5; a > 0; a--){
		printf("a = %d\n", a);
	}
	int b;
	for(a = 1, b = 5; a < b; a++, b--){
		printf("Hello\n");
	}
	return 0;
}
