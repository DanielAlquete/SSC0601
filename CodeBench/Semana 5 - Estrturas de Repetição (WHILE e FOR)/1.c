#include <stdio.h>

int main (){
	int entrada, numVar, soma;
	entrada = numVar = soma = 0;
	do {
		scanf("%d", &entrada);
		soma += entrada;
		if(entrada != 0)
		    numVar++;
	} while(entrada != 0);
	printf("%d", soma/numVar);
	return 0;
}