#include <stdio.h>

int readNumber(char *message){
	int number;
	printf("\n%s\n>> ", message);
	scanf("%d", &number);
	return number;
}

//These are functions for biggerPairFunction

/*
In the function bigger() from biggerNumber.c:
function returns 0 if both numbers are equal
but in this program that is useless cause 
if both numbers are equals, i need that the function
returns one of that numbers, not 0.
*/
int bigger(int number1, int number2){
	if (number1 > number2){
		return number1;
	}else if(number1 < number2){
		return number2;
	}else{
		return number1;
	}
}

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

int biggerPairFunction(int number1, int number2){
	int aux, response;
	
	aux = evenNumber(number2);
	
	if (aux == 1){
		response = bigger(number1, number2);
		return response;
	}else{
		return number1;
	}
}

//These are functions for odd counter

	//evenNumber
	
//These are functions for minorPrimeNumberFunction

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

int minorPrimeNumberFunction(int number1, int number2){
	int aux;
	
	aux = primeNumber(number2);
	
	if (aux == 1){
		if (number2 < number1){
			return number2;
		}
	}
	return number1;
}



int main(){
	int number, biggerPair = 0, oddCount = 0, minorPrimeNumber = 0, aux, aux2 = 1;
	
	do{
		number = readNumber("Enter a number:");
		
		//Initializating biggerPair and minorPrimeNumber
		//when aux2 == 1, That means that no one variable are initialized
		//When aux2 == 2, That means that variable biggerPair are initialized but not minorPrimeNumber
		//When aux2 == 3, That means that variable minorPrimeNumber are initialized but not biggerPair
		//When aux2 == 4, That means that both variables are initialized
		if (aux2 == 1 || aux2 == 3){
			aux = evenNumber(number);
			if (aux == 1){
				biggerPair = number;
				switch (aux2){
					case 1:
						aux2 = 2;
					break;
					
					case 3:
						aux2 = 4;
					break;
				}
			}
		}
		if(aux2 == 1 || aux2 == 2){
			aux = primeNumber(number);
			if (aux == 1){
				minorPrimeNumber = number;
				switch (aux2){
					case 1:
						aux2 = 3;
					break;
					
					case 2:
						aux2 = 4;
					break;
				}
			}
		}
		
		//Bigger pair
		biggerPair = biggerPairFunction(biggerPair, number);
		
		//odd count
		aux = evenNumber(number);
		if (aux == 0){
			oddCount++;
		}
		
		//minor prime number
		minorPrimeNumber = minorPrimeNumberFunction(minorPrimeNumber, number);
		//printf("\n\nMenor prime is: %d\n\n", minorPrimeNumber); for catch errors ;)
		
	}while(number != 0);
	
	printf("\nThe bigger pair number is: %d\n", biggerPair);
	printf("\nThe amount of odd numbers is: %d\n", oddCount);
	printf("\nThe minor prime number is: %d\n", minorPrimeNumber);
	
	return 0;
}