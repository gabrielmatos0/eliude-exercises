#include <stdio.h>

int main(void) {
    int soma = 0, qtd = 0, n = 1;
    
    while (n) {
        scanf("%d", &n);
        if (n) {
            soma += n;
            qtd++;
        }
    }
    printf("Soma: %d\n", soma);
    printf("Quantidade: %d\n", qtd);

    return 0;
}
