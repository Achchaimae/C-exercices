#include<stdio.h>
int main(){
    char op;
    float some,sous,prod,div;
    int nbr1,nbr2;
printf("entrer premier nombre\n");
scanf("%d",&nbr1);
printf("entrer l'operateur \n");
scanf("%s",&op);
printf("entrer premier nombre\n");
scanf("%d",&nbr2);
switch(op){
   case '+':
       some=nbr1+nbr2;
       printf(" la somme est%.f",some);
       break;
    case '-':
       sous=nbr1-nbr2;
       printf(" la soustraction est %.f",sous);
       break;
    case '*':
       prod=nbr1*nbr2;
       printf(" la multiplication est%.f",prod);
       break;
     case '/':
         if(nbr2!=0){
       div=nbr1/nbr2;
       printf(" la division est%.f",div);
       break;
       }
         else
            printf("erreur (entrer un nombre different de 0)");




}





}
