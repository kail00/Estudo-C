#include <stdio.h>

int main() {
    
    int numero[8];
    int par = 0;
    int achei = 0;
    int quant = 0;
    float media = 0;
    
    for(int i = 0; i < 8; i++){
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
    }
    
    for(int i = 0; i < 8; i++){
        if(numero[i] % 2 == 0){
                par = par + numero[i];
                quant = quant + 1;
                achei = 1;
        }
    }
    
    printf("\n");
    if(achei == 1){
        media = (float)par / quant;
    }
    else{
        printf("Não existe número par no vetor.");
    }
    
    printf("A media dos números Pares: %.2f", media);

    return 0;
}