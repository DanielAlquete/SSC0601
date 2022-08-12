#include <stdio.h>

int main(){
	int m[3][3];
	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 3; coluna++)
			scanf("%d", &m[linha][coluna]);
	}
	printf("SOMA = %d", m[0][2] + m[1][1] + m[2][0]);
	return 0;
}