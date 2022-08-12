#include <stdio.h>

int main (){
	double vet[5];
	scanf("%lf", &vet[0]);
	printf("vet[0] = %.2f", vet[0]);
	for(int contador = 1; contador < 5; contador++){
		vet[contador] = 2 * vet[contador - 1];
		printf("\nvet[%d] = %.2f", contador, vet[contador]);
	}
	return 0;
}