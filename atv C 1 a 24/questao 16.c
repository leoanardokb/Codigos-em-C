#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor < 0) {
        valor = -valor;
    }

    printf("O resultado é: %d\n", valor);

    return 0;
}