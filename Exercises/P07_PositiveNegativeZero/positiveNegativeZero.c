#include <stdio.h>

int positiveNegativeZero(int number){
	if (number > 0){
		return 1;
	}else if (number < 0){
		return -1;
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
	int number, aux, i, countPositive = 0, countNegative = 0, countZero = 0;
	
	for (i = 0; i < 100; i++){
		number = readNumber("Enter a number:");
		aux = positiveNegativeZero(number);
		
		switch (aux){
			case -1:
				countNegative++;
			break;
			
			case 0:
				countZero++;
			break;
			
			case 1:
				countPositive++;
			break;
		}
	}
	
	printf("\nThere is:\n\n%d positive numbers\n%d negative numbers\n%d zero numbers\n", countPositive, countNegative, countZero);
	printf("\nThanks for use this program!!\nSee you later!!\n");
	
	return 0;
}