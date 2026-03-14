#include <stdio.h>

int main(){
	/*Faça um programa que leia três notas e que calcule e escreva a média aritmética dessas notas.
	*/
	float nota1, nota2, nota3, media = 0;
	
	printf("Nota da primeira prova: ");
	scanf("%f", &nota1);
	media += nota1;
	
	printf("\nNota da segunda prova: ");
	scanf("%f", &nota2);
	media += nota2;
	
	printf("\nNota da terceira prova: ");
	scanf("%f", &nota3);
	media += nota3;
	
	media /= 3.0;
	
	printf("\nMedia: %.1f", media);
}
