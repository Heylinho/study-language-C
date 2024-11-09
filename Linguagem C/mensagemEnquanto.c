#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int cont;
	for (cont =  1; cont <= 20; cont++){
		printf("Olá, mundo! \n");
		printf("Esse programa rodou %d vezes\n" , cont);
	}
	
	system("pause");
	return 0;
}
