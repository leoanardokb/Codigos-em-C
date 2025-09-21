#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14159265359;
    double raio, altura;
    double area, volume;

    printf("Digite o valor do raio do cilindro: ");
    scanf("%lf", &raio);

    printf("Digite o valor da altura do cilindro: ");
    scanf("%lf", &altura);

    area = 2 * PI * raio * (altura + raio);
    volume = PI * (raio * raio) * altura;

    printf("\nA area total do cilindro e: %.2f\n", area);
    printf("O volume do cilindro e: %.2f\n", volume);

    return 0;
}