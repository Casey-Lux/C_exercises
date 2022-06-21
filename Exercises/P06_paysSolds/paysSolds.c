#include <stdio.h>

float paysFunction(float amount, int pays){
	float result;
	result = amount / pays;
	return result;
}

int readNumber(char *message){
	int number;
	printf("\n%s\n>> ", message);
	scanf("%d", &number);
	return number;
}

int main(){
	int pays, i;
	float amount, amountForPay;
	
	for (i=1; i < 11; i++){
		printf("\nSold number %d", i);
		pays = readNumber("Enter the number of pays");
		printf("\nEnter the amount of total to pay:\n>> ");
		scanf("%f", &amount);
	
		amountForPay = paysFunction(amount, pays);
		
		printf("\nThe number of pays is: %d\nThe amount for pay is: %1.2f\n\n", pays, amountForPay);
	}
	
	return 0;
}