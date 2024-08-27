#include <stdio.h>

int main() {
    char sexo;
    float altura, peso_ideal;

    printf("Digite o seu nome: ");
    char nome[50];
    scanf("%s", nome);

    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o seu sexo (M ou F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M'  sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F'  sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido. Por favor, digite M ou F.\n");
        return 1;
    }

    printf("O peso ideal para %s e de %.2f kg.\n", nome, peso_ideal);

    return 0;
}