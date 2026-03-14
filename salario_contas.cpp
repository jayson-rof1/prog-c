#include <stdio.h>
#include <stdlib.h>

int main(){
	/*João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas estão
atrasadas, João deverá pagar uma multa de 2% sobre cada uma. Faça um programa que leia o
valor do salário de João e das contas que ele deve pagar, e que mostre quanto restará do seu
salário após o pagamento das contas.	*/
	
	float salario, contas, conta1, conta2;
	
	printf("Qual o valor do salario de Joao: ");
	scanf("%f", &salario);
	
	printf("\nQual o valor da primeira conta vencida?: ");
	scanf("%f", &conta1);
	conta1 += conta1*0.02;
	
	printf("\nQual o valor da segunda conta vencida?: ");
	scanf("%f", &conta2);
	conta2 += conta2*0.02;
	system("cls");
	
	contas = conta1 + conta2;
	salario -= contas;
	
	printf("Restarao R$%.2f do salario de Joao", salario);
}
