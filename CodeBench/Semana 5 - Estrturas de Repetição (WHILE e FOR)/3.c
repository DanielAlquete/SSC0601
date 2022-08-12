#include <stdio.h>

int main(){
	int qtdNum, contador;
	scanf("%d", &qtdNum);
	int v[qtdNum], vInverso[qtdNum];
	for(int contador = 0; contador < qtdNum; contador++)
	    scanf("%d", &v[contador]);
	for(int contador = 0; contador < qtdNum; contador++){
		vInverso[contador] = v[ (qtdNum - 1) - contador];
		if((contador - qtdNum ) != 1)
			printf("%d ", vInverso[contador]);
		else
			printf("%d", vInverso[contador]);
	}
	return 0;
}