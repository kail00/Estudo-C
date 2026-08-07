#include <stdio.h>

int main() {
    
    int numero[8];
    int achei = 0;
    int menor_positivo = 0;
    
    for(int i = 0; i < 8; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
    }
    
    for(int i = 0; i < 8; i++){
        if(achei == 0){
            if(numero[i] > 0){
                menor_positivo = numero[i];
                achei = 1;
            }
        }
        else if(numero[i] < menor_positivo){
            if(numero[i] > 0){
                menor_positivo = numero[i];
            }
        }
    }
    
if(achei == 1){
    printf("O menor número positivo do vetor: %d", menor_positivo);
}
else{
    printf("Não existe número positivo no vetor.");
}

    return 0;
}