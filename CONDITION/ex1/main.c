#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre ;

    printf("entre le nombre :");
    scanf("%d",&nombre);

    if(nombre%2 == 0)
        printf("le nombre est pair.");
    else
        printf("le nombre est impair.");
    return 0;
}
