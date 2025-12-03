#include <stdio.h>

int main() {
    float R, volume;
    float pi = 3.14159f;

    scanf("%f", &R);

    volume = (4.0f / 3.0f) * pi * R * R * R;

    printf("VOLUME = %.3f\n", volume);
    return 0;
}
