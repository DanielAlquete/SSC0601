#include <stdio.h>

int main (void){
	int escolha;
	float valor;
	scanf("%d", &escolha);
	switch(escolha){
		case 1:
			valor = 1/5.12;
			break;
		case 2:
			valor = 1/5.74;
			break;
		case 3:
			valor = 1/0.25;
			break;
		case 4:
			valor = 1/0.048;
			break;
		case 5:
			valor = 1/0.044;
			break;
	}
	printf("R$1,00 equivale a mais ou menos %.2f", valor);
	return 0;
}
