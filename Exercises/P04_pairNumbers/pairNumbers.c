#include <stdio.h>

int evenNumber(float number){
	int aux;
	float aux2;
	
	aux = number / 2;
	aux2 = number / 2;
	
	if (aux == aux2){
		return 1;
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
	int number, countPairs = 0, aux, i;
	
	for (i = 0; i < 20; i++){
		number = readNumber("enter a number:");
		aux = evenNumber(number);
		countPairs = countPairs + aux;
	}
	
	printf("\nThere are %d pairs in the list of numbers that you entered\n", countPairs);
	
	return 0;
}