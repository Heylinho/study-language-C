#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int soma, num;
	soma = 0;
	num = 0;
	
	do{
		soma = soma + num;
		printf("Digite um númeoro inteiro para somar ou número 0 apra finalizar \n");
		scanf("%d" , &num);
	}while(num != 0);
	
	printf("O resultado da soma = %d\n" , soma);
	
	system("pause");
	return 0;
}
