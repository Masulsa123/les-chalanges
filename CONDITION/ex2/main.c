#include <stdio.h>
#include <stdlib.h>

int main()
{
    char voyelle ;

    printf("entre le littre :");
    scanf("%s",&voyelle);

    switch (voyelle) {
      case 'a' :
        printf("la littre est voyelle");
        break ;
      case 'e' :
        printf("la littre est voyelle");
        break ;
      case 'i' :
        printf("la littre est voyelle");
        break ;
      case 'o' :
        printf("la littre est voyelle");
        break ;
      case 'u' :
        printf("la littre est voyelle");
        break ;
      case 'y' :
        printf("la littre est voyelle");
        break ;
      default :
          printf("la littre est non voyelle");
        break ;

    }

    return 0;
}
