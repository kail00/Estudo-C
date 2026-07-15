#include <stdio.h>

int main() {
    
    int N, C, fatorial;
    
    printf("Informe um numero: ");
    scanf("%d", &N);
    
    C = 1;
    fatorial = 1;
    
    while (C <= N){
        printf("%d x ", C);
        fatorial = fatorial * C;
        C = C + 1;
    }
    printf("\n");
    printf("Fatorial é: %d", fatorial );    
    return 0;
}