#include <stdio.h>

int main (){
	int codigo;
	scanf("%d", &codigo);
	switch(codigo){
		case 100:
			printf("Cachorro Quente\n7.20");
			break;
		case 101:
			printf("Bauru Simples\n8.50");
			break;
		case 102:
			printf("Bauru com Ovo\n11.50");
			break;
		case 103:
			printf("Hamburguer\n8.50");
			break;
		case 104:
			printf("Cheeseburguer\n10");
			break;
		case 105:
			printf("Suco\n2.50");
			break;
		case 106:
			printf("Refrigerante\n3.50");
			break;
	}
	return 0;
}
