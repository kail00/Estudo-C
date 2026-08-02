#include <stdio.h>

int main() {

    int N_S = 50, N;

    printf("Tente digitar o numero secreto: ");
    scanf("%d", &N);

    while (N != N_S) {

        if (N > N_S) {
            printf("Menor!\n");
        } else if (N < N_S) {
            printf("Maior!\n");
        }

        printf("Digite novamente: ");
        scanf("%d", &N);
    }

    printf("Parabens! Voce acertou!\n");

    return 0;
}