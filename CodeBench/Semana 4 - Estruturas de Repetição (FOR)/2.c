#include <stdio.h>

int main(){
	double saldo;
	int meses;
	scanf("%lf %d", &saldo, &meses);
	for(int contador = 1; contador <= meses; contador++){
		saldo *= 1.04;
		printf("%.2lf\n", saldo);
	}
	return 0;
}