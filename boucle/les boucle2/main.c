#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n , s ;

    printf("entre le nombre n :");
    scanf("%d",&n);

    s=0;
    for(i=0 ; i<=n ; i++ )
       s=s+i;
        printf("la somme est :%d" ,s);



    return 0;
}
