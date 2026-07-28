#include <stdio.h>
int main() {
int numero[5], numero_e, achou = 0, posicao = -1;
for (int i = 0; i < 5; i++){
    printf("Digite %d° numero: ", i + 1);
    scanf("%d", &numero[i]);
}
printf("\nDigite o numero que deseja encotrar: ");
scanf("%d", &numero_e);
for(int i = 0; i < 5; i++){
    if(numero_e == numero[i]){
        achou = 1;
        posicao = i;
}
}
if(achou == 1){
        printf("Número encontrado na posição %d°\n", posicao + 1);
    }
    else {
        printf("Número não encontrado no vetor.\n");
    }
    return 0;
}