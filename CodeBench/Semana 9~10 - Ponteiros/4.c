#include <stdio.h>

void ordernar(int *_v1, int *_v2, int *_n, int *_m){
    int vetorOrd[*_n + *_m];
    int i = 0;
    for(;i < *_n; i++)
        vetorOrd[i] = *(_v1 + i);
    for(;i < (*_n + *_m); i++)
        vetorOrd[i] = *(_v2 - (*_n - i));
    int auxiliar;
	for(int i = 0; i < *_n + *_m; i++){
		for(int j = 1; j < (*_n + *_m) - i; j++){
            if(vetorOrd[j - 1] > vetorOrd[j]){
			    auxiliar = vetorOrd[j - 1];
				vetorOrd[j - 1] = vetorOrd[j];
				vetorOrd[j] = auxiliar;
            }
		}
	}
    for(i = 0; i < (*_n + *_m); i++){
        printf("%d", vetorOrd[i]);
        if (i != ( (*_n + *_m) - 1 ))
            printf(" ");
    }
    printf("\n");
}

int main(){
	int i, j, k, m, n;
	scanf("%d", &k);
	for(i = 0; i < k; i++){
		scanf("%d", &n);
		int v1[n];
		for(j = 0; j < n; j++)
			scanf("%d", &v1[j]);
	    scanf("%d", &m);
		int v2[m];
		for(j = 0; j < m; j++)
			scanf("%d", &v2[j]);
		ordernar(v1, v2, &n, &m);
	}
	return 0;
}