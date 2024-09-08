#include <stdio.h>
#include <stdlib.h>

int main()
{
    float annes , M , j , h , m , s ;

    printf("entre l annes :");
    scanf("%f",&annes);

    M = annes*12;
    j = M*30;
    h = j*24;
    m = h*60;
    s = m*60;

    printf("%.2f mois \n",M );
    printf("%.2f jour \n",j );
    printf("%.2f heurs \n",h );
    printf("%.2f minutes \n",m );
    printf("%.2f seconds",s );

    return 0;
}
