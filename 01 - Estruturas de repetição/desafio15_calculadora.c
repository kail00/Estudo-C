#include <stdio.h>

int main() {
    
int resposta = -1, N1, N2, soma, sub, mul;
float divi;

while (resposta != 0){
printf("\n===== CALCULADORA =====\n");
printf("1 - Somar\n");
printf("2 - Subtrair\n");
printf("3 - Multiplicar\n");
printf("4 - Dividir\n");
printf("0 - Sair\n");
printf("\n");
printf("Escolhar: ");
scanf("%d",&resposta);
printf("\n");

if (resposta == 1){
    printf("Primeiro número: ");
    scanf("%d", &N1);
    printf("Segundo número: ");
    scanf("%d", &N2);
    printf("\n");
    
    soma = N1 + N2;
    printf("Resultado: %d", soma);
    printf("\n\n");
}
else if (resposta == 2){
    printf("Primeiro número: ");
    scanf("%d", &N1);
    printf("Segundo número: ");
    scanf("%d", &N2);
    printf("\n");
    
    sub = N1 - N2;
    printf("Resultado: %d", sub);
    printf("\n\n");
}
else if(resposta == 3){
    printf("Primeiro número: ");
    scanf("%d", &N1);
    printf("Segundo número: ");
    scanf("%d", &N2);
    printf("\n");
    
    mul = N1 * N2;
    printf("Resultado: %d", mul);
    printf("\n\n");
}
else if(resposta == 4){
    printf("Primeiro número: ");
    scanf("%d", &N1);
    printf("Segundo número: ");
    scanf("%d", &N2);
    printf("\n");
    
    divi = (float)N1 / N2;
    printf("Resultado: %.2f", divi);
    printf("\n\n");
}
else if(resposta == 0) {
    printf("Até a próxima!");
}
else {
    printf("Opção inválida!");
    printf("\n\n");
}
}
    return 0;
}