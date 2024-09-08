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
  int chang ;
     for (i=0 ; i<nbr ; i++){
      for (j=i+1 ; j<nbr ; j++){
      if (T[i]>T[j]){
        chang = T[i];
        T[j]= T[i];
        T[j]=chang ;
      }

     }
     }
     for (i=0 ; i<nbr ; i++){
        printf(" %d ",T[i]);
     }


    return 0;
}
