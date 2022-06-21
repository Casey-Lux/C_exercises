#include <stdio.h>

int product(int number1, int number2){
	int result;
	result = number1 * number2;
	return result;
}

int readNumber(char *message){
	int number;
	printf("\n%s\n>> ", message);
	scanf("%d", &number);
	return number;
}

int main(){
	int article, amount, total;
	
	article = readNumber("Enter the article price");
	amount = readNumber("How many articles?");
	total = product(article, amount);
	
	printf("\nThe total price is: %d\n", total);
	
	return 0;
}