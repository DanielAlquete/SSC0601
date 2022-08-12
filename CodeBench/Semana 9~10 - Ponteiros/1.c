#include <stdio.h>

void inverteDigitos(int *num){
	int inverso = 0, resto;
	while (*num != 0){
        resto = *num % 10;
        inverso = inverso * 10 + resto;
        *num /= 10;
    }
    *num = inverso;
}

int main(){
	int num;
	scanf("%d", &num);
	inverteDigitos(&num);
	printf("%d\n", num);
	return 0;
}