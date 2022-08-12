#include <stdio.h>

int main(){
   float altura, largura, comprimento, volume, consumoMedio, autonomia;
	scanf("%f %f %f %f", &altura, &largura, &comprimento, &consumoMedio);
	volume = (altura * largura * comprimento) / 1000;
	autonomia = volume / consumoMedio;
	printf("Capacidade do Reservatorio= %.1f litros\n", volume);
	printf("Autonomia do reservatorio= %.1f dias\n", autonomia);
	if (autonomia < 2)
		printf("Consumo Elevado");
	else if (autonomia >= 2 && autonomia <= 7)
		printf("Consumo Moderado");
	else if (autonomia > 7)
		printf("Consumo Reduzido");
   return 0;
}