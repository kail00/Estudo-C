#include <stdio.h>

int main() {
    
int N, R;

printf("Digite um número para da Tabuada: ");
scanf ("%d", &N);

for(int i = 1; i <= 10; i++){
    R = (N * i);
    printf ("%d x %d = %d\n", N, i, R);
}

    return 0;
}