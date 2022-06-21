#include <stdio.h>
/*
a = 1
b = 2
c = 3
d = 4
e = 5

aux = d
d = e
e = aux
*/

int a = 1, b = 2, c = 3, d = 4, e = 5, count = 1;

void printPer(){
	printf("%d.	| %d, %d, %d, %d, %d\n", count, a, b, c, d, e);
	count++;
}

void changeDE(){
	int aux, i;
	for (i=2; i>0; i--){
		printPer();
		aux = d;
		d = e;
		e = aux;
	}
}

void changeCD(){
	int aux, i;
	for (i=2; i>0; i--){
		changeDE();
		aux = c;
		c = d;
		d = aux;
	}
}

void changeCE(){
	int aux;
	
	aux = c;
	c = e;
	e = aux;
	
	changeDE();
	
	aux = c;
	c = e;
	e = aux;
	
	//printf("CE: ");
	//printPer();		//for catch errors
}

void changeBC(){
	int aux, i;
	for (i=2; i>0; i--){
		changeCD();
		changeCE();
		aux = b;
		b = c;
		c = aux;
	}
	//printf("BC: ");
	//printPer();
}

void changeBD(){
	int aux;
	
	aux = b;
	b = d;
	d = aux;
	
	//changeDE();
	changeCD();
	changeCE();
	
	aux = b;
	b = d;
	d = aux;
	
	//printf("BD: ");
	//printPer();
}

void changeBE(){
	int aux;
	
	aux = b;
	b = e;
	e = aux;
	
	//changeDE();
	changeCD();
	changeCE();
	
	aux = b;
	b = e;
	e = aux;
}

void changeAB(){
	int aux, i;
	for (i=2; i>0; i--){
		changeBC();
		changeBD();
		changeBE();
		aux = a;
		a = b;
		b = aux;
	}
}

void changeAC(){
	int aux;
	
	aux = a;
	a = c;
	c = aux;
	
	changeBC();
	changeBD();
	changeBE();
	
	aux = a;
	a = c;
	c = aux;
}

void changeAD(){
	int aux;
	
	aux = a;
	a = d;
	d = aux;
	
	changeBC();
	changeBD();
	changeBE();
	
	aux = a;
	a = d;
	d = aux;
}

void changeAE(){
	int aux;
	
	aux = a;
	a = e;
	e = aux;
	
	changeBC();
	changeBD();
	changeBE();
	
	aux = a;
	a = e;
	e = aux;
}

int main(){
	int wait;
	
	changeAB();
	changeAC();
	changeAD();
	changeAE();
	//printPer();
	printf("Ingrese cualquier numero y pulse enter para salir!");
	scanf("%d", &wait);
	printf("%d", wait);
	return 0;
}