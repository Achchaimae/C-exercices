#include<stdio.h>
#include<math.h>
int main(){
    int i;
    float x1,x2,x3,x4;
 int a,b,c,delta;
 printf("l'equation de dexieme degre ecrit de cette facon : (a x*x+b*x+c)\n");
printf("entrere la valeur de a \n");
scanf("%d",&a);
printf("entrere la valeur de b\n ");
scanf("%d",&b);
printf("entrere la valeur de c\n ");
scanf("%d",&c);
delta=b*b-4*a*c;
if(delta>0){
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("les solutions possibles est %.2f et %.2f",x1,x2);
}
else if (delta==0){
    x3=-b/2*a;
    printf("la seule solution est%.2f ",x3);
}
else{
        x4=(-b-i*sqrt(-delta))/2*a;
     printf("la seule solution est%.2f ",x4);}

}
