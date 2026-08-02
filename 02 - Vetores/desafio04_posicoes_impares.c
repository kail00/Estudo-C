#include <stdio.h>

int main() {

    int numero[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nElementos das posições ímpares:\n");

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 1) {
            printf("%d\n", numero[i]);
        }
    }

    return 0;
}