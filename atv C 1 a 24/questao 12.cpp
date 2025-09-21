#include <stdio.h>

int main() {
    double media1;
    double media2;
    double soma_das_medias;
    double media_das_medias;

    media1 = (7.0 + 8.0 + 9.0) / 3.0;
    media2 = (4.0 + 5.0 + 6.0) / 3.0;

    soma_das_medias = media1 + media2;
    media_das_medias = soma_das_medias / 2.0;

    printf("A soma das duas medias e: %.2f\n", soma_das_medias);
    printf("A media das medias e: %.2f\n", media_das_medias);

    return 0;
}
