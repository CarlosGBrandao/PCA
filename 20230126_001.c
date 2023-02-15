#include <stdio.h>
int main(){
	float linha, coluna=1,soma = 0;
	for(linha=1; linha<=50;linha++){
		soma = (coluna/linha) + soma;
		coluna=coluna+2; 
	}
	printf("\nsoma = %f", soma);
	return 0;
}