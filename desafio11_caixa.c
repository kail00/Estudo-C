#include <stdio.h>

int main() {
    
int valor, resto = 0, r;

printf("Digite o valor: ");
scanf("%d", &valor);

if (valor / 100){
    r = valor / 100;
    resto = valor % 100;
    printf("%d nota de 100\n", r);
} 
if (resto / 50){
    r = resto / 50;
    resto = resto % 50;
    printf("%d nota de 50\n", r);
}
if(resto / 20){
    r = resto / 20;
    resto = resto % 20;
    printf("%d nota de 20\n", r);
}
if (resto / 10){
    r = resto / 10;
    resto = resto % 10;
    printf("%d nota de 10\n", r);
}
if (resto / 5){
    r = resto / 5;
    resto = resto % 5;
    printf("%d nota de 5\n", r);
}
if(resto / 1){
    r = resto / 1;
    resto = resto % 1;
    printf("%d nota de 1\n", r);
}
else{
}
    return 0;
}