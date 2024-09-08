#include <stdio.h>
#include <stdlib.h>

int main()
{
     int T[5];
  int i,min ;
  for (i=0; i<5; i++){
    printf("t[%d]=",i);
    scanf("%d",&T[i]);

  }
  min=T[0];
   for (i=1; i<5; i++){
  if (min>T[i])
    min=T[i];

   }

  printf("le min = %d",min);

    return 0;
}
