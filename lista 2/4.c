#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a nota da 1ª avaliação: ");
    scanf("%f", &nota1);

    printf("Digite a nota da 2ª avaliação: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("Média: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}