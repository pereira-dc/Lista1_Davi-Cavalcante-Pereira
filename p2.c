#include <stdio.h>

int main(){

    int combustivel, distancia;
    float consumo;

    printf("Qual a distancia percorrida: ");
    scanf("%d", &distancia);
    printf("\nQuanto de combustivel foi gasto: ");
    scanf("%d", &combustivel);

    consumo = distancia/combustivel;
    printf("\nO consumo foi de %.3fkm/l", consumo);

    return 0;
}