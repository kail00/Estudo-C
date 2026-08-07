#include <stdio.h>

int main() {
    
    int numero[8];
    int achei = 0;
    int maior_negativo = 0;
    
    for(int i = 0; i < 8; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
}

for(int i = 0; i < 8; i++){
    
    if(numero[i] < 0){
    
        if(achei == 0){
            maior_negativo = numero[i];
            achei = 1;
        }
        else if(maior_negativo < numero[i]){
            maior_negativo = numero[i];
        }
    }
}

if (achei == 1){
    printf("O maior número negativo do vetor: %d", maior_negativo);
}
else {
    printf("Não existe número negativo no vetor.");
}

    return 0;
}