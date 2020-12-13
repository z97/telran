#include<stdio.h>

void print_ascii(int first, int last);

int main() {
	int first = 33;
	int last = 126;
	printf("\t printing ASCII table from %c to %c\n", first, last);
	print_ascii(first, last);
	return 0;
}

void print_ascii(int first, int last) {
	int sym, count;
	for (sym = first, count = 0; sym <= last; sym++) {
		printf("code %d=>symbol %c; \t", sym, sym);
		count++;
		if (count == 4) {
			printf("\n");
			count = 0;
		}
	}
}

