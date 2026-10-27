#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, delta, x1, x2, r1, r2;
    scanf("%f %f %f", &a, &b, &c);
    if (!a) {
        printf("Nao e equacao do segundo grau");
        return 0;
    }
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Sem raizes reais");
    }
    else if (!delta) {
        x1 = -b / (2 * a);
        printf("Raiz unica: %.2f", x1);
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        r1 = x2;
        r2 = x1;
        if (x1 < x2) {
            r1 = x1;
            r2 = x2;
        }
            
        printf("Raizes: %.2f e %.2f", r1, r2);

    }

    return 0;
}
