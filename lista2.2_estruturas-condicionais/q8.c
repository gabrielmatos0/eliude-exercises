#include <stdio.h>

int main(void) {
    float massa, altura, imc;
    scanf("%f %f", &massa, &altura);

    imc = massa / (altura * altura);
    printf("IMC: %.2f\n", imc);

    if (imc < 18.5)
        printf("Classificacao: Abaixo do peso");
    else if (imc < 25)
        printf("Classificacao: Normal");
    else if (imc < 30)
        printf("Classificacao: Sobrepeso");
    else
        printf("Classificacao: Obesidade");

    return 0;
}
