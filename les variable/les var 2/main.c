#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, C ;

    printf("entre la température en Celsius: ");
    scanf("%f",&C);

    K = C + 273.15 ;
    printf("la température en KALVIN est : %f" ,K);

    return 0;
}
