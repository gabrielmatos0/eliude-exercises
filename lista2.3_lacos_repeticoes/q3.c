#include <stdio.h>

int main(void) {
    float soma, nota, media;
    soma = 0;
    int num_notas = 0;

    while (nota >= 0) {
        scanf("%f", &nota);
        if (nota >= 0) {
            soma += nota;
            num_notas++;
        }
    }

    if (!num_notas) {
        printf("Nenhuma nota\n");
    } else {
        media = soma / num_notas;
    
        printf("Media: %.2f\n", media);
        printf("Quantidade: %d\n", num_notas);
    }

    return 0;
}
