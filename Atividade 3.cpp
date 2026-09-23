#include <stdio.h>

int main() {

    float nota;
    float soma = 0;
    float media;

    for (int cliente = 1; cliente <= 10; cliente++) {

        printf("Digite a nota do cliente %d (0 a 10): ", cliente);
        scanf("%f", &nota);

        soma = soma + nota;

    }

    media = soma / 10;

    printf("\nMedia geral de atendimento: %.2f\n", media);

    if (media < 7) {

        printf("ALERTA: A media de atendimento esta abaixo de 7.\n");

    }
    else {

        printf("A media de atendimento esta dentro do esperado.\n");

    }

    return 0;
}