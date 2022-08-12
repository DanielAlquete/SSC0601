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
    liberar_matriz(mat, linhas);
}
void somar_matrizes(int **mat1, int **mat2, int linhas, int colunas){
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            mat1[i][j] += mat2[i][j];
    liberar_matriz(mat2, linhas);
    imprimir_matriz(mat1, linhas, colunas);
}
int main(void){
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    somar_matrizes(ler_matriz(linhas, colunas), ler_matriz(linhas, colunas), linhas, colunas);
	 return 0;
}