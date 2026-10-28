#include <stdio.h>

int main(void) {
    int lado1, lado2, lado3;
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    // É um triângulo?
    if (
        lado1 + lado2 > lado3 &&
        lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1
    ) {
        // Equilátero, Escaleno ou Isósceles?
        if (lado1 == lado2 && lado1 == lado3)
            printf("EQUILATERO");
        else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
            printf("ESCALENO");
        else
            printf("ISOSCELES");
    }
    else
        printf("INVALIDO");

    return 0;
}
