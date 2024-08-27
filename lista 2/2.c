#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("%d eh positivo\n", valor);
    } else {
        printf("%d eh negativo\n", valor);
    }

    return 0;
}