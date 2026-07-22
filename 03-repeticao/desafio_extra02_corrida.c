#include <stdio.h>

int main() {

    int resposta, quant = 0, tempo_t = 0, pior_t = 0, melhor_t = 0;
    float media;

    printf("Digite seu tempo: ");
    scanf("%d", &resposta);

    melhor_t = resposta;
    pior_t = resposta;

    while (resposta != 0) {

        if (resposta < melhor_t) {
            melhor_t = resposta;
        } else if (resposta > pior_t) {
            pior_t = resposta;
        }

        quant = quant + 1;
        tempo_t = tempo_t + resposta;

        printf("Digite seu tempo: ");
        scanf("%d", &resposta);
    }

    if (quant == 0) {
        printf("\nNenhum tempo foi informado!\n");
        media = 0;
    } else {
        media = (float)tempo_t / quant;
    }

    printf("\n===== RESULTADO =====\n");
    printf("Corredores: %d\n", quant);
    printf("Tempo total: %d segundos\n", tempo_t);
    printf("Melhor tempo: %d segundos\n", melhor_t);
    printf("Pior tempo: %d segundos\n", pior_t);
    printf("Media: %.2f segundos\n", media);

    return 0;
}