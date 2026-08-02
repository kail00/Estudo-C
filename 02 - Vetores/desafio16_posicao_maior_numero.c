#include <stdio.h>

int main() {

int numero[8];
int primeiro_numero = 0;
int maior = 0;
int posicao = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
    }

    printf("\n");

    for(int i = 0; i < 8; i++){

        if(primeiro_numero == 0){
            maior = numero[i];
            posicao = i;
            primeiro_numero = 1;
        }
        else if(numero[i] > maior){
            maior = numero[i];
            posicao = i;
        }
    }

    printf("O maior número: %d\n", maior);
    printf("Posição: %d\n", posicao + 1);

    return 0;
}