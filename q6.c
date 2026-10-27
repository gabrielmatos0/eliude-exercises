#include <stdio.h>

int main(void) {
    float num1, num2, result;
    char op;
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f\n", result);
            break;
        case '/':
            if (!num2) {
                printf("ERRO: divisao por zero");
                break;
            }
            result = num1 / num2;
            printf("%.2f\n", result);
            break;
        default:
            printf("ERRO: operador invalido\n");
            break;
    }

    return 0;
}
