#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario_bruto, salario_liquido;
    
    printf("Digite o seu salário: ");
    scanf("%f", &salario_bruto);

    salario_liquido = salario_bruto * (1 - 0.095);
    
    if (salario_liquido < 3000) {
        salario_liquido = salario_liquido * (1 + 0.1545);
        printf("O seu salário teve um aumento de 15.45%%, e agora você está com um salário de %.2f\n", salario_liquido);
    } else {
        printf("Seu salário líquido é %.2f e não foi necessário aplicar aumento.\n", salario_liquido);
    }

    system("pause");
    return 0;
}

