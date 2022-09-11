#include<stdio.h>
#include<math.h>
int main(){
    int op,choix,n,modu;
    float some,sous,prod,div,power;
    int nbr1,nbr2;
    double a,result;
       double n1, f, i;
printf("\t\t\t\t \tMENU de calculatrice\n");
printf(" 1: addition\n 2: soustraction\n 3: multiplication\n 4: division\n 5:puissance \n 6:sinus \n 7:cosinus \n 8: tangente \n 9:La valeur absolue\n 10: modulo\n 11 : log \n 12:factoriel \n");
scanf("%d",&choix);
printf("\t\t\t\t\t******************\n");


switch(choix){
   case 1:
        printf("entrer premier nombre\n");
        scanf("%d",&nbr1);
        printf("entrer premier nombre\n");
        scanf("%d",&nbr2);
       some=nbr1+nbr2;
       printf(" la somme est%.f",some);
       break;
    case 2:
        printf("entrer premier nombre\n");
        scanf("%d",&nbr1);
        printf("entrer premier nombre\n");
        scanf("%d",&nbr2);
       sous=nbr1-nbr2;
       printf(" la soustraction est %.f",sous);
       break;
    case 3:
        printf("entrer premier nombre\n");
        scanf("%d",&nbr1);
        printf("entrer premier nombre\n");
        scanf("%d",&nbr2);
       prod=nbr1*nbr2;
       printf(" la multiplication est%.f",prod);
       break;
     case 4:
         printf("entrer premier nombre\n");
        scanf("%d",&nbr1);
        printf("entrer premier nombre\n");
        scanf("%d",&nbr2);
         if(nbr2!=0){
       div=nbr1/nbr2;
       printf(" la division est%.f",div);}
       else
            printf("erreur (entrer un nombre different de 0)");
       break;

     case 5:
        printf("entrer premier nombre\n");
        scanf("%d",&nbr1);
        printf("entrer la puissance \n");
        scanf("%d",&nbr2);
        power= pow(nbr1,nbr2);
        printf(" la valeur de puissance est %.f",power);

     break;
     case 6:

        printf("Enter angle in radians: ");
        scanf("%lf", &a);
        result = sin(a);
        printf("\nResult = %lf", result);
    break;
    case 7:
        printf("Enter angle in radians: ");
        scanf("%lf", &a);
        result = cos(a);
        printf("\nResult = %lf", result);
    break;
    case 8:
        printf("Enter angle in radians: ");
        scanf("%lf", &a);
        result = tan(a);
        printf("\nResult = %lf", result);
    break;
    case 9 :

    printf("\nEnter a number: ");
    scanf("%lld",&n);
    result = abs(n);
    printf("\nResult = %lld", result);
    break;

    case 10:
     printf("entrer premier nombre\n");
        scanf("%d",&nbr1);
        printf("entrer premier nombre\n");
        scanf("%d",&nbr2);

       modu=nbr1%nbr2;
       printf(" la division est %d \n",modu);
    case 11 :
        printf("entrer une valeur ");
        scanf("%lf", &a);
        result = log(a);
        printf("\nResult = %lf", result);
        break;
    case 12 :

    printf("\nEnter a number: ");
    scanf("%lf", &n1);
    printf("%lf ",n1);
    int temp;
    f = n1;
    printf("%lf ",f);
    for(int i =1; i <n1; i++)
    {
        f *= i;
       /* printf("%lf=%d ",f,i);
        scanf("%d",&temp);*/
    }
    result = f;
    printf("\nResult = %lf", result);
    break;
       default:
                printf("Votre choix est invalide, reessayer.");

}



}
