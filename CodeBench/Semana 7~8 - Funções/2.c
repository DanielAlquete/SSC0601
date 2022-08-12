#include <stdio.h>

int calcularPotencia(int _base, int _exp){
	int resultado = 1;
	    for(int i = 1; i <= _exp; i++)
		    resultado *= _base;
	return resultado;
}

int main(){
	int base, exp;
	char operador;
	do{
		scanf("%d %c %d", &base, &operador, &exp);
		if(operador == '^')
			printf("%d\n", calcularPotencia(base, exp));
		else if(operador != 'p')
			printf("operador invalido\n");
	}while(operador != 'p');
	return 0;
}