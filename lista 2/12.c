#include <stdio.h>

int main() {
    int conta;
    float saldo, debito, credito, saldo_atual;

    printf("Digite o numero da conta do cliente: ");
    scanf("%d", &conta);

    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo);

    printf("Digite o debito: ");
    scanf("%f", &debito);

    printf("Digite o credito: ");
    scanf("%f", &credito);

    saldo_atual = saldo - debito + credito;

    printf("O saldo atual da conta %d e de R$ %.2f\n", conta, saldo_atual);

    if (saldo_atual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}