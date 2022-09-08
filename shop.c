#include<stdio.h>

int main (){
int prix_pont=150;
int prix_tshirt=200;
int prix_jacket=250;
int answer;
int choix,montant;
printf("il y a  3 article disponible \n 1: pontalon \n 2: tshirt \n 3: jacket \n choisir votre articles\n");
scanf("%d",&choix);
switch(choix){
    case 1:
    montant=prix_pont;
    printf("test 1");
    break;
    case 2:
    montant=prix_tshirt;
    printf("test 2");
    break;
    case 3:
    montant=prix_jacket;
    printf("test 3");
    break;
}
printf("vous vouler ajouter un article 1/0 \n");
scanf("%d",&answer);
if(answer==1){
        printf("il y a  3 article disponible \n 1: pontalon \n 2: tshirt \n 3: jacket \n choisir votre articles\n");
scanf("%d",&choix);
   switch(choix) {
    case 1:
    montant=montant+prix_pont;
    break;
    case 2:
    montant=montant+prix_tshirt;
    break;
    case 3:
    montant=montant+prix_jacket;
    break;
    }
printf("vous vouler ajouter un article 1/0 \n");
scanf("%d",&answer);
if(answer==1){
        printf("il y a  3 article disponible \n 1: pontalon \n 2: tshirt \n 3: jacket \n choisir votre articles\n");
scanf("%d",&choix);
   switch(choix) {
    case 1:
    montant=montant+prix_pont;
    break;
    case 2:
    montant=montant+prix_tshirt;
    break;
    case 3:
    montant=montant+prix_jacket;
    break;
    }
}
}
else
       printf("merci pour vos achats\n");

printf("votre somme que vous devez payer est%d\n ",montant);

}
