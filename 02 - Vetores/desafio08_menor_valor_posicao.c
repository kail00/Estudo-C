#include <stdio.h>

int main() {
    
int numero[6], menor_n = 0, posicao = 0;

for(int i = 0; i < 6; i++){
    printf("Digite um numero: ");
    scanf("%d", &numero[i]);
}

menor_n = numero[0];

for(int i = 0; i < 6; i++){
    if(numero[i] < menor_n){
        menor_n = numero[i];
        posicao = i;
    }
}

printf("\nMenor número: %d\n", menor_n);
printf("Posição: %d", posicao + 1);

    return 0;
}