#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("Q1");
    else if (x < 0 && y > 0)
        printf("Q2");
    else if (x < 0 && y < 0)
        printf("Q3");
    else if (x > 0 && y < 0)
        printf("Q4");
    else if (!x && y)
        printf("Eixo Y");
    else if (x && !y)
        printf("Eixo X");
    else
        printf("Origem");

    return 0;
}
