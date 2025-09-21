#include <stdio.h>

int main() {
    float centimetros, polegadas;
    const float fatorConversao = 2.54;

    printf("Digite o valor em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / fatorConversao;

    printf("%.2f cm equivale(m) a %.2f polegadas.\n", centimetros, polegadas);

    return 0;
}