#include <stdio.h>
#include <string.h>

int main(){
	int totalLinhas, totalColunas, vida = 100, moedas = 0, posicaoPerson[2] = {0, 0};
	char entrada[60], traj[20];;
	scanf("%d", &totalLinhas);
	scanf("%d", &totalColunas);
	int tabuleiro[totalLinhas][totalColunas];
	for(int linha = 0; linha < totalLinhas; linha++){
		for(int coluna = 0; coluna < totalColunas; coluna++)
		    scanf("%d,", &tabuleiro[linha][coluna]);
	}
	scanf("%s", traj);
	for (int posChar = 0; posChar < strlen(traj); posChar++){
        switch(traj[posChar]){
            case 'A':
                posicaoPerson[0] -= 1;
            break;           
            case 'D':
                posicaoPerson[0] += 1;
            break;
            case 'W':
                posicaoPerson[1] -= 1;
            break;
            case 'S':
                posicaoPerson[1] += 1;
            break;
        }
        if(tabuleiro[posicaoPerson[1]][posicaoPerson[0]] == 11){
            moedas++;
            tabuleiro[posicaoPerson[1]][posicaoPerson[0]] = 0;
        }else if(tabuleiro[posicaoPerson[1]][posicaoPerson[0]] == 22)
            vida -= 5;
	}
	printf("posicao x:  %d\n", posicaoPerson[0]);
	printf("posicao y:  %d\n", posicaoPerson[1]);
	printf("moedas:  %d\n", moedas);
	printf("life:  %d", vida);
	return 0;
}