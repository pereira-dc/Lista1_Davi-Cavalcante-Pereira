#include <stdio.h>

int main()
{
    float a,b,media;

    printf("Insira o valor de a para media (a+b)/2: ");
    scanf("%f", &a);
    printf("\nInsira o valor de b para media (a+b)/2: ");
    scanf("%f", &b);

    media = (a+b)/2;

    printf("\nMEDIA = %.5f",media);
    
    return 0;
}