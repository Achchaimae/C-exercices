#include<stdio.h>
#include"calcu.h"
float somm(float a, float b){
float  s;
  s=a+b;
 return s;

 }
int main(){
float  c,d,some,sous;
 printf("donner la valeur de premier element\n");
 scanf("%f",&c);
 printf("donner la valeur de dexieme element\n");
 scanf("%f",&d);
some=somm(c,d);
printf("la somme de %.2f et %.2f est %.2f\n",c,d,some);
sous=c-d;// soustra(c,d);
printf("la soustra de %.2f et %.2f est %.2f\n",c,d,sous);
}

