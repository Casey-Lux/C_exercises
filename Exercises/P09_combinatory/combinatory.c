#include <stdio.h>

long long int factorial(int n, int lim){
	long long int factorialN=1;
	int i;
	for (i=n; i>(n-lim); i--){
		factorialN = i * factorialN;
	}
	//printf("number: %d\n", n); //for catch errors
	return factorialN;
}

long long int combinatoryFunction(int n, int m){
	long long int factorialN, factorialM/*, factorialNM*/;
	factorialN = factorial(n, m);
	factorialM = factorial(m, m);
	//factorialNM = factorial((n-m));
	//printf("%d : %d : %d", factorialN, factorialM, 1/*, factorialNM*/); //for catch errors
	
	return (factorialN / factorialM);
}

int readNumber(char *message){
	int number;
	printf("\n%s\n>> ", message);
	scanf("%d", &number);
	return number;
}

int main(){
	int m, n;
	long long int combinatory;
	
	n = readNumber("Enter n number:");
	m = readNumber("Enter m number:");
	
	combinatory = combinatoryFunction(n, m);
	printf("The combinatory is: %I64d", combinatory);
	
	return 0;
}