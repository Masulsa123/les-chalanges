#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tableux [10];
    int i,somme,somme2;
    for (i=0; i<10; i++){
      printf(" Tableux[%d]=",i);
      scanf("%d",&Tableux[i]);
    }
    somme =0;
    somme2=0;
     for (i=0; i<10; i++){
        if (Tableux [i]%3==0) {
            somme = somme+Tableux[i];
        }

        else if (Tableux[i]%5==0){
            somme2=somme2+Tableux[i];
        }

     }
       if(Tableux [i]%3==0 && Tableux[i]%5==0){
     printf("la somme total = %d",somme+somme2);
       }
       else
        printf("la somme total 0");
    return 0;
}
