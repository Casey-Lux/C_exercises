#include <stdio.h>
void saltarLinea()
{

}
int leerEnteroEntre(char* prmEtiqueta,int prmTopeInferior, int prmTopeSuperior)
{
	int number;
	do{
		printf("\n%s\n", prmEtiqueta);
		scanf("%d", &number);
	}while(number > prmTopeSuperior || number < prmTopeInferior);
	return number;
}
void escribirEspacios(int prmCantidad)
{
	int i;
	for (i = 1; i < prmCantidad; i++){
		printf(" ");
	}
}
void escribirRama1Con(int prmLongitud,char prmCaracter1, char prmCaracter2)
{
	int i;
	printf("%c", prmCaracter1);
	for (i = 1; i <= prmLongitud; i++){
		printf("%c", prmCaracter2);
	}
	
}
void escribirRama2Con(int prmLongitud,char prmCaracter1, char prmCaracter2, char prmCaracter3)
{
	int i;
	printf("%c", prmCaracter1);
	for (i = 1; i <= prmLongitud; i++){
		printf("%c", prmCaracter2);
	}
	printf("%c\n", prmCaracter3);
}
void dibujarArbol(int prmAltura)
{
	int i;
	char c='*', c1='*', c2='o';
	escribirEspacios(prmAltura+2);
	printf("*\n");
	for (i = 1; i < (prmAltura-1); i++){
		escribirEspacios(prmAltura+(1-i));
		escribirRama1Con(i, 'o', '+');
		escribirRama2Con(i, c, '+', 'o');
		c = c2;
		c2=c1;
		c1=c;
	}
	escribirEspacios(prmAltura+1);
	printf("| |");
}
int main() {
	dibujarArbol(leerEnteroEntre("Que altura debe tener el Arbol...? Valores entre [1..44]",1,44));
	return 0;
}
