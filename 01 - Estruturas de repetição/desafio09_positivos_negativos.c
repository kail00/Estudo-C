#include <stdio.h>

int main() {
    
int N, cont_p, cont_n;

cont_p = 0;
cont_n = 0;

for (int i = 1; i <= 10; i++){
    printf("%d. Digite um valor: ", i);
    scanf("%d", &N);
    if (N > 0){
        cont_p = cont_p + 1;
    }else if (N < 0){
        cont_n = cont_n + 1;
    }
}
printf ("Positivos: %d\n", cont_p);
printf ("Negativos: %d", cont_n);
    return 0;
}