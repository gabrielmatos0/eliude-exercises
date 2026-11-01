#include <stdio.h>

int main(void) {
    int num, quo, div, alg = 1, soma = 0, unidade;
    scanf("%d", &num);
    div = num;

    do {
        quo = div / 10;
        alg *= 10;
        unidade = div - quo * 10;
        div = quo;
    } while (quo);

    div = num;

    for (int i = alg / 10; i != 0; i /= 10) {
        quo = div / 10;
        unidade = div - quo * 10;
        soma += unidade * i;
        div = quo;
    }

    printf("%d\n", soma);

    return 0;
}
