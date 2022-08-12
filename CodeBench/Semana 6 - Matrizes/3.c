#include <stdio.h>

int main(){
	int totalLinhas, totalColunas, linhasPre;
	scanf("%d %d", &totalLinhas, &totalColunas);
	linhasPre = totalLinhas / 2;
	for(int linha = 0; linha < totalLinhas; linha++){
		for(int coluna = 0; coluna < totalColunas; coluna++){
			if((linhasPre - linha) > 0)
				printf("%d ", linhasPre - linha);
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}