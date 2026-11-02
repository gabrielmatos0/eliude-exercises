#include <stdio.h>

int main(void) {
    int n, c = 0, maior, menor;

    while (1) {
        scanf("%d", &n);
        
        if (!c) {
            maior = n;
            menor = n;
        }
        
        if (!n)
            break;

        if (n > maior)
            maior = n;
        if (n < menor)
            menor = n;
        
        c++;
    }

    if (maior || menor) {
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);
    } else {
        printf("Sequencia vazia");
    }

    return 0;
}
