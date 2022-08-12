#include <stdio.h>

int tabuleiro[10][10];

void colocarAgua(int _posicaoAguaX, int _posicaoAguaY, int _altura){
    if( _posicaoAguaX >= 0 && _posicaoAguaX <= 9 && _posicaoAguaY >= 0 && _posicaoAguaY <= 9 && tabuleiro[_posicaoAguaX][_posicaoAguaY] != -1 && _altura >= tabuleiro[_posicaoAguaX][_posicaoAguaY]){
        tabuleiro[_posicaoAguaX][_posicaoAguaY] = -1;
        colocarAgua(_posicaoAguaX, _posicaoAguaY - 1, _altura);
        colocarAgua(_posicaoAguaX + 1, _posicaoAguaY, _altura);
        colocarAgua(_posicaoAguaX, _posicaoAguaY + 1, _altura);
        colocarAgua(_posicaoAguaX - 1, _posicaoAguaY, _altura);
    }
}

int main(){
    int i, j, qtdPicos, qtdAguas, posicaoX, posicaoY, altura, tabuleiroTemp[10][10];
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
            tabuleiroTemp[i][j] = 0;
        }
    }
    scanf("%d %d", &qtdPicos, &qtdAguas);
    for(int pico = 0; pico < qtdPicos; pico++){
        scanf("%d %d %d", &posicaoX, &posicaoY, &altura);
        altura += tabuleiro[posicaoX][posicaoY];
        //printf("Altura: %d\n", altura);
        for(int contador = 0; contador < altura; contador++){
            for(i = (posicaoX - (altura - 1) + contador); i < ( (posicaoX - (altura - 1) ) + (2*altura - 1) - contador ); i++){
                for(j = (posicaoY - (altura - 1) + contador); j < ( (posicaoY - (altura - 1) ) + (2*altura - 1) - contador ); j++){
                    if( (i >= 0 && i <= 9) && (j >= 0 && j <= 9) )
                        tabuleiroTemp[i][j]++;
                }
            }
        }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(tabuleiroTemp[i][j] > tabuleiro[i][j])
                tabuleiro[i][j] = tabuleiroTemp[i][j];
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
            tabuleiroTemp[i][j] = 0;
    }
    }
    for(int agua = 0; agua < qtdAguas; agua++){
        scanf("%d %d %d", &posicaoX, &posicaoY, &altura);
        colocarAgua(posicaoX, posicaoY, altura);
    }
    printf("  | 0 1 2 3 4 5 6 7 8 9 \n--+-------------------- \n");
    for(i = 0; i < 10; i++){
        printf("%d | ", i);
        for(j = 0; j < 10; j++){
            if(tabuleiro[i][j] != -1)
                printf("%d ", tabuleiro[i][j]);
            else
                printf("W ");
        }
        printf("\n");
    }
    return 0;
}