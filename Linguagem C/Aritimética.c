#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Corrigido para o locale padr�o do Brasil
    setlocale(LC_ALL, "portuguese");
    
    int opcao;
    int num1, num2 , resultado;
    
    printf("Menu para opera��o aritm�tica\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Dividir\n\n");
    
	
	printf("Primeiro n�mero inteiro para opera��o: n1 = ");
	scanf("%d", &num1);
	printf("Segundo n�mero inteiro para opera��o: n2 = ");
	scanf("%d", &num2);
	
	printf("Escolha a sua op��o: ");
	scanf("%d" , &opcao);
	printf("\n");
	switch(opcao){
		case 1:
			resultado = num1 + num2;
			printf("O resultado da soma: %d\n" , resultado);
		break;
		
		case 2:
			resultado = num1 - num2;
			printf("O resultado da subtra��o: %d\n" , resultado);
		break;
		
		case 3:
			resultado = num1 * num2;
			printf("O resultado da multiplica��o: %d\n" , resultado);
		break;
		
		case 4:
			resultado = num1 / num2;
			printf("O resultado da divis�o: %d\n" , resultado);
		break;
		
		default:
		printf("Voc� digitou um valor inv�lido!\n");
	}
    
    
    system("pause");
    return 0;
}

