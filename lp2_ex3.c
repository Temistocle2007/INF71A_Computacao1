#include <stdio.h>
void converteH (int tsegundos, int *horas, int *minutos, int *segundos)
{
    *horas= tsegundos/3600;
    *minutos= (tsegundos%3600)/60;
    *segundos= (tsegundos%3600)%60;
}
int main()
{
    int tsegundos, horas, minutos, segundos;
    printf("Digite o total de segundos para converter: ");
    scanf( "%d", &tsegundos);
    converteH (tsegundos, &horas, &minutos, &segundos);
    printf("Convertendo será %d horas, %d minutos e %d segundos", horas, minutos, segundos);


    return 0;
}
