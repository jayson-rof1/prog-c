#include <stdio.h>

int main(){
	/*Faça um programa que escreva quanto um consumidor deverá pagar na sua conta de luz. Os
dados de entrada do algoritmo devem ser: o nome do consumidor, o seu consumo mensal em
quilowatts, e o preço equivalente a um quilowatt.
	*/
	
	char nome[100];
	int consumokw;
	float precokwh;
	
	printf("Escreva seu nome, consumo mensal e o preco equivalente a um kw: ");
	scanf("%s %d %f", nome, &consumokw, &precokwh);
	
	printf("%s devera pagar: R$%.2f",nome, consumokw*precokwh);
	
}
