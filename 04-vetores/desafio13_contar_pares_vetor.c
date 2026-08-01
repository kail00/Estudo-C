#include <stdio.h>

int main() {

int numero[8], par = 0;

for(int i = 0; i < 8; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
}

for(int i = 0; i < 8; i++){
    if (numero[i] % 2 == 0){
        par = par + 1;
        
    }
}
printf("\n");
printf("Quantidade de números pares: ");
printf("%d\n", par);
    return 0;
} 