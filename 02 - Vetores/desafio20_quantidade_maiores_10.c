#include <stdio.h>

int main() {
    
    int numero[8];
    int q_maior = 0;
    
     for(int i = 0; i < 8; i++){
         printf("Digite um número: ");
         scanf("%d", &numero[i]);
     }
    
    for(int i = 0; i < 8; i++){
        if(numero[i] > 10){
            q_maior++;
        }
    }
    
printf(" Quantidade de números maiores que 10: %d", q_maior);

    return 0;
}