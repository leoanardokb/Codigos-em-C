#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if ((valor % 2) == 0) {
        printf("O número %d é par.\n", valor);
    } else {
        printf("O número %d é ímpar.\n", valor);
    }

    return 0;
}