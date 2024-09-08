#include <stdio.h>
#include <stdlib.h>
struct date {
    int day ;
    int month;
    int years;
};
struct Adresse{
    char addresse;
    char ville;
    int code_postal;

};

 struct person{
     char name ;
     char email ;
     char prenom ;
     int d_nessence;
     char addresse;

 };


   int main() {

  struct person person1;

     printf("entrer le name : ");
     scanf("%s",&person1.name);
     printf("entrer le email : ");
     scanf("%s",&person1.email);
     printf("entrer le person : ");
     scanf("%s",&person1.prenom);
     printf("entrer le d_nessence : ");
     scanf("%s",&person1.d_nessence);
     printf("entrer le addresse : ");
     scanf("%s",&person1.addresse);

 struct date d1;
     printf("entrer le day : ");
     scanf("%s",&d1.day);
     printf("entrer le month : ");
     scanf("%s",&d1.month);
     printf("entrer le years : ");
     scanf("%s",&d1.years);

 struct Adresse addres1;
   printf("entrer le addresse : ");
     scanf("%s",&addres1.addresse);
      printf("entrer le ville : ");
     scanf("%s",&addres1.ville);
      printf("entrer le code_postal : ");
     scanf("%s",&addres1.code_postal);







    return 0;
}
