#include <stdio.h>

int main() {
    int ano_atual, ano_nascimento;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    if (ano_atual - ano_nascimento >= 18) {
        printf("Pode votar este ano!\n");
    } else {
        printf("Nao pode votar este ano.\n");
    }

    return 0;
}