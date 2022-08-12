#include <stdio.h>
#include <math.h>

int calcularMDC(int _num1, int _num2){
    int mdc;
    for(int i = 1; i <= _num1 && i <= _num2; ++i){
        if(_num1 % i == 0 && _num2 % i == 0)
            mdc = i;
    }
    return mdc;
}

void simplifica_fracao(int *numerador, int *denominador){
	int mdc = calcularMDC(*numerador, *denominador);
	*numerador /= mdc;
	*denominador /= mdc;
}

int main(){
	int numerador, denominador;
	while (scanf("%d %d", &numerador, &denominador) != EOF){
	    if(numerador != 0)
	        simplifica_fracao(&numerador, &denominador);
	    else
	        denominador = 1;
	    printf("%d/%d\n", numerador, denominador);
	}
	return 0;
}