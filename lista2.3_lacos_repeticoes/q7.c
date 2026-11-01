#include <stdio.h>

int main(void) {
    int a, b, a2, b2, mdc;
    scanf("%d %d", &a, &b);

    do {
        a2 = b;
        b2 = a % b;
        a = a2;
        b = b2;
        mdc = a;
    } while (b);

    printf("MDC: %d\n", mdc);

    return 0;
}
