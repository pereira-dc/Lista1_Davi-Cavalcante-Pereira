#include <stdio.h>

int main() {
    int distancia;
    double tempo_horas, tempo_minutos;
    
    printf("Digite a distancia: ");
    scanf("%d", &distancia);
    tempo_horas = distancia / 150.0;
    tempo_minutos = tempo_horas * 60;
    
    printf("\n%.0f minutos", tempo_minutos);
    return 0;
}
