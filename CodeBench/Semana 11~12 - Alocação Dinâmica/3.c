#include <stdio.h>
#include <stdlib.h>

int **ler_matriz(int linhas, int colunas){
    int i, j;
    int **mat = (int **) malloc(linhas * sizeof(int*));
    for(i = 0; i < linhas; i++)
        mat[i] = malloc(colunas * sizeof(int));
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++)
            scanf("%d", &mat[i][j]);
    }
    return mat;
}
void liberar_matriz(int **mat, int linhas){
    for (int i = 0; i < linhas; i++)
        free (mat[i]);
    free (mat);
}
void imprimir_matriz(int **mat, int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(j != (colunas - 1) )
                printf("%d ", mat[i][j]);
            else
                printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}
int** somar_matrizes(int **mat1, int **mat2, int linhas, int colunas){
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            mat1[i][j] += mat2[i][j];
    return mat1;
}
int main(void){
    int linhas, colunas, qtdMatriz, i, j;
    i = j = 0;
    scanf("%d", &qtdMatriz);
    int ***matrizes = (int ***) malloc(qtdMatriz * sizeof(int**));
    scanf("%d %d", &linhas, &colunas);
    for(int p = 0; p < qtdMatriz; p++)
        matrizes[p] = ler_matriz(linhas, colunas);
    do{
        scanf("%d %d", &i, &j);
        if(i != 0 || j != 0)
            matrizes[i] = somar_matrizes(matrizes[i], matrizes[j], linhas, colunas);
    }while(i != 0 || j != 0);
    imprimir_matriz(matrizes[0], linhas, colunas);
    for(int p = 0; p < qtdMatriz; p++)
        liberar_matriz(matrizes[p], linhas);
    return 0;
}