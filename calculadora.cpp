#include <stdio.h>

int main(){

/*Leia dois números inteiros e mostre a soma, multiplicação,
divisão e subtração do primeiro pelo segundo.*/

    int num1, num2, soma, mult, sub;
    float div;
    
    printf("Escreva dois numeros inteiros (num num): ");
    scanf("%d %d", &num1, &num2);
    
    soma = num1 + num2;
    mult = num1 * num2;
    sub = num1 - num2;
    div = (float) num1 / num2;
    
    printf("\nSoma: %d", soma);
    printf("\nMultiplicacao: %d", mult);
    printf("\nDivisao: %.2f", div);
    printf("\nSubtracao: %d", sub);

}
