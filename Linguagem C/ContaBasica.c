#include<stdio.h>

int main(){
	
	//declarao de variavel
	int num1 , num2; // variavel para entrada de dados
	int soma; // variavel para saida de dados
	
	/* O comando scanf() é para receber dado digitado por usuario
	%d formatação em inteiro*/
	
	printf("Escreva primeiro numero: ");
	scanf("%d" , &num1);
	
	printf("Escreva segundo numero: ");
	scanf("%d" , &num2);
	
	//Realizar a operção da soma
	
	soma = num1 + num2;
	printf("Resultado da soma = %d " , soma);
	
	
	return 0;
}
