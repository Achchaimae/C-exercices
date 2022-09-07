#include<stdio.h>
int a,s,y;
int main(){
printf("entrer votre age\n");
scanf("%d",&a);
printf("votre age est %d\n",a);
printf("ajoute nombre des annees que vous voulez l'ajoutez\n");
scanf("%d",&y);
s=a+y;
printf("votre age apres %d est %d",y,s);

}
