#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if ((valor % 2) == 0) {
        printf("O n�mero %d � par.\n", valor);
    } else {
        printf("O n�mero %d � �mpar.\n", valor);
    }

    return 0;
}