#include <stdio.h>

int main() {
    
int senha;

senha = 0;

while (senha != 1234){
    printf("Digite a senha: ");
    scanf("%d", &senha);
}       
    printf("Acesso liberado!");

    return 0;
}