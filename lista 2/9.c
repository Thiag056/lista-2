#include <stdio.h>

int main() {
    int horas_trabalhadas, horas_extras;
    float salario_hora, salario_total, salario_extras;

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%d", &horas_trabalhadas);

    printf("Digite o salario por hora: ");
    scanf("%f", &salario_hora);

    if (horas_trabalhadas > 40 * 4) {
        horas_extras = horas_trabalhadas - 40 * 4;
        salario_extras = horas_extras * salario_hora * 1.5;
    } else {
        horas_extras = 0;
        salario_extras = 0;
    }

    salario_total = (horas_trabalhadas - horas_extras) * salario_hora + salario_extras;

    printf("O salario total do funcionario e de R$ %.2f\n", salario_total);

    return 0;
}