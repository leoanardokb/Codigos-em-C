#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O n�mero %d � positivo.\n", numero);
    } else if (numero < 0) {
        printf("O n�mero %d � negativo.\n", numero);
    } else {
        printf("O n�mero � zero.\n");
    }

    return 0;
}
