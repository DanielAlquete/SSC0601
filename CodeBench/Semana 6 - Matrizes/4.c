#include <stdio.h>

int main(){
	int totalLinhas, totalColunas, colunasPre;
	scanf("%d %d", &totalLinhas, &totalColunas);
	colunasPre = (totalColunas / 2);
	for(int linha = 0; linha < totalLinhas; linha++){
		for(int coluna = 0; coluna < totalColunas; coluna++){
			if(coluna < colunasPre && coluna%2 == 0)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}