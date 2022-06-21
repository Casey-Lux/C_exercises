#include <stdio.h>

int bigger(int number1, int number2){
	if (number1 > number2){
		return number1;
	}else if(number1 < number2){
		return number2;
	}else{
		return 0;
	}
}

int readNumber(char *message){
	int number;
	printf("\n%s\n>> ", message);
	scanf("%d", &number);
	return number;
}

int main(){
	int number1, number2, biggerNumber;
	
	printf("\nWelcome to biggerNumber app!!\nYou can enter 2 numbers and biggerNumber will tell you wich is bigger than other!\n");
	number1 = readNumber("Enter the first number:");
	number2 = readNumber("Enter the second number:");
	
	biggerNumber = bigger(number1, number2);
	
	if (biggerNumber == 0){
		printf("\nBoth numbers are equals!\n");
	}else{
		printf("\nThe bigger number is: %d\n", biggerNumber);
	}
	
	printf("\nThanks for use this program!!\nSee you later!\n");
	
	return 0;
}