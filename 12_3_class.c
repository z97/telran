#include<stdio.h>

int main(){
	int a = '%';
	printf("%d -> %c\n", a, a);
	printABC();
	return 0;
}

void printABC(){
	int sym, count;
	for(sym = 'A', count = 0; sym <= 'Z'; sym++){
		printf("%c -> %d\t", sym, sym);
		count++;
		if(count == 3){
			printf("\n");
			count = 0;
		}
	}
}
