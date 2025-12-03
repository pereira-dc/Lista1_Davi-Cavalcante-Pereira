#include <stdio.h>

int main() {
    int a, b, c, x, y, z, t;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if (x > y) { t = x; x = y; y = t; }
    if (y > z) { t = y; y = z; z = t; }
    if (x > y) { t = x; x = y; y = t; }

    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
