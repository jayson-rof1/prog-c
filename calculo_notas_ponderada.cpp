#include <stdio.h>

int main(){

/*Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e
escreva a média ponderada dessas notas.*/
	float nota1, nota2, nota3, media = 0;
	int p1, p2, p3;
	printf("Quais os pesos das provas? (p1 p2 p3): ");
	scanf("%d %d %d", &p1,&p2,&p3);
	
	printf("\nNota da primeira prova: ");
	scanf("%f", &nota1);
	nota1 *= p1;
	media += nota1;
	
	printf("\nNota da segunda prova: ");
	scanf("%f", &nota2);
	nota2 *= p2;
	media += nota2;
	
	printf("\nNota da terceira prova: ");
	scanf("%f", &nota3);
	nota3 *= p3;
	media += nota3;
	
	media /= (p1+p2+p3);
	
	printf("\nMedia: %.1f", media);

}
