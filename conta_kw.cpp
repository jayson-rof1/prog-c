#include <stdio.h>

int main(){
	/*Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça um programa que
leia o valor do salário mínimo e a quantidade de quilowatts gasta por um usuário e calcule e
escreva: o valor de um quilowatt e o valor da conta de energia do usuário.
1.621,00
	*/
	
	float precokw, salmin, kw;
	
	printf("Valor do salario minimo: ");
	scanf("%f", &salmin);
	
	printf("\nQuantidade de quilowatts consumida: ");
	scanf("%f", &kw);
	
	precokw = salmin * 0.10;
	
	printf("\nO valor do quilowatt eh %.2f\n\nO valor a ser pago eh de %.2f", precokw, kw*precokw);
	
}
