#include <stdio.h>

int main() {
    
    int N, C;
    
    printf("Informe um numero: ");
    scanf("%d", &N);
     
     C = 1;
     
     while (C <= N){

        if(C % 2 == 1){
            printf("%d\n", C);
        }

        C = C + 1;
     }
     
    return 0;
}