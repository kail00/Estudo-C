#include <stdio.h>

int main() {
    
int numero[6], soma = 0, quant = 0;
float media = 0;

for(int i = 0; i < 6; i++){
    printf("Digite um numero: ");
    scanf("%d", &numero[i]);
}

for(int i = 0; i < 6; i++){
    soma = soma + numero[i];
    quant = quant + 1;
}

media = (float)soma / quant;

printf("\nSoma: %d\n", soma);
printf("Média: %.2f", media);

return 0;
}