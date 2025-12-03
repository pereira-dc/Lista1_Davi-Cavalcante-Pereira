#include <stdio.h>

int main() {
    int hi, mi, hf, mf;
    int inicio, fim, duracao;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    inicio = hi * 60 + mi;
    fim = hf * 60 + mf;

    if (fim <= inicio) {
        fim += 24 * 60;
    }

    duracao = fim - inicio;

    printf("%d horas %d minutos\n", duracao / 60, duracao % 60);
    return 0;
}
