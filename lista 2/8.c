#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    printf("Digite a hora de inicio do jogo (0-23): ");
    scanf("%d", &hora_inicio);

    printf("Digite a hora de fim do jogo (0-23): ");
    scanf("%d", &hora_fim);

    if (hora_fim < hora_inicio) {
        // Jogo terminou no dia seguinte
        duracao = (24 - hora_inicio) + hora_fim;
    } else {
        duracao = hora_fim - hora_inicio;
    }

    printf("A duracao do jogo foi de %d horas.\n", duracao);

    return 0;
}