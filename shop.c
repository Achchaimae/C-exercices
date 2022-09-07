#include<stdio.h>

int main (){int prix_pont=150;
int prix_tshirt=200;
int prix_jacket=250;
char answer;
int choix,montant;
printf("il y a  3 article disponible \n 1: pontalon \n 2: tshirt \n 3: jacket \n choisir votre articles\n");
scanf("%c",&choix);
switch(choix){case 1:
    montant=prix_pont;
    break;
case 2:
    montant=prix_tshirt;
    break;
case 3:
    montant=prix_jacket;
    break;
}

printf("vous vouler ajouter un article y/n\n");
scanf("%c",&answer);
if(answer=='Y')
   switch(choix) {case 1:
    montant=montant+prix_pont;
    break;
case 2:
    montant=montant+prix_tshirt;
    break;
case 3:
    montant=montant+prix_jacket;
    break;
    }
    else
        printf("merci pour vos achats\n");
printf("vous vouler ajouter un article y/n\n");
scanf("%c",&answer);
if(answer=='Y')
 switch(choix)
{case 1:
    montant=montant+prix_pont;
    break;
case 2:
    montant=montant+prix_tshirt;
    break;
case 3:
    montant=montant+prix_jacket;
    break;
    }
    else
        printf("merci pour vos achats\n");
printf("votre somme que vous devez payer est%d\n ",&montant);

}
