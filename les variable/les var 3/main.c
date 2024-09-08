#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Yards, Km ;

    printf("entre la distance en kilomètres: ");
    scanf("%f",&Km);

     Yards = Km * 1093.61 ;

    printf("la distance en yards est : %f" ,Yards);

    return 0;
}
