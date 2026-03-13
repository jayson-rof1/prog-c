#include <stdio.h>
#include <math.h>

int main(){
	/*Faça um programa que leia a base e a altura de um retângulo e escreva o seu perímetro, a sua
área e a sua diagonal.
	*/
	float base, altura;
	printf("Digite a base e a altura do retangulo: \n");
	scanf("%f%f", &base, &altura);
	
	printf("Perimetro: %.2f\nArea: %.2f\nDiagonal: %.2f", 2.0*(base + altura), base*altura ,sqrt(pow(base,2) + pow(altura, 2)));
	
	
}
