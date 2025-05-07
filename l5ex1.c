#include <stdio.h>

int ehBissexto (int ano){
    return( ano%4== 0 && ano%100!= 0 || ano%400 ==0);
}

int main()
{
    int ano;
    printf("Escreva um ano: \n");
    scanf("%d", &ano);
    if (ehBissexto(ano)==1)
    {
        printf("O ano é bissexto");
        return 1;
    }
    else
    {
        printf("O ano não é bissexto \n");
        return 0;
    }
    return 0;
}
