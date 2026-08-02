#include <stdio.h>

int main() {

int numero[8];
int primeiro_numero = 0;
int menor = 0;
int posicao = 0;

for(int i = 0; i < 8; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
}

for(int i = 0; i < 8; i++){
    if(primeiro_numero == 0){
        menor = numero[i];
        posicao = i;
        primeiro_numero = 1;
    }
    else if(numero[i] < menor){
        menor = numero[i];
        posicao = i;
    }
}
printf("\n");
printf("O menor número: %d\n", menor);
printf("Posição: %d\n", posicao + 1);

return 0;
}