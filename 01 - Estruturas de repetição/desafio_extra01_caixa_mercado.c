#include <stdio.h>

int main() {
    
int valor = -1, quant = 0, valor_t = 0, maior_valor = 0, menor_valor = 0;
float media;

printf("======== SUPER MERCADO ========\n");

printf("Preço do produto: ");
scanf("%d", &valor);
maior_valor = valor;
menor_valor = valor;

while(valor != 0){

valor_t = valor_t + valor;
quant = quant + 1;

if(valor > maior_valor){
    maior_valor = valor;
}
else if(valor < menor_valor){
    menor_valor = valor;
}

printf("Preço do produto: ");
scanf("%d", &valor);
}

media = (float)valor_t / quant;

printf("===== RESUMO DA COMPRA =====\n");
printf("Total: %d\n", valor_t);
printf("Quantidade de produtos: %d\n", quant );
printf("Produto mais caro: %d\n", maior_valor );
printf("Produto mais barato: %d\n", menor_valor);
printf("Média dos preços: %.2f\n", media);

    return 0;
}