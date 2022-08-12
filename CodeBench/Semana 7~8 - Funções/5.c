#include <stdio.h>

int somar(int _n1, int _n2){
	int soma = 0;
	for(int i = _n1; i <= _n2; i++){
		if(!(i%2))
		    soma += i;
	}
	return soma;
}

int main(){
	int n1, n2;
	do{
	    scanf("%d%d", &n1, &n2);
	    if(n1 < n2)
	        printf("%d\n", somar(n1, n2));
	}while(n1 < n2);
	return 0;
}