#include <stdio.h>

int main() {
    int N;
    float X, Y;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f %f", &X, &Y);

        if (Y == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n", X / Y);
        }
    }

    return 0;
}
