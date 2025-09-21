#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero_macas;
    double valor_total;

    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &numero_macas);

    if (numero_macas < 12) {
        valor_total = numero_macas * 0.30;
    } else {
        valor_total = numero_macas * 0.25;
    }

    printf("\nO valor total da compra é: R$ %.2f\n", valor_total);

    return 0;
}