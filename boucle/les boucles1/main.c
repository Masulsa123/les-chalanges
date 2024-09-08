#include <stdio.h>

int main() {
      float P,i;
      printf("entrer le nombre P : ");
      scanf("%f",&P);
      float M ;
      for(i=1; i<10; i++){
           M = P * i;
           printf("%f * %.2f = %.2f \n ",P,i,M);
      }

    return 0;
}
