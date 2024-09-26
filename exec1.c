#include <stdio.h>

int main() {
	int num;
	int divs = 0;
	puts("Qual número deseja verificar?");
	scanf("%d", &num);
	for (int i = 1; i <=num ;i++){
		if (num % i == 0) {
			divs++;
		}
	}
	if (divs == 2){
		printf("O número %d possui %d divisores portanto é primo\n", num, divs);
	}
	else
		printf("O número %d possui %d divisores portanto não é primo\n", num, divs);
	
	return 0;
}
