#include <stdio.h>

int main(){
    unsigned int alturaPilhas[5] = {0, 0, 0, 0, 0}, ultimaMoeda[5] = {0, 0, 0, 0, 0}, moedas[20], contador;
    for(contador = 0; contador < 20; contador++){
        scanf("%d", &moedas[contador]);
        for(int pilha = 0; pilha < 5; pilha++){
            if(ultimaMoeda[pilha] == 0 || ultimaMoeda[pilha] >= moedas[contador]){
                ultimaMoeda[pilha] = moedas[contador];
                alturaPilhas[pilha]++;
                break;
            }
        }
    }
    printf("%d %d %d %d %d", alturaPilhas[0], alturaPilhas[1], alturaPilhas[2], alturaPilhas[3], alturaPilhas[4]);
    return 0;
}