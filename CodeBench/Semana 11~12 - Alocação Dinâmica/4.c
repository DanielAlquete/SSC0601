#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int linhas, colunas, i, j, v1, v2, aux;
    scanf("%u %u", &linhas, &colunas);
    unsigned int **mat = (unsigned int **) malloc(linhas * sizeof(unsigned int*));
    for(i = 0; i < linhas; i++)
        mat[i] = malloc(colunas * sizeof(unsigned int));
    for(j = 0; j < colunas; j++)
        mat[0][j] = j + 1;
    for(unsigned int n = 1; n < linhas; n++){
        for(j = 0; j < colunas; j++)
            mat[n][j]= mat[n - 1][j];
        scanf("%u %u", &v1, &v2);
        if(v2 < v1){
            aux = v2;
            v2 = v1;
            v1 = aux;
        }
        unsigned int comprimento = (v2 - v1 + 1);
        for (i = 0; i < (comprimento/2); i++){
            aux = mat[n][i + v1 - 1];
            mat[n][i + v1 - 1] = mat[n][comprimento - i - 1 + v1 - 1];
            mat[n][comprimento - i - 1 + v1 - 1] = aux;
        }
    }
    unsigned int* somaColunas = (unsigned int *) malloc(colunas * sizeof(unsigned int));
    for(j = 0; j < colunas; j++){
        somaColunas[j] = 0;
        for(i = 0; i < linhas; i++)
            somaColunas[j] += mat[i][j];
    }
    unsigned int maiorColuna, menorColuna;
    maiorColuna = menorColuna = somaColunas[0];
    for(j = 0; j < colunas; j++){
        if(maiorColuna < somaColunas[j])
            maiorColuna = somaColunas[j];
        if(menorColuna > somaColunas[j])
            menorColuna = somaColunas[j];
    }
    printf("%u %u", menorColuna, maiorColuna);
    return 0;
}