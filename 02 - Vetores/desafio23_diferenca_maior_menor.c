#include <stdio.h>

int main() {
    
    int numero[8];
    int primeiro_numero = 0;
    int maior = 0;
    int menor = 0;
    int diferenca = 0;
    
    for(int i = 0; i < 8; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
    }
    
    for(int i = 0; i < 8; i++){
        
        if(primeiro_numero == 0){
                maior = numero[i];
                menor = numero[i];
                primeiro_numero = 1;
        }
        else if(numero[i] > maior){
            maior = numero[i];
        }
        
        if(numero[i] < menor){
            menor = numero[i];
        }
    }
    
    diferenca = maior - menor;
    
    printf("\n\n");
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
    printf("Diferença: %d",diferenca);
    
    return 0;
}