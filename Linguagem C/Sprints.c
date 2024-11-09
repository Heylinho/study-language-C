#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_s1, valor_s2, valor_s3, media;
    
    printf("Sprint 1 (20%%)\n");
    printf("Sprint 2 (30%%)\n");
    printf("Sprint 3 (50%%)\n");
    
    printf("---------\n");
    printf("Informe o valor do Sprint 1: ");
    scanf("%f", &valor_s1);
    printf("Informe o valor do Sprint 2: ");
    scanf("%f", &valor_s2);
    printf("Informe o valor do Sprint 3: ");
    scanf("%f", &valor_s3);
    
    media = (0.20 * valor_s1) + (0.30 * valor_s2) + (0.50 * valor_s3);
    
    printf("Sua média no final do trimestre é de: %.2f\n", media);
    
    system("pause");
    
    return 0;
}

