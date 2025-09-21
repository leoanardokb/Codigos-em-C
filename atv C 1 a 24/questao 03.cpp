#include <stdio.h>

int main() {
    int x, y;
    int quociente, resto;

    printf("Digite o primeiro numero inteiro (dividendo): ");
    scanf("%d", &x);

    printf("Digite o segundo numero inteiro (divisor): ");
    scanf("%d", &y);

    if (y == 0) {
        printf("\nErro: A divisao por zero eh indefinida.\n");
    } else {
        quociente = x / y;
        resto = x % y;

        printf("\nO quociente da divisao de %d por %d eh: %d\n", x, y, quociente);
        printf("O resto da divisao de %d por %d eh: %d\n", x, y, resto);
    }

    return 0;
}