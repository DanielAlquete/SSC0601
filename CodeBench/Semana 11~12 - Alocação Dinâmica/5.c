#include <stdio.h>
#include <stdlib.h>

int main(){
    long int linhas, colunas, i, j, v1, v2, aux, n[2];
    n[0] = n[1] = 0;
    scanf("%ld %ld", &linhas, &colunas);
    long int **mat = (long int **) malloc(linhas * sizeof(long int*));
    for(i = 0; i < linhas; i++)
        mat[i] = malloc(colunas * sizeof(long int));
    for(j = 0; j < colunas; j++){
        if(j%2 == 0){
            mat[0][j] = j + 1;
            mat[1][j] = 0;
        }else{
            mat[0][j] = 0;
            mat[1][j] = j + 1;
        }
    }
    for(long int n = 2; n < linhas; n++){
        scanf("%ld %ld", &v1, &v2);
        if(v2 < v1){
            aux = v2;
            v2 = v1;
            v1 = aux;
        }
        for(j = 0; j < colunas; j++)
            if(j >= (v1 - 1) && j <= (v2 - 1))
                mat[n][j] = mat[n - 2][j] - mat[n - 1][j];
            else
                mat[n][j] =  mat[n - 2][j] + mat[n - 1][j];
    }
    for(j = 0; j < colunas; j++){
        if(mat[linhas - 1][j] < 0)
            n[0]++;
        else if(mat[linhas - 1][j] > 0)
            n[1]++;
    }
    printf("%ld %ld", n[0], n[1]);
    return 0;
}