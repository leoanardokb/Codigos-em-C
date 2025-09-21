#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14159265359;
    double raio;
    double area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * (raio * raio);

    printf("A area do circulo com raio %.2f e: %.2f\n", raio, area);

    return 0;
}