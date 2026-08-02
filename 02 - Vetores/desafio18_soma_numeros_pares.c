#include <stdio.h>

int main() {

int numero[8];
int achei = 0;
int soma_par = 0;

for(int i = 0; i < 8; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
}

for(int i = 0; i < 8; i++){
    if(numero[i] % 2 == 0){
          soma_par = soma_par + numero[i];
          achei = 1;
        }
    }

printf("\n");
if(achei == 1){
printf("A soma dos números Pares: %d", soma_par);
}
else{
    printf("Não existe número par no vetor.");
}

return 0;
}