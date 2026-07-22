#include <stdio.h>

int main() {

    int numero[5];

    // Ler os números
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nVocê digitou:\n\n");

    // Mostrar os números
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numero[i]);
    }

    return 0;
}