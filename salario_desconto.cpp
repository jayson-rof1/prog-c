#include <stdio.h>

int main(){

/*Faça um programa que leia o salário de um funcionário e que calcule e escreva o salário com um
desconto de 10%.*/
	float salario;
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	salario *= 0.90;
	
	printf("\nSeu salario com o desconto eh de : %.2f", salario);

}
