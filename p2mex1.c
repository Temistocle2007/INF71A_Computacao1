#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define L 5
#define C 5

int main (){
srand (time(NULL));
int random_number= rand() ;
int matriz [L] [C] ;
int i,j;

for (i=0; i<L;i++) {
  for (j=0; j<C; j++) {
    matriz [i] [j] = rand()%100;
    printf("%d \t",matriz [i] [j]);
   }
   printf("\n");
}

return 0;
}
