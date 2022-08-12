#include <stdio.h>

int main(){
	int qtdNum, num, numDentro, numFora;
	numDentro = numFora = 0;
	scanf("%d", &qtdNum);
	for (int contador = 0; contador < qtdNum; contador++){
		scanf("%d", &num);
		if(num >= 10 && num <= 20)
			numDentro++;
		else
			numFora++;
	}
	printf("%d D\n%d F", numDentro, numFora);
	return 0;
}