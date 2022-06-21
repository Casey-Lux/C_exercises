#include <stdio.h>
float leerEnteroEntre(char* prmEtiqueta,int prmTopeInferior, int prmTopeSuperor)  
{
	float varNumero;
	do{
	    printf("%s",prmEtiqueta);
        scanf("%f",&varNumero);
        if(varNumero<prmTopeInferior || varNumero>prmTopeSuperor){ 
        
            printf("\nTope de altura invalido como usted, digite otra altura");
        }
    }while(varNumero<prmTopeInferior || varNumero>prmTopeSuperor);
	
    return varNumero;	
} 
void imprimirEspacios(int prmCantidad)
{
	for(int i=0;i<prmCantidad;i++){
		printf(" ");
    }
}
void dibujarCupula(int prmMargen)
{
	imprimirEspacios(prmMargen);
	printf("*\n");
}

void dibujarRama(int prmLongitud)
{
	int i;
    int n;
    for(i=0;i<prmLongitud;i++)
        if (i==0)
        {
            printf("-");
        }else{
            printf("+");
        
        }if (i==prmLongitud)
        {
            printf("-");
        }
        
	
    printf("\n");
}
void dibujarFollaje(int prmAltura)
{
	int numCarateres=3;
	for(int varLineas=1;varLineas<prmAltura;varLineas++)
	{
		imprimirEspacios(prmAltura-varLineas);
		dibujarRama(numCarateres);
		numCarateres+=2;
	}
}
void dibujarTronco(int prmMargen)
{
	imprimirEspacios(prmMargen);
	printf("! !\n");
}

void dibujarArbol(int prmAltura)
{
	
	dibujarCupula(prmAltura);
	dibujarFollaje(prmAltura);
	dibujarTronco(prmAltura-1);
}
int main() {
	dibujarArbol(leerEnteroEntre("Qué altura debería tener el arbol?",1,44));
    float leerEnteroEntre();
    return 0;
}