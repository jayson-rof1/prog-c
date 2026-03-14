#include <stdio.h>

int main(){
	/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um
programa que receba o valor do salário fixo do funcionário, o valor das suas vendas e que calcule
e mostre o salário final do funcionário.	*/
	
	float salario, vendas;
	
	printf("Digite o valor do salario fixo do funcionario: ");
	scanf("%f", &salario);
	
	printf("\nDigite o valor das vendas feitas: ");
	scanf("%f", &vendas);
	
	vendas *= 0.04;
	
	printf("\nSalario final mensal: %.2f", salario + vendas);
}