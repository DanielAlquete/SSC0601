#include <stdio.h>

int main(){
	float valor;
	scanf("%f", &valor);
	if (valor>= 200)
	   printf("%f", 0.95*valor);
	else
      printf("%f", valor);
	return 0;
}