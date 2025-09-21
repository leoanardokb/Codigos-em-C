#include <stdio.h>
#include <math.h>

int main() {
    double valor_compra, valor_pago;

    printf("Digite o valor da compra: R$ ");
    scanf("%lf", &valor_compra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%lf", &valor_pago);

    if (valor_pago < valor_compra) {
        printf("\nO valor pago e insuficiente.\n");
        return 1;
    }

    double troco = valor_pago - valor_compra;

    if (troco < 0.001) {
        printf("\nNao ha troco.\n");
        return 0;
    }

    printf("\nTroco total: R$ %.2f\n", troco);
    printf("----------------------------------\n");
    printf("Distribuicao do troco:\n");

    int troco_em_centavos = (int)round(troco * 100);
    int quantidade;

    quantidade = troco_em_centavos / 20000;
    if (quantidade > 0) {
        printf("%d cedula(s) de R$ 200.00\n", quantidade);
        troco_em_centavos %= 20000;
    }

    quantidade = troco_em_centavos / 10000;
    if (quantidade > 0) {
        printf("%d cedula(s) de R$ 100.00\n", quantidade);
        troco_em_centavos %= 10000;
    }

    quantidade = troco_em_centavos / 5000;
    if (quantidade > 0) {
        printf("%d cedula(s) de R$ 50.00\n", quantidade);
        troco_em_centavos %= 5000;
    }

    quantidade = troco_em_centavos / 2000;
    if (quantidade > 0) {
        printf("%d cedula(s) de R$ 20.00\n", quantidade);
        troco_em_centavos %= 2000;
    }

    quantidade = troco_em_centavos / 1000;
    if (quantidade > 0) {
        printf("%d cedula(s) de R$ 10.00\n", quantidade);
        troco_em_centavos %= 1000;
    }

    quantidade = troco_em_centavos / 500;
    if (quantidade > 0) {
        printf("%d cedula(s) de R$ 5.00\n", quantidade);
        troco_em_centavos %= 500;
    }

    quantidade = troco_em_centavos / 200;
    if (quantidade > 0) {
        printf("%d cedula(s) de R$ 2.00\n", quantidade);
        troco_em_centavos %= 200;
    }

    quantidade = troco_em_centavos / 100;
    if (quantidade > 0) {
        printf("%d moeda(s) de R$ 1.00\n", quantidade);
        troco_em_centavos %= 100;
    }

    quantidade = troco_em_centavos / 50;
    if (quantidade > 0) {
        printf("%d moeda(s) de R$ 0.50\n", quantidade);
        troco_em_centavos %= 50;
    }

    quantidade = troco_em_centavos / 25;
    if (quantidade > 0) {
        printf("%d moeda(s) de R$ 0.25\n", quantidade);
        troco_em_centavos %= 25;
    }

    quantidade = troco_em_centavos / 10;
    if (quantidade > 0) {
        printf("%d moeda(s) de R$ 0.10\n", quantidade);
        troco_em_centavos %= 10;
    }

    quantidade = troco_em_centavos / 5;
    if (quantidade > 0) {
        printf("%d moeda(s) de R$ 0.05\n", quantidade);
        troco_em_centavos %= 5;
    }

    if (troco_em_centavos > 0) {
        printf("%d moeda(s) de R$ 0.01\n", troco_em_centavos);
    }

    return 0;
}