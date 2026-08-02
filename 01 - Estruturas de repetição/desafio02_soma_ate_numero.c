#include <stdio.h>

int main() {
    
    int N, C, S;
    
    printf("Digite um numero: ");
    scanf ("%d", &N);

C = 1;
S = 0;

while (C <= N){
    S = S + C;
    C = C + 1;
}
printf("A soma é: %d", S);
    return 0;
}