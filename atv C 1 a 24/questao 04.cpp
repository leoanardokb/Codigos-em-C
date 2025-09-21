#include <stdio.h>

int main() {
    float numero1, numero2;
    float soma, produto, quociente;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;
    produto = numero1 * numero2;

    printf("\na) A soma: %.2f\n", soma);
    printf("b) O produto: %.2f\n", produto);

    if (numero2 == 0) {
        printf("c) O quociente: Nao e possivel dividir por zero.\n");
    } else {
        quociente = numero1 / numero2;
        printf("c) O quociente: %.2f\n", quociente);
    }

    return 0;
}