#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v1, v2, operacao;
    double resultado;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &v1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &v2);

    printf("\nEscolha a operação a ser executada:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Divisão\n");
    printf("4. Multiplicação\n");
    printf("Sua escolha: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = v1 + v2;
            printf("\nResultado: %d + %d = %.2f\n", v1, v2, resultado);
            break;
        case 2:
            resultado = v1 - v2;
            printf("\nResultado: %d - %d = %.2f\n", v1, v2, resultado);
            break;
        case 3:
            if (v2 == 0) {
                printf("\nErro: Divisão por zero não é permitida.\n");
            } else {
                resultado = (double)v1 / v2;
                printf("\nResultado: %d / %d = %.2f\n", v1, v2, resultado);
            }
            break;
        case 4:
            resultado = v1 * v2;
            printf("\nResultado: %d * %d = %.2f\n", v1, v2, resultado);
            break;
        default:
            printf("\nErro: Opção inválida. Por favor, escolha um número de 1 a 4.\n");
            break;
    }

    return 0;
}