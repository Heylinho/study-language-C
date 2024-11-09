#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	//Entrada de dados
    char animal[10];
    int qua_animal;
    int kilo;
    int kiloday;
    
    //Saida de dados
    int custday;
    int kilomes;
    int custmes;
    
    // Entrada de dados
    printf("Tipo de animal: ");
    gets(animal);
    
    printf("Quantidade desse animal no zoologico: ");
    scanf("%d", &qua_animal); 
    
    printf("Custo estimado por kilo de comida (R$): ");
    scanf("%d", &kilo);
    
    printf("Quantidade de comida por kilo deste animal consuma por dia (kg): ");
    scanf("%d", &kiloday);
    
    printf("__________________________________\n");
    
    custday = (kilo * kiloday) * qua_animal;
    
    kilomes = (kiloday * 30)* qua_animal;
    
    custmes = custday*30;
    
    
    // Saida de dados
    printf("Custo estimado por dia (R$): %d\n" , custday);
    
    printf("Quantidade de comida consuma por mês: %d\n" , kilomes);
    
    printf("Custo estimado por mês (R$): %d\n" , custmes);

	system("pause");
    return 0;
}

