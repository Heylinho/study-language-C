#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario_bruto, salario_liquido;
    
    printf("Digite o seu sal�rio: ");
    scanf("%f", &salario_bruto);

    salario_liquido = salario_bruto * (1 - 0.095);
    
    if (salario_liquido < 3000) {
        salario_liquido = salario_liquido * (1 + 0.1545);
        printf("O seu sal�rio teve um aumento de 15.45%%, e agora voc� est� com um sal�rio de %.2f\n", salario_liquido);
    } else {
        printf("Seu sal�rio l�quido � %.2f e n�o foi necess�rio aplicar aumento.\n", salario_liquido);
    }

    system("pause");
    return 0;
}

