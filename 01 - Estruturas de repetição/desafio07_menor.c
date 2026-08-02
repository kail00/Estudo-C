#include <stdio.h>

int main() {
    
    int N, C, menor_n, novo_n;
    
    C = 2;
    
    printf("Digite o numero para iniciar: ", C);
         scanf("%d", &N);
         menor_n = N;
    
     while (C <= 5){
         printf("%d. Digite novamente: ", C);
         scanf("%d", &N);
         
         if(N < menor_n){
            menor_n = N;       
         }
         
         C = C + 1;
     }
     
     printf("O menor numero digitado foi: %d", menor_n);
     
    return 0;
}