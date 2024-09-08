#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moyenne ;

    printf("entre le moyenne :");
    scanf("%d",&moyenne);

    if(0<= moyenne && moyenne <10){
            printf("le mention est recalé");
    }
        else if(10<= moyenne && moyenne <12){
            printf("le mention est passable");
        }
        else if(12<= moyenne && moyenne <14){
            printf("le mention est assez bien");
        }
        else if(14<= moyenne && moyenne <16){
            printf("le mention est bien");
        }
        else if(16<= moyenne && moyenne <=20){
            printf("le mention est très bien");
        }
        else{
            printf("la note est icorect");
        }


    return 0;
}
