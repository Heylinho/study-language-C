#include<stdio.h>
#include<stdlib.h>
int main(){
	float peso, altura; //Entrada de dados
	float imc; //Saida de dados
	
	//Entrada de dados
	printf("Informe o seu peso(kg): ");
	scanf("%f",&peso);
	
	printf("Informe a sua altura(m): ");
	scanf("%f", &altura);
	
	//Calcular imc
	imc = peso / (altura * altura);
	
	//Saida de dados
	printf("Resultado do imc = %.2f\n", imc);
	
	
	system("pause");
	return 0;
}
