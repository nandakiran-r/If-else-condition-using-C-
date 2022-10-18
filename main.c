#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, choice, result;
	printf("Enter 2 numbers");
	scanf("%d%d", &num1, &num2);
	printf("1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division \n Enter your choice : ");
	scanf("%d", &choice);
	if(choice == 1) {
		result = num1+num2;
		printf("Result = %d", result);
	}
	else if(choice == 2) {
		result = num1-num2;
		printf("Result = %d", result);
	}
	else if(choice == 3) {
		result = num1*num2;
		printf("Result = %d", result);
	}
	else if(choice == 4) {
		result = num1/num2;
		printf("Result = %d", result);
	}
	else {
		printf("You are a fool");
	}

	return EXIT_SUCCESS;
}
