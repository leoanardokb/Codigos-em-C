#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double a, b, c;
    double delta, x1, x2;

    printf("C�lculo das ra�zes de uma equa��o do 2� grau (ax� + bx + c = 0)\n\n");

    printf("Digite o valor do coeficiente a: ");
    scanf("%lf", &a);

    printf("Digite o valor do coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o valor do coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("\nO coeficiente 'a' deve ser diferente de zero para ser uma equa��o do 2� grau.\n");
    } else {
        delta = (b * b) - (4 * a * c);

        if (delta < 0) {
            printf("\nN�o h� ra�zes reais, pois o delta (%.2f) � negativo.\n", delta);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("\nH� uma �nica raiz real (ra�zes iguais):\n");
            printf("x = %.2f\n", x1);
        } else {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nH� duas ra�zes reais e distintas:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}