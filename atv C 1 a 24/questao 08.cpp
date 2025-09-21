#include <stdio.h>

int main() {
    double salario_fixo, total_vendas, comissao, salario_final;
    const double percentual_comissao = 0.15;

    printf("Digite o valor do salario fixo: ");
    scanf("%lf", &salario_fixo);

    printf("Digite o valor total de vendas no mes: ");
    scanf("%lf", &total_vendas);

    comissao = total_vendas * percentual_comissao;
    salario_final = salario_fixo + comissao;

    printf("\nSalario Fixo: R$ %.2f\n", salario_fixo);
    printf("Salario Final: R$ %.2f\n", salario_final);

    return 0;
}