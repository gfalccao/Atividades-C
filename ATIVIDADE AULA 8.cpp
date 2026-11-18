//ATIVIDADE 3

#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int vet[15], visto[15] = {0};
    int ocor[15], pos[15], total = 0;
    int qtdAnimais = 0;
    char animais[15][50];

    for (int i = 0; i < 15; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nNumero  Ocorrencias  Classificacao\n");
    for (int i = 0; i < 15; i++) {
        if (visto[i]) continue;

        int cont = 0;
        for (int j = i; j < 15; j++) {
            if (vet[j] == vet[i]) {
                cont++;
                visto[j] = 1;
            }
        }

        printf("%-7d %-12d ", vet[i], cont);

        if (cont == 1) {
            printf("Nao repetido\n");
        } else {
            if (ehPrimo(vet[i]))
                printf("Primo - %s\n", cont % 2 == 0 ? "par" : "impar");
            else
                printf("%s\n", cont % 2 == 0 ? "Par" : "Impar");

            if (cont % 2 == 0) {
                ocor[total] = cont;
                pos[total] = i + 1;   /* posicao da 1a ocorrencia */
                total++;
            }

            if (ehPrimo(vet[i]) && cont % 2 != 0)
                qtdAnimais += cont;
        }
    }

    if (qtdAnimais > 15) qtdAnimais = 15;
    printf("\nCadastre %d animais:\n", qtdAnimais);
    for (int i = 0; i < qtdAnimais; i++) {
        printf("%d. ", i + 1);
        scanf(" %49[^\n]", animais[i]);
    }

    printf("\nSaida:\n");
    for (int i = 0; i < total; i++) {
        if (pos[i] <= qtdAnimais)
            printf("%d. %s.\n", i + 1, animais[pos[i] - 1]);
        else
            printf("%d. Nao existe correspondencia.\n", i + 1);
    }

    return 0;
}
