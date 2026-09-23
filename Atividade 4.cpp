#include <stdio.h>

int main() {

    int passos;
    int totalPassos = 0;
    int horas = 0;

    while (totalPassos < 10000) {

        printf("Digite a quantidade de passos da hora: ");
        scanf("%d", &passos);

        totalPassos = totalPassos + passos;
        horas++;

        printf("Total de passos: %d\n", totalPassos);

    }

    printf("\nMeta de 10.000 passos atingida!\n");
    printf("Quantidade de horas necessarias: %d\n", horas);

    return 0;
}