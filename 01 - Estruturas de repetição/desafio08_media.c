#include <stdio.h>

int main() {

int N, C, soma;
float M;

C = 1;
soma = 0;

while (C <= 5){
    printf("%d. Digite um número: ", C);
    scanf("%d", &N);
    soma = soma + N;
    C = C + 1;
}

M = soma / 5.0;

printf("Total: %d\n", soma);
printf("A media dos valores e de: %.1f", M);

    return 0;
}