#include <stdio.h>

int main(void) {
    int num;
    do {
        scanf("%d", &num);
        if (num < 1 || num > 10)
            printf("Valor invalido: %d\n", num);
        else {
            printf("Valor aceito: %d\n", num);
            break;
        }
    }
    while (1);

    return 0;
}
