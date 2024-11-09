#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//Bibloteca para usar setLocale(LC_aLL, "portuguese")
int main(){
	
	setlocale(LC_ALL, "portuguese"); // para mensagens com acentos
	
	
	
	float sal_atual , sal_aumento, aumento;
	char nome[30];
	
	printf("Coloque o seu nome:");
	gets(nome);
	
	printf("Informe seu salario atual RS: ");
	scanf("%f" , &sal_atual);
	
	aumento = (15.35/100)*sal_atual;
	sal_aumento = aumento + sal_atual;
	
	printf("%s, voce recebeu um aumento de %.2f, e agora o seu salario e : %.2f\n" , nome, aumento , sal_aumento);
	
	system("pause");
	
	return 0;
}
