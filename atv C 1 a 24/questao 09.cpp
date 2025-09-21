#include <stdio.h>

int main() {
    double A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    temp = A;
    A = B;
    B = temp;

    printf("\nValores apos a troca:\n");
    printf("A = %.2f\n", A);
    printf("B = %.2f\n", B);

    return 0;
}