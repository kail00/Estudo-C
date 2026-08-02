#include <stdio.h>

int main() {
    
    int N, C, maio_n;
    
    C = 1;
    maio_n = 0;
    
     while (C <= 10){
         printf("%d. Digite novamente: ", C);
         scanf("%d", &N);
         if(N > maio_n){
            maio_n = N;       
         }
         C = C + 1;
     }
     
     printf("O maio numero digitado foi: %d", maio_n);
     
    return 0;
}