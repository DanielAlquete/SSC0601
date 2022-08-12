#include <stdio.h>

int main(){
	unsigned int par, impar, numero;
	par = impar = 0;
	for (int contador = 0; contador < 10; contador++){
		scanf("%d", &numero);
		if(numero%2 == 0)
			par++;
		else
			impar++;
	}
	printf("%d\n%d", par, impar);
	return 0;
}