#include <stdio.h>

int main() {
    
int numero[8];
int impar = 0;
int achar_primeiro_numero = 0;

for(int i = 0; i < 8; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
}
printf("\n");

for(int i = 0; i < 8; i++){
    
    if(numero[i] % 2 == 1){
        
        if(achar_primeiro_numero == 0){
            impar = numero[i];
            achar_primeiro_numero = 1;
        }
        else if(numero[i] > impar){
            impar = numero[i];
        }
    }
}

if(achar_primeiro_numero == 1){
        printf("O maior número impar: %d", impar);
    }
    else{
        printf("Não existe número ímpar no vetor.");
    }

    return 0;
}