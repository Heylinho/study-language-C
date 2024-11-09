#include<stdio.h>
#include<stdlib.h>
#include<time.h>//uma biblioteca para gerar os números aleatorios
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int cont, num, qtd;
	srand(time(NULL));//semente para gerar uma sequencia de números
	
	printf("Informe a quantidade de número para MEGASENA: n = ");
	scanf("%d" , &qtd);
	printf("\n");
	printf("Os numeros gerados para MEGASENA:\n");
	cont = 1;
	while (cont <=qtd ){
		num = 1 + rand()%60;
		printf("%d\n" , num);
		cont++;
	}
	
	system("pause");
	return 0;
}
