#include <stdio.h>

int main(void) {
    int num, quo, div, alg = 0, soma = 0;
    scanf("%d", &num);
    div = num;

    do {
        quo = div / 10;
        alg++;
        
        soma += div % 10;
        div = quo;

    } while (quo);

    printf("Digitos: %d\n", alg);
    printf("Soma: %d", soma);

    return 0;
}
