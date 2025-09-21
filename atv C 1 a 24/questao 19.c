#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;
    int maior;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &num3);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    printf("\nO maior valor digitado foi: %d\n", maior);

    return 0;
}