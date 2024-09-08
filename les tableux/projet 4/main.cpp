#include <iostream>


int main()
{
  int T[5];
  int i,maax ;
  for (i=0; i<5; i++){
    printf("t[%d]=",i);
    scanf("%d",&T[i]);

  }
  maax=T[0];
   for (i=1; i<5; i++){
  if (maax<T[i])
    maax=T[i];

   }

  printf("le max = %d",maax);

    return 0;
}
