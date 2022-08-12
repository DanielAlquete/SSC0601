#include <stdio.h>
#include <stdlib.h>

int calcularMDC(int *_num1, int *_num2){
    int mdc;
    for(int i = 1; i <= *_num1 && i <= *_num2; ++i){
        if(*_num1 % i == 0 && *_num2 % i == 0)
            mdc = i;
    }
    return mdc;
}

int main(){
	int *num1, *num2;
	do{
		num1 = (int *) malloc (sizeof(int));
		num2 = (int *) malloc (sizeof(int));
		scanf("%d", num1);
		scanf("%d", num2);
		if (!(*num1 == 1 && *num2 == 1))
		    printf("%d\n", calcularMDC(num1, num2));
	}while(!(*num1 == 1 && *num2 == 1));
	return 0;
}