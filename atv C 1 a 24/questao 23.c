#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double a, b, c;
    double delta, x1, x2;

    printf("Cálculo das raízes de uma equação do 2º grau (ax² + bx + c = 0)\n\n");

    printf("Digite o valor do coeficiente a: ");
    scanf("%lf", &a);

    printf("Digite o valor do coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o valor do coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("\nO coeficiente 'a' deve ser diferente de zero para ser uma equação do 2º grau.\n");
    } else {
        delta = (b * b) - (4 * a * c);

        if (delta < 0) {
            printf("\nNão há raízes reais, pois o delta (%.2f) é negativo.\n", delta);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("\nHá uma única raiz real (raízes iguais):\n");
            printf("x = %.2f\n", x1);
        } else {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nHá duas raízes reais e distintas:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}