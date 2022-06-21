#include <stdio.h>
#include <stdlib.h>

/*Make an algorithm that allows performing arithmetic operations between two numbers, and that the user selects 
which operation needs to be done among the following operations:
- Addition
- Subtraction
- Multiplication
- Division (validate division by 0)
- Power
- Exit
Show the result of the operation, In addition to allowing you to perform various operations until it indicates exit.*/

int main(int argc, char *argv[]) {
	// Variables Definition
	int option = 0;
	float num1, num2;
	float result;
	
	do {
		//Data input
		printf("\n****MENU****\n\nIn this menu you can choose the aritmetic operation that you want to do:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. division\n5. Power\n6. Exit\n\nChoose the option: \n>> ");
		scanf("%d", &option);
	
		switch (option) {
			case 1:
				printf("\nEnter a number:\n>> ");
				scanf("%f", &num1);
				printf("\nEnter the other number:\n>> ");
				scanf("%f", &num2);
				result = num1 + num2;
				printf("The result for addition is: %1.2f\n", result);
			break;
		
			case 2:
				printf("\nEnter a number:\n>> ");
				scanf("%f", &num1);
				printf("\nEnter the other number:\n>> ");
				scanf("%f", &num2);
				result = num1 - num2;
				printf("The result for substraction is: %1.2f\n", result);
			break;
		
			case 3:
				printf("\nEnter a number:\n>> ");
				scanf("%f", &num1);
				printf("\nEnter the other number:\n>> ");
				scanf("%f", &num2);
				result = num1 * num2;
				printf("The result for multiplication is: %1.2f\n", result);
			break;
		
			case 4:
				printf("\nEnter a number:\n>> ");
				scanf("%f", &num1);
				do {
					printf("\nEnter the other number (Don't enter 0):\n>> ");
					scanf("%f", &num2);
				}while (num2 == 0);
				result = num1 / num2;
				printf("The result for division is: %1.2f\n", result);
			break;
		
			case 5:
				printf("\nEnter a number:\n>> ");
				scanf("%f", &num1);
				printf("\nEnter the other number:\n>> ");
				scanf("%f", &num2);
				if (num2 > 0){
					result = num1;
					while (num2 > 1) {
						result = result * num1;
						num2--;
					}
				}else if (num2 == 0) {
					result = 1;
				}else {
					result = num1;
					while (num2 < -1) {
						result = result * num1;
						num2++;
					}
					result = 1 / result;
				}
				printf("The result for power is: %1.2f\n", result);
			break;
		
			case 6:
				printf("Thanks for use this program!\nSee you later!\n");
			break;
			
			default:
				printf("\nPlease choose a valid option!\n");
		}
	}while (option != 6);
	
	return 0;
}