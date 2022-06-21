#include <stdio.h>

//Functions

// Addition function
float addition(int number1, int number2);
float addition(int number1, int number2){
	float result;
	result = (number1 + number2);
	return result;
}

// Multiplication function
float multiplication(int number1, int number2);
float multiplication(int number1, int number2){
	float result;
	result = (number1 * number2);
	return result;
}

//Division function
float division(float number1, float number2);
float division(float number1, float number2){
	float result;
	result = number1 / number2;
	return result;
}

//Validation Zero
int validationZero(int noZero);
int validationZero(int noZero){
	int pass;
	int readNumber();
	do{
		if (noZero == 0){
			pass = 0;
			printf("\nThe divisor cannot be zero!!\n");
			noZero = readNumber();
		}else{
			pass = 1;
		}
	}while (pass == 0);
	return noZero;
}

//menu function
int menu();
int menu(){
	int option;
	printf("\n***MENU***\n");
	printf("\n1. Addition\n");
	printf("2. Multiplication\n");
	printf("3. division\n");
	printf("0. Exit\n\n");
	printf("Please, enter the option that you want:\n>> ");
	scanf("%d", &option);
	return option;
}

//Read number function
int readNumber();
int readNumber(){
	int number;
	printf("\nPlease enter a number for aritmetic operation: \n>> ");
	scanf("%d", &number);
	return number;
}

//Principal function
int main(int argc, char *argv[]){
	int number1, number2, option;
	float result;
	
	do{
		option = menu();
		
		switch (option){
			case 1:
				number1 = readNumber();
				number2 = readNumber();
				result = addition(number1, number2);
				//Data output
				printf("\nThe result for your operation was: %1.2f\n", result);
			break;
			
			case 2:
				number1 = readNumber();
				number2 = readNumber();
				result = multiplication(number1, number2);
				//Data output
				printf("\nThe result for your operation was: %1.2f\n", result);
			break;
			
			case 3:
				number1 = readNumber();
				number2 = readNumber();
				number2 = validationZero(number2);
				/* do{
					number2 = readNumber();
					pass = validationZero(number2);
				}while (pass == 0); */
				result = division(number1, number2);
				//Data output
				printf("\nThe result for your operation was: %1.2f\n", result);
			break;
			
			case 0:
				printf("\nThanks for use this program, see you later!\n");
			break;
			
			default:
				printf("\nPleace, enter a correct option!!\n");
		}
	}while (option != 0);
	
	return 0;
}