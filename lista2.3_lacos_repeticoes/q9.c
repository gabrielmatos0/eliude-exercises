#include <stdio.h>

int main(void) {
    int n, fin, ant, c = 0;
    scanf("%d", &n);
    fin = n;
    ant = n;

    printf("%d", fin);

    while (fin != 1) {
        printf(" ");
        fin = ant % 2 ? ant * 3 + 1 : ant / 2;
        printf("%d", fin);
        ant = fin;
        c++;
    }

    printf("\nPassos: %d", c);

    return 0;
}
