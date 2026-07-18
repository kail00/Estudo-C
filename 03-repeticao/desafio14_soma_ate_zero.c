#include <stdio.h>

int main() {
    
int N, soma, quant;
float media;

soma = 0;
quant = 0;

printf("Digite um número (0 para sair): ");
scanf("%d", &N);

while(N != 0){
    
    soma = soma + N;
    quant = quant + 1;
    
    printf("Digite um número (0 para sair): ");
    scanf("%d", &N);

}

if(quant > 0){
        media = (float) soma / quant;
        
        printf("A soma dos números digitados: %d\n", soma);
        printf("A quantidade de números digitados: %d\n", quant);
        printf("A média dos números digitados: %.2f\n", media);
    }
    else {
        printf("\nNenhum número foi digitado.\n");
    }
    


    return 0;
}