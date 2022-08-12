#include <stdio.h>

void quadrado(int *numPtr){
	printf("%d", (*numPtr) * (*numPtr));
}

int main(){
	int numero;
	scanf("%d", &numero);
	quadrado(&numero);
	return 0;
}