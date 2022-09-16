#include<stdio.h>
int main(){
int n,N_In=0;
printf("donner une valeur entier(le nombre doit etre composer de 4 chiffre )\n");
scanf("%4d",&n);
while (n != 0)
   {
      N_In = N_In * 2;
      N_In = N_In + n%10;
      n= n/10;
   }
   printf(" La nouvelle valeur est %d",N_In);
}
