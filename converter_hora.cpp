#include <stdio.h>

int main(){
	/*Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule
e mostre a hora convertida em minutos e em segundos.	*/
	int hr, min, hrmin, minseg;
	
	printf("Digite as horas(hh:mm): ");
	scanf("%d:%d", &hr, &min);
	
	hrmin = (hr*60) + min;
	printf("\n\nHora --> Minuto:\n%d minutos", hrmin);
	minseg = hrmin*60;
	printf("\n\nHora --> Segundo:\n%d segundos", minseg);
}