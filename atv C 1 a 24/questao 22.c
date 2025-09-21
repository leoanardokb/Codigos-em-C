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

    printf("\nEscolha a opera��o a ser executada:\n");
    printf("1. Adi��o\n");
    printf("2. Subtra��o\n");
    printf("3. Divis�o\n");
    printf("4. Multiplica��o\n");
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
                printf("\nErro: Divis�o por zero n�o � permitida.\n");
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
            printf("\nErro: Op��o inv�lida. Por favor, escolha um n�mero de 1 a 4.\n");
            break;
    }

    return 0;
}