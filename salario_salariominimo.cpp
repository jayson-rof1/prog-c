#include <stdio.h>

int main(){

/*Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e
escrever quantos salários mínimos ganha o funcionário..*/
	float salario, salmin = 1621.00;
	int qtdsal;
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	
	printf("\nDigite o salario minimo vigente: ");
	scanf("%f", &salmin);
	
	qtdsal = salario/salmin;
	
	printf("\nSeu salario corresponde a %d salarios minimos", qtdsal);

}
