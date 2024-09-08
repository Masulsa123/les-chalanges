#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nbr ;
       printf("entrer le nembre : ");
       scanf("%d",&nbr);
    int T[nbr] , Te[nbr];
    int i,j ;
      for (i=0; i<nbr ; i++){
         printf(" T[%d] = ",i);
         scanf("%d",&T[i]);
    }
     for (i=0; i<nbr ; i++){
            Te[i]=T[(nbr-i)-1];
     }

     for (i=0; i<nbr ; i++){
        printf(" Te[%d] = %d",i,Te[i]);
     }

    return 0;
}
