#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
        printf("\nOs números são iguais.\n");
    } else {
        printf("\nOs números são diferentes.\n");
        if (numero1 > numero2) {
            printf("O maior número é: %d\n", numero1);
        } else {
            printf("O maior número é: %d\n", numero2);
        }
    }

    return 0;
}