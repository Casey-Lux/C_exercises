#include <stdio.h>

int primeNumber(int number){
	int i, aux;
	
	if (number == 0 || number == 1){
		return 0;
	}
	
	if (number == 2){
		return 1;
	}
	
	for (i=2; i < (number - 1); i++){
		aux = number / i;
		if (number == (aux * i)){
			return 0;
		}
	}
	return 1;
}

int readNumber(char *message){
	int number;
	printf("\n%s\n>> ", message);
	scanf("%d", &number);
	return number;
}

float division(float number1, float number2){
	float result;
	result = number1 / number2;
	return result;
}

int main(){
	int number, prime, count = 0, addition = 0;
	float average;
	
	printf("\nWelcome to prime numbers averager!!\n");
	printf("In this program you can add prime numbers and obtain its average!!\n");
	printf("\n*** If you want to stop the application, just enter 0 ***\n");
	
	do{
		number = readNumber("Enter a number:");
		prime = primeNumber(number);
		if (number == 0){
			printf("\nProgram stoped\n");
		}else if (prime == 1){
			count++;
			addition = addition + number;
		}
	}while (number != 0);
	
	average = division(addition, count);
	printf("\nAverage of the numbers that you entered is: %1.2f", average);
	
	/* number = readNumber("Enter a number:");
	prime = primeNumber(number);
	if (prime == 1){
		printf("\n%d is prime\n", number);
	} */
	
	return 0;
}