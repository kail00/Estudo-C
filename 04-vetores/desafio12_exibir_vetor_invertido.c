#include <stdio.h>

int main() {

int numero[6];

for(int i = 0; i < 6; i++){
    printf("Digite um número: ");
    scanf("%d", &numero[i]);
}

printf("\n");

for(int i = 5; i >= 0; i--){
    printf("%d\n", numero[i]);
}

    return 0;
}