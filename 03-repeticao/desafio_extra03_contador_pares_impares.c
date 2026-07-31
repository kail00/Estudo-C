#include <stdio.h>

int main() {
 
int cont = 0, numero, par = 0, impar = 0;

while(cont < 10){
    printf("Digite um némero: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        par = par + 1;
    }
    else{
        impar = impar + 1;
    }
    
    cont = cont + 1;
}

printf("\nQuantidade de pares: %d\n", par);
printf("Quantidade de impares: %d", impar);


    return 0;
}