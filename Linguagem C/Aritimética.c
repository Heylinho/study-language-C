#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Corrigido para o locale padrão do Brasil
    setlocale(LC_ALL, "portuguese");
    
    int opcao;
    int num1, num2 , resultado;
    
    printf("Menu para operação aritmética\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicação\n");
    printf("4 - Dividir\n\n");
    
	
	printf("Primeiro número inteiro para operação: n1 = ");
	scanf("%d", &num1);
	printf("Segundo número inteiro para operação: n2 = ");
	scanf("%d", &num2);
	
	printf("Escolha a sua opção: ");
	scanf("%d" , &opcao);
	printf("\n");
	switch(opcao){
		case 1:
			resultado = num1 + num2;
			printf("O resultado da soma: %d\n" , resultado);
		break;
		
		case 2:
			resultado = num1 - num2;
			printf("O resultado da subtração: %d\n" , resultado);
		break;
		
		case 3:
			resultado = num1 * num2;
			printf("O resultado da multiplicação: %d\n" , resultado);
		break;
		
		case 4:
			resultado = num1 / num2;
			printf("O resultado da divisão: %d\n" , resultado);
		break;
		
		default:
		printf("Você digitou um valor inválido!\n");
	}
    
    
    system("pause");
    return 0;
}

