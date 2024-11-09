/* Dados dois números inteiros, faça um programa em C
   para mostrar o maior número */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	int num1, num2;
	
	printf("Informe um número inteiro: n1 = ");
	scanf("%d",&num1);
	printf("Informe um outro número inteiro: n2 = ");
	scanf("%d",&num2);
	//if - estrutura condicional simples
	if (num1 > num2) {
		printf("O número n1 = %d é maior !\n",num1);
	}	
	if (num1 < num2) {
		printf("O número n2 = %d é maior !\n",num2);
	}
	if (num1 == num2) {
		printf("Os números (n1 = %d e n2 = %d) são iguais !\n",num1,num2);
	}
	system("pause");
	return 0;
}
