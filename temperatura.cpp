#include <stdio.h>

int main(){

/*Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit.
C = 5/9 (F-32)*/
	float cels, fhrt;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &cels);
	
	fhrt = (cels * (9.0/5.0) + 32.0);
	
	printf("\n%.1f C = %.1f graus F",cels, fhrt);

}
