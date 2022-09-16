#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//structure pour definir un nouveau type (date)
typedef struct{
        int jour;
        int mois;
        int annee;
    }Date;
//structure pour definir un nouveau type (etudiant)
typedef struct
    {
       char name[10];
       int age;
       char prenom[20];
       Date d;
    }Etudiant;
    // fonction qui fait le tri  des etudiant
Etudiant* tri(Etudiant *tab,int N){
        int c,i;
        do{
       c=0;
      for(i=0;i<N-1;i++){
        if(tab[i].age>tab[i+1].age){
           Etudiant tmp;
           tmp=tab[i];
           tab[i]=tab[i+1];
           tab[i+1]=tmp;
           c++;
        }
      }
    }while(c>0);
        return tab;
    }
    int age(Date date){
     int day, mois, an;
     time_t now;
     time(&now);
      struct tm *local = localtime(&now);
      day = local->tm_mday;
      mois = local->tm_mon + 1;
      an = local->tm_year + 1900;
      int age=an-date.annee;
      if(((date.mois)*31 + (date.jour)) > (mois*31 + day)) age=age-1;
      return age;
    }
//fonction pour saisir les etudiant
Etudiant* saisie(Etudiant *E,int N){
    int i;
    for(i=0;i<N;i++){
     printf("Etudiant %d: ",i+1);
     printf("\nNom : ");
     scanf("%s",E[i].name);
     printf("Prenom : ");
     scanf("%s",E[i].prenom);
     printf("Date de naissance : \n");
     printf("Jour : ");
     scanf("%d",&E[i].d.jour);
     printf("Mois : ");
     scanf("%d",&E[i].d.mois);
     printf("Annee : ");
     scanf("%d",&E[i].d.annee);
     E[i].age=age(E[i].d);
    }return E;
}
void Affich(Etudiant *E,int N){
int i;
    for(i=0;i<N;i++){
                 printf("\n\tEtudiant %d: ",i+1);
                 printf("\nFirst Name: %s",E[i].name);
                 printf("\nLast Name: %s",E[i].prenom);
                 printf("\nDate of birth: %d/%d/%d",E[i].d.jour,E[i].d.mois,E[i].d.annee);
                 printf("\nAge : %d",E[i].age);
               }
}
int Moye_Age(Etudiant *E,int N){
        int i,moyenne,somme=0;
        for(i=0;i<N;i++){
            somme=somme+E[i].age;
        }moyenne = somme/N;
        return moyenne;
    }
int Max(Etudiant *E,int N){
        int i,Max=E->age;
        for(i=0;i<N;i++){
            if(E[i].age>Max){
                Max=E[i].age;
            }
        }return Max;
    }
int Min(Etudiant *E,int N){
        int i,Min=E->age;
        for(i=0;i<N;i++){
            if(E[i].age<Min){
                Min=E[i].age;
            }
        }return Min;
    }
