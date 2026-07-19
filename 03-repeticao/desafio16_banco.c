#include <stdio.h>

int main() {
    
    int saldo = 0, resposta = -1, valor;

    while(resposta != 0){

        printf("===== BANCO =====\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Consultar saldo\n");
        printf("0 - Sair\n\n");
        printf("Escolha: ");
        scanf("%d", &resposta);

        if(resposta == 1){

            printf("Valor: ");
            scanf("%d", &valor);

            saldo = saldo + valor;

            printf("Depósito realizado!\n\n");
        }

        else if(resposta == 2){

            printf("Valor: ");
            scanf("%d", &valor);

            if(valor > saldo){

                printf("Saldo insuficiente.\n\n");
            }
            else{

                saldo = saldo - valor;

                printf("Saque realizado!\n\n");
            }
        }

        else if(resposta == 3){

            printf("Saldo atual: %d\n\n", saldo);
        }

        else if(resposta == 0){

            printf("Obrigado por utilizar o banco.\n");
        }

        else{

            printf("Opção inválida!\n\n");
        }
    }

    return 0;
}