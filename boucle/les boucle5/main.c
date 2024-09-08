#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int b , ex , total, i ;

    printf("entre le base :");
    scanf("%d",&b);
    printf("entre l exposant :");
    scanf("%d",&ex);

    for(i=0 ; i<= ex ; i++)
        total = pow(b , i );

        printf("total est : %d ^ %d = %d",b,ex,total);

    return 0;
}
