#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,nbr,nbr_impair;

    printf("entre le nombre :");
    scanf("%d",&nbr);

    for(i=0 ; i < nbr ; i++){
        nbr_impair=i+i+1;
        printf("%d \n",nbr_impair);
    }



    return 0;
}
