#include <stdio.h>
void skipLine(){
	printf("\n");
}
int readIntegerBetween(char* prmLabel,int prmLowTop, int prmTopTop){
	int number;
	do{
		skipLine();
		printf("%s", prmLabel);
		skipLine();
		scanf("%d", &number);
	}while(number > prmTopTop || number < prmLowTop);
	return number;
}
void writeSpaces(int prmAmount){
	int i;
	for (i = 1; i < prmAmount; i++){
		printf(" ");
	}
}
void writeBranch1With(int prmLength, char prmCharacter1, char prmCharacter2){
	int i;
	printf("%c", prmCharacter1);
	for (i = 1; i <= prmLength; i++){
		printf("%c", prmCharacter2);
	}

}
void writeBranch2With(int prmLength, char prmCharacter1, char prmCharacter2, char prmCharacter3){
	int i;
	printf("%c", prmCharacter1);
	for (i = 1; i <= prmLength; i++){
		printf("%c", prmCharacter2);
	}
	printf("%c", prmCharacter3);
	skipLine();
}
void drawTree(int prmHeight){
	int i;
	char c='*', c1='*', c2='o';
	writeSpaces(prmHeight+2);
	printf("*");
	skipLine();
	for (i = 1; i < (prmHeight-1); i++){
		writeSpaces(prmHeight+(1-i));
		writeBranch1With(i, 'o', '+');
		writeBranch2With(i, c, '+', 'o');
		c = c2;
		c2=c1;
		c1=c;
	}
	writeSpaces(prmHeight+1);
	printf("| |");
}
int main() {
drawTree(readIntegerBetween("How tall should the Tree be...? Values ​​between [1..44]",1,44));
return 0;
}