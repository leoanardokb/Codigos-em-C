#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
        printf("\nOs n�meros s�o iguais.\n");
    } else {
        printf("\nOs n�meros s�o diferentes.\n");
        if (numero1 > numero2) {
            printf("O maior n�mero �: %d\n", numero1);
        } else {
            printf("O maior n�mero �: %d\n", numero2);
        }
    }

    return 0;
}