#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while (n >= 0) {
        printf("%d\n", n--);
    }
    printf("Fim\n");

    return 0;
}
