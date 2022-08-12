#include <stdio.h>

void ordernarNumeros(int _numeros[3]){
    int auxiliar;
	for(int i = 0; i < 3; i++){
		for(int j = 1; j < 3-i; j++){
            if(_numeros[j - 1] > _numeros[j]){
			    auxiliar = _numeros[j - 1];
				_numeros[j - 1] = _numeros[j];
				_numeros[j] = auxiliar;
            }
		}
	}
	printf("%d\n%d\n%d", _numeros[0], _numeros[1], _numeros[2]);
}

int main(){
	int numeros[3];
	scanf("%d%d%d", &numeros[0], &numeros[1], &numeros[2]);
	ordernarNumeros(numeros);
	return 0;
}