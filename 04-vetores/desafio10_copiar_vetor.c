#include <stdio.h>

int main() {
 
int vetor1[6];
int vetor2[6];

for(int i = 0; i < 6; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor1[i]);
}
printf("\nValores digitados no primeiro vetor copiado:\n");

for(int i = 0; i <6; i++){
    vetor2[i] = vetor1[i];
    printf("\n%d", vetor2[i]);
    
}
    return 0;
}