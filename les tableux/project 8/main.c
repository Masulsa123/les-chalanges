#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbr;
     printf("entrer le nember : ");
     scanf("%d",&nbr);
  int T[nbr];
  int i , j ;
    for (i=0 ; i<nbr; i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    int N [nbr];
      for ( i=0 ; i<nbr ;i++){
        N[i]= T[i];

        printf("N[%d]= %d\n",i,N[i]);
      }

    return 0;
}
