#include <stdio.h>

int main() {
    
int numero[6], maior_n = 0, posicao = 0;

for(int i = 0; i < 6; i++){
    printf("Digite um numero: ");
    scanf("%d", &numero[i]);
}
maior_n = numero[0];

for(int i = 0; i < 6; i++){
    if(numero[i] > maior_n){
        maior_n = numero[i];
        posicao = i;
    }
}

printf("\nMaior número: %d\n", maior_n);
printf("Posição: %d", posicao + 1);

    return 0;
}