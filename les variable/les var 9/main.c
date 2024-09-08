#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1 , x2 ;
    float y1 , y2 ;
    float z1 , z2 , dis ;

    printf("entre le x1 :");
    scanf("%f",&x1);
    printf("entre le x2 :");
    scanf("%f",&x2);
    printf("entre le y1 :");
    scanf("%f",&y1);
    printf("entre le y2 :");
    scanf("%f",&y2);
    printf("entre le z1 :");
    scanf("%f",&z1);
    printf("entre le z2 :");
    scanf("%f",&z2);

    dis = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2)) ;

    printf("la distance est : %.2f" , dis);
    return 0;
}
