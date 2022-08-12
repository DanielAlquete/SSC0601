#include <stdio.h>

float mediaAritmetica (float _notas[3]){
	return (_notas[0] + _notas[1] + _notas[2]) / 3;
}

float mediaPonderada (float _notas[3]){
	return (5 * _notas[0] + 3 * _notas[1] + 2 * _notas[2]) / 10;
}

float maiorNota (float _notas[3]){
	int maiorNota = _notas[1];
	for(int i = 1; i < 3; i++){
		if(maiorNota < _notas[i])
			maiorNota = _notas[i];
	}
	return maiorNota;
}

int main(){
	float notas[3];
	char acao;
	scanf("%f\n%f\n%f\n%c", ¬as[0], ¬as[1], ¬as[2], &acao);
	switch(acao){
		case 'A':
			printf("Media: %.1f", mediaAritmetica(notas));
			break;
		case 'H':
			printf("Media: %.1f", maiorNota(notas));
			break;
		case 'P':
			printf("Media: %.1f", mediaPonderada(notas));
			break;
	}
	return 0;
}