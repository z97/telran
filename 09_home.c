#include <stdio.h>

void leumi(int day);
void schedular(int week);

int main(){
	leumi(5); // input number of day, week starts from sunday(1)
	schedular(7); // input number of week
	return 0;
}

void schedular(int week){
	int reminder = week % 4;
	if (week > 0){
		switch(reminder){
		case(0):
			printf("Mary\n");
			break;
		case(1):
			printf("John\n");
			break;
		case(2):
			printf("Peter\n");
			break;
		case(3):
			printf("Tigran\n");
			break;
		}
	}
	else
		printf("Negative number of week or zero\n");
}

void leumi(int day){
	int a = 0;
	if(day == 1 || day == 3 || day == 5){
		a = 1;
	}
	else if(day == 2 || day == 4){
		a = 2;
	}
	else if(day == 6 || day == 7){
		a = 3;
	}
	else
		a = -1;
	switch(a){
	case(1):
		printf("08:30 - 13:30\n");
		break;
	case(2):
		printf("16:00 - 18:00\n08:30 - 13:30\n");
		break;
	case(3):
		printf("Bank Leumi is closed\n");
		break;
	default:
		printf("Wrong day\n");
	}
}
