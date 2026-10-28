#include <stdio.h>

int main(void) {
    int x, y, z, maior;

    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z)
        maior = x;
    else if (y >= x && y >= z)
        maior = y;
    else if (z >= x && z >= y)
        maior = z;
    else
        maior = z;

    printf("Maior: %d", maior);

    return 0;
}
