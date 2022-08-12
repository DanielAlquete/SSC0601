#include <stdio.h>
#include <math.h>

int main(){
	float idade;
	int numero, validador = 1, dados[10], contador;
	for(contador = 0; contador < 9; contador++)
		dados[contador] = 0;
	do{
		scanf("%d", &numero);
		scanf("%f", &idade);
		if( (numero >= 1 && numero <= 3) && (idade > 0) ){
				dados[numero - 1]++;
			if (idade >= 20 && idade <= 25)
				dados[numero + 2]++;
			if(idade > dados[7]){
				dados[6] = numero;
				dados[7] = idade;
			}else if(idade < dados[9]){
				dados[8] = numero;
				dados[9] = idade;
			}
		}else
			validador = 0;
	}while(validador);
	for(contador = 0; contador < 9; contador++){
		printf("%d", dados[contador]);
		if( (contador - 9) != 1)
			printf("\n");
	}
	return 0;
}