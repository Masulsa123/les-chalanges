#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i,nbr,nbr_pair;

    printf("entre le nombre :");
    scanf("%d",&nbr);

    for(i=0 ; i < nbr ; i++){
        nbr_pair=i+i+2;
        printf("%d \n",nbr_pair);
    }

    return 0;
}
