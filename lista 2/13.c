#include <stdio.h>

int main() {
    int quantidade_atual, quantidade_maxima, quantidade_minima;
    float quantidade_media;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &quantidade_atual);

    printf("Digite a quantidade maxima em estoque: ");
    scanf("%d", &quantidade_maxima);

    printf("Digite a quantidade minima em estoque: ");
    scanf("%d", &quantidade_minima);

    quantidade_media = (quantidade_maxima + quantidade_minima) / 2.0;

    printf("A quantidade media e de %.2f\n", quantidade_media);

    if (quantidade_atual >= quantidade_media) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}