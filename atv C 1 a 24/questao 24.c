#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char classe_consumidora;
    double consumo, tarifa = 0.0;
    double valor_fornecimento, icms, valor_a_pagar;

    printf("Calculadora de Conta de Energia Elétrica\n\n");

    printf("Digite a Classe Consumidora (A, B ou C): ");
    scanf(" %c", &classe_consumidora);

    printf("Digite o consumo em KWh: ");
    scanf("%lf", &consumo);

    classe_consumidora = toupper(classe_consumidora);

    switch (classe_consumidora) {
        case 'A':
            tarifa = 0.5;
            break;
        case 'B':
            tarifa = 0.8;
            break;
        case 'C':
            tarifa = 1.0;
            break;
        default:
            printf("\nErro: Classe de consumidora inválida.\n");
            printf("Por favor, digite A, B ou C.\n");
            break;
    }

    if (tarifa > 0.0) {
        valor_fornecimento = consumo * tarifa;
        icms = valor_fornecimento * 0.30;
        valor_a_pagar = valor_fornecimento + icms;

        printf("\n--- Resumo da Conta ---\n");
        printf("Classe Consumidora: %c\n", classe_consumidora);
        printf("Consumo: %.2f KWh\n", consumo);
        printf("Tarifa Aplicada: R$ %.2f / KWh\n", tarifa);
        printf("Valor do Fornecimento (VF): R$ %.2f\n", valor_fornecimento);
        printf("Valor do ICMS (30%%): R$ %.2f\n", icms);
        printf("----------------------------------\n");
        printf("Valor Total a Pagar (VP): R$ %.2f\n", valor_a_pagar);
    }

    return 0;
}