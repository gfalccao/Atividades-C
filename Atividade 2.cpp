#include <stdio.h>

int main() {

    int opcao;
    float saldo = 0;

    do {

        printf("\n===== COFRINHO DIGITAL =====\n");
        printf("1 - Adicionar moeda de R$ 0,50\n");
        printf("2 - Adicionar moeda de R$ 1,00\n");
        printf("3 - Adicionar moeda de R$ 2,00\n");
        printf("4 - Encerrar e mostrar saldo\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            saldo = saldo + 0.50;
            printf("Moeda de R$ 0,50 adicionada!\n");

        }
        else if (opcao == 2) {

            saldo = saldo + 1.00;
            printf("Moeda de R$ 1,00 adicionada!\n");

        }
        else if (opcao == 3) {

            saldo = saldo + 2.00;
            printf("Moeda de R$ 2,00 adicionada!\n");

        }
        else if (opcao == 4) {

            printf("Encerrando o cofrinho...\n");

        }
        else {

            printf("Opcao invalida! Tente novamente.\n");

        }

    } while (opcao != 4);

    printf("\nTotal acumulado: R$ %.2f\n", saldo);

    return 0;
}