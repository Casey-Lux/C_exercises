#include <stdio.h>

int functionx(int n){
	if (n <= 2){
		return n;
	}else{
		n = (functionx(n-3)+(2 * functionx(n-2)) + functionx(n-1));
	}
	return n;
}

int readNumber(char *message){
	int number;
	printf("\n%s\n>> ", message);
	scanf("%d", &number);
	return number;
}

int main(){
	int n, result;
	
	n = readNumber("Enter the number:");
	result = functionx(n);
	printf("\nThe result is: %d\n", result);
	
	return 0;
}