#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C ;

    printf("entre la température en Celsius: ");
    scanf("%f",&C);

    if (C < 0){
        printf(" l'état de l'eau est : solide");
    }

    else if (0 <= C &&  C < 100){
        printf(" l'état de l'eau est : liquide");
    }

    else{
        printf(" l'état de l'eau est : Gaz");

    }
    return 0;
}
