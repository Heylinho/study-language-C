/* Dados dois n�meros inteiros, fa�a um programa em C
   para mostrar o maior n�mero */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	int num1, num2;
	
	printf("Informe um n�mero inteiro: n1 = ");
	scanf("%d",&num1);
	printf("Informe um outro n�mero inteiro: n2 = ");
	scanf("%d",&num2);
	//if - estrutura condicional simples
	if (num1 > num2) {
		printf("O n�mero n1 = %d � maior !\n",num1);
	}	
	if (num1 < num2) {
		printf("O n�mero n2 = %d � maior !\n",num2);
	}
	if (num1 == num2) {
		printf("Os n�meros (n1 = %d e n2 = %d) s�o iguais !\n",num1,num2);
	}
	system("pause");
	return 0;
}
