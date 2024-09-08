#include <stdio.h>
#include <stdlib.h>
int Parite (int n){
    int pair , impair ;
if(n%2 == 0){
    printf("le nombre est pair") ;

}
   else
    printf("le nombre est impair") ;
    return n ;
};

int main()
{
    int nbr ;

    printf("entre le number:");
    scanf("%d",&nbr);

    printf("%d",Parite(nbr));


    return 0;
}
