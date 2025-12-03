#include <stdio.h>

int main() {
    int valor, maior = -999999, pos = 0;

    for (int i = 1; i <= 10; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
            pos = i;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Posicao: %d\n", pos);
    return 0;
}
