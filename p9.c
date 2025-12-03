#include <stdio.h>

int main() {
    float s, r, n, p;

    scanf("%f", &s);

    if (s < 1500) {
        p = 20;
    } else if (s < 5000) {
        p = 15;
    } else {
        p = 10;
    }

    r = s * (p / 100.0f);
    n = s + r;

    printf("Novo salario: %.2f\n", n);
    printf("Reajuste ganho: %.2f\n", r);
    printf("Em percentual: %.0f %%\n", p);
    return 0;
}
