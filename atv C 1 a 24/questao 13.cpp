#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco_de_fabrica, preco_final;
    const float PERCENTUAL_IMPOSTOS = 0.45;
    const float PERCENTUAL_REVENDEDOR = 0.28;

    printf("Digite o pre�o de f�brica do autom�vel: R$ ");
    scanf("%f", &preco_de_fabrica);

    preco_final = preco_de_fabrica * (1 + PERCENTUAL_IMPOSTOS + PERCENTUAL_REVENDEDOR);

    printf("\nO pre�o final do carro para o consumidor �: R$ %.2f\n", preco_final);

    return 0;
}