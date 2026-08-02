#include <stdio.h>

int main() {

    int numero[6];

    for(int i = 0; i < 6; i++){
    printf("Digite %d° numero: ", i + 1);
    scanf("%d", &numero[i]);
    }
    printf("\nElementos das posições pares:\n");
    
    for(int i = 0; i < 6; i++){
        if(i % 2 == 0){
            printf("%d\n", numero[i]);
        }
    }
    return 0;
}