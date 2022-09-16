#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"STRUCTURE.h"
int main(){

Etudiant *Etud;
    int i,N,M,mx,mn,x;
    printf("Combien d'etudiants vous voulez entrer : ");
    scanf("%d",&N);
    Etud=malloc(N*sizeof(Etudiant));
    Etud=saisie(Etud,N);
    Etud=tri(Etud,N);
    printf("\n---HELLO!!---\n");
    do{
        printf("Afficher listes des etudiants : 1 \n");
        printf("Afficher la moyenne d'age : 2 \n");
        printf("Afficher l'age minimale : 3 \n");
        printf("Afficher l'age maximale : 4 \n");
        printf("Quitter : 5 \n");
        scanf("%d",&x);

    switch(x){
            case 0 :
              printf("Done !");
            break;
            case 1 :
              Affich(Etud,N);
            break;
            case 2 :
              Etud=tri(Etud,N);
              Affich(Etud,N);
            break;
            case 3 :
              M=Moye_Age(Etud,N);
              printf("\nLa moyenne d'age dans ce classe est : %d",M);
            break;
case 4 :
             mn=Min(Etud,N);
             printf("\nL'age minimale est : %d",mn);
             printf("\nLes etudiants les plus petits : ");
             for(i=0;i<N;i++){
                if(Etud[i].age==mn){
                printf("\n\tEtudiant %d: ",i+1);
                 printf("\nNom : %s",Etud[i].name);
                 printf("\nPrenom : %s",Etud[i].prenom);
                 printf("\nDate de naissance : %d/%d/%d\n",Etud[i].d.jour,Etud[i].d.mois,Etud[i].d.annee);
                 printf("\nAge : %d",Etud[i].age);}

               }
            break;
            case 5 :
              mx=Max(Etud,N);
              printf("\nL'age maximale est : %d",mx);
              printf("\nLes etudiants les plus grands : ");
              for(i=0;i<N;i++){
                if(Etud[i].age==mx){
                printf("\n\tEtudiant %d: ",i+1);
                 printf("\nNom : %s\n",Etud[i].name);
                 printf("\nPrenom : %s\n",Etud[i].prenom);
                 printf("\nDate de naissance : %d/%d/%d\n",Etud[i].d.jour,Etud[i].d.mois,Etud[i].d.annee);
                 printf("\nAge : %d\n",Etud[i].age);
                 }
               }
            break;
            }
        }while(x!=0);
}



