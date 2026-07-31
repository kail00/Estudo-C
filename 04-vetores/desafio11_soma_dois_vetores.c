#include <stdio.h>

int main() {
 
int vetorA[6], vetorB[6], vetorC[6];

printf("--------------------\n");
printf("Primeira sequencia\n");


for(int i = 0; i < 6; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetorA[i]);
}
printf("--------------------\n");
printf("segunda sequencia\n");

for(int i = 0; i < 6; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetorB[i]);
}

printf("\nA soma e: \n\n");

for(int i = 0; i < 6; i++){
    vetorC[i] = vetorA[i] + vetorB[i];
    printf("%d\n", vetorC[i]);
}

    return 0;
}