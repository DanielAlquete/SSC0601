#include <stdio.h>

int main(){
	int ordem, linha, coluna;
	scanf("%d", &ordem);
	int m1[ordem][ordem], m2[ordem][ordem], ms[ordem][ordem];
	for(linha = 0; linha < ordem; linha++){
		for(coluna = 0; coluna < ordem; coluna++)
			scanf("%d", &m1[linha][coluna]);
	}
	for(linha = 0; linha < ordem; linha++){
		for(coluna = 0; coluna < ordem; coluna++)
			scanf("%d", &m2[linha][coluna]);
	}
	for(linha = 0; linha < ordem; linha++){
		for(coluna = 0; coluna < ordem; coluna++)
			ms[linha][coluna] = m1[linha][coluna] + m2[linha][coluna];
	}
	printf("Matriz A\n");
	for(linha = 0; linha < ordem; linha++){
		for(coluna = 0; coluna < ordem; coluna++){
		    printf("%d", m1[linha][coluna]);
		    if( (ordem - coluna) != 1)
		        printf(" ");
		}
		printf("\n");
	}
	printf("Matriz B\n");
	for(linha = 0; linha < ordem; linha++){
		for(coluna = 0; coluna < ordem; coluna++){
		    printf("%d", m2[linha][coluna]);
		    if( (ordem - coluna) != 1)
		        printf(" ");
		}
		printf("\n");
	}
	printf("Matriz Resultante\n");
	for(linha = 0; linha < ordem; linha++){
		for(coluna = 0; coluna < ordem; coluna++){
		    printf("%d", ms[linha][coluna]);
		    if( (ordem - coluna) != 1)
		        printf(" ");
		}
		printf("\n");
	}
	return 0;
}