#include <iostream>


int main()
{
    int nbr ;
        printf("entrer le nember : ");
        scanf("%d",&nbr);

   int T[nbr];
   int i;
     for (i=0 ; i<nbr ; i++){
       printf(" T[%d] = ",i);
       scanf("%d",&T[i]);

     }
     int nbr2 ;
        printf("entrer le nembre element : ");
        scanf("%d",&nbr2);

   int  x=0;
     for (i=0 ; i<nbr; i++){
        if ( nbr2==T[i]){
            x=x+1;
        }
    }

         if (x==0){
            printf(" le nembre qui entrer non presont");
         }

        else{
            printf(" le nembre qui entrer present a %d foit :",x);
        }



    return 0;
}
