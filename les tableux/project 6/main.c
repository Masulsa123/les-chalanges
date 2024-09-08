#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb;
      printf(" entrer le nbr : ");
      scanf("%d",&nb);

   int T[nb];
   int i ;
     for(i=0 ; i<nb; i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);

        }
      int f ;
         printf(" enterr le factor");
        scanf("%d",&f);

        for(i=0 ; i<nb ; i++){
            f=f*T[i];

            printf("%d",f);
        }



    return 0;
}
