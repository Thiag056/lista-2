#include <stdio.h>

int main() {
    int quantidade_macas;
    float custo_total;

    printf("Digite o numero de macas compradas: ");
    scanf("%d", &quantidade_macas);

    if (quantidade_macas < 12) {
        custo_total = quantidade_macas * 1.30;
    } else {
        custo_total = quantidade_macas * 1.00;
    }

    printf("O custo total da compra e de R$%.2f\n", custo_total);

    return 0;
}