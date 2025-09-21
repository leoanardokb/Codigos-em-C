#include <stdio.h>

int main() {
    int valor_saque, valor_original;
    int quantidade_cedulas;

    printf("Digite o valor inteiro a ser sacado: R$ ");
    scanf("%d", &valor_saque);

    if (valor_saque <= 0) {
        printf("Valor invalido. O saque deve ser de um valor positivo.\n");
        return 1;
    }

    valor_original = valor_saque;

    printf("\nPara sacar R$ %d, voce recebera:\n", valor_original);

    quantidade_cedulas = valor_saque / 200;
    if (quantidade_cedulas > 0) {
        printf("%d cedula(s) de R$ 200\n", quantidade_cedulas);
        valor_saque %= 200;
    }

    quantidade_cedulas = valor_saque / 100;
    if (quantidade_cedulas > 0) {
        printf("%d cedula(s) de R$ 100\n", quantidade_cedulas);
        valor_saque %= 100;
    }

    quantidade_cedulas = valor_saque / 50;
    if (quantidade_cedulas > 0) {
        printf("%d cedula(s) de R$ 50\n", quantidade_cedulas);
        valor_saque %= 50;
    }

    quantidade_cedulas = valor_saque / 20;
    if (quantidade_cedulas > 0) {
        printf("%d cedula(s) de R$ 20\n", quantidade_cedulas);
        valor_saque %= 20;
    }

    quantidade_cedulas = valor_saque / 10;
    if (quantidade_cedulas > 0) {
        printf("%d cedula(s) de R$ 10\n", quantidade_cedulas);
        valor_saque %= 10;
    }

    quantidade_cedulas = valor_saque / 5;
    if (quantidade_cedulas > 0) {
        printf("%d cedula(s) de R$ 5\n", quantidade_cedulas);
        valor_saque %= 5;
    }

    quantidade_cedulas = valor_saque / 2;
    if (quantidade_cedulas > 0) {
        printf("%d cedula(s) de R$ 2\n", quantidade_cedulas);
        valor_saque %= 2;
    }

    if (valor_saque > 0) {
        printf("\nNao foi possivel entregar o valor restante de R$ %d com as cedulas disponiveis.\n", valor_saque);
    }

    return 0;
}