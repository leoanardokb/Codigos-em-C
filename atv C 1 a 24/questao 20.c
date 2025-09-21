#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c, temp;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("\nOs valores em ordem crescente são: %d, %d, %d\n", a, b, c);

    return 0;
}