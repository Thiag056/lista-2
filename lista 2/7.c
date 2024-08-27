#include <stdio.h>

int main() {
    int valor1, valor2, temp;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2) {
        temp = valor1;
        valor1 = valor2;
        valor2 = temp;
    }

    printf("Os valores em ordem crescente sao: %d %d\n", valor1, valor2);

    return 0;
}