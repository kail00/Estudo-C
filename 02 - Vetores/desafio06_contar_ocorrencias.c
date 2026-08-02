#include <stdio.h>

int main() {
    
int numero [6], numero_p, quant = 0;
    
    for(int i = 0; i < 6; i++){
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
    }
    
    printf("\nDigite o número que deseja procurar: \n");
    scanf("%d", &numero_p);
    
    for(int i = 0; i < 6; i++){
        if(numero[i] == numero_p){
            quant = quant + 1;
        }
    }
    
    printf("\nO número %d aparece %d vez(es).", numero_p, quant);

    return 0;
}