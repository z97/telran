#include<stdio.h>
void taxi(int driverCode);
void taxi1(int driverCode);
float calculator(float a, float b, int oper);

int main() {
	taxi1(40);
	float res = calculator(3,5,40);
	printf("result = %f\n", res);
	return 0;
}

float calculator(float a, float b, int oper) {
	float res = 0;
	switch (oper) {
		case 1:
			res = a + b;
			break;
		case 2:
			res = a - b;
			break;
		case 3:
			res = a * b;
			break;
		case 4:
			res = a / b;
			break;
		default:
			printf("Wrong operation\n");
	}
	return res;
}

void taxi1(int driverCode) {
	switch (driverCode) {
	case 1:
		printf("Haim go!\n");
		break;
	case 2:
		printf("Peter go!\n");
		break;
	case 3:
		printf("Tigran go!\n");
		break;
	case 4:
		printf("Mary go!\n");
		break;
	default:
		printf("Wrong number\n");
	}
}

void taxi(int driverCode) {
	if (driverCode == 1) {
		printf("Haim go!\n");
	}
	if (driverCode == 2) {
		printf("Peter go!\n");
	}
	if (driverCode == 3) {
		printf("Tigran go!\n");
	}
	if (driverCode == 4) {
		printf("Mary go!\n");
	}
}
