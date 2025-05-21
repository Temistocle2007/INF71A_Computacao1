#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define L 3
#define C 2

int main ()
{
    srand (time(NULL));
    int random_number= rand() ;
    int matriz [L] [C];
    int i,j;

    for (i=0; i<L; i++)
    {
        for (j=0; j<C; j++)
        {
            matriz [i] [j] = rand()%100;
            printf("%d \t",matriz [i] [j]);
        }
        printf("\n");
    }

    printf("\n");

    matriz [C] [L] == matriz [L-1] [C+1];
    for (i=0; i<C; i++)
    {
        for (j=0; j<L; j++)
        {
            printf("%d \t", matriz [j] [i]);
        }
     printf("\n");
    }
    return 0;
}
