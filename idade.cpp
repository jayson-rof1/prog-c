#include <stdio.h>

int main(){

/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcular e
escrever a idade dessa pessoa em anos, meses e semanas.*/
	int anonasce, anoatual, anos, meses, semanas;
	
	printf("Digite o ano de nascimento e o ano atual (aaaa aaaa): ");
	scanf("%d %d", &anonasce, &anoatual);
	
	anos = anoatual - anonasce; 
	meses = anos*12;
	semanas = anos*52;
	
	printf("\nIdade em anos: %d\nIdade em meses: %d\nIdade em semanas: %d",anos, meses,semanas);
	
}
