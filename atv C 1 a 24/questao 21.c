#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int lado_a, lado_b, lado_c;

    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &lado_a);

    printf("Digite o valor do segundo lado: ");
    scanf("%d", &lado_b);

    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &lado_c);

    if ((lado_a < lado_b + lado_c) && (lado_b < lado_a + lado_c) && (lado_c < lado_a + lado_b)) {
        if (lado_a == lado_b && lado_b == lado_c) {
            printf("\nOs valores formam um Triângulo Equilátero.\n");
        } else if (lado_a == lado_b || lado_b == lado_c || lado_a == lado_c) {
            printf("\nOs valores formam um Triângulo Isósceles.\n");
        } else {
            printf("\nOs valores formam um Triângulo Escaleno.\n");
        }
    } else {
        printf("\nOs valores informados não podem formar um triângulo.\n");
    }

    return 0;
}