#include <stdio.h>

int main() {
    double d, tempo;

    scanf("%lf", &d);

    tempo = (d / 150.0) * 60.0;

    printf("%.0lf minutos\n", tempo);
    return 0;
}
