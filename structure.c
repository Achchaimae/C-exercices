#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
typedef struct
{
	int day;
	int month;
	int year;
}date;
typedef struct {
  char Fname[20];
  char Lname[20];
  date d ;
}etudiant;
etudiant etud1;
    printf("nom : \n");
    gets(etud1.Fname);
    printf("prenom : ");
    gets(etud1.Lname);
    printf("age d’etudiant : \n");
    printf("day : d’etudiant : \n");
    scanf("%d",&etud1.d.day);
    printf("day : d’etudiant : ");
    scanf("%d",&etud1.d.month);
    printf("day : d’etudiant : ");
    scanf("%d",&etud1.d.year);
    printf("\n\t\tinformations sur l’etudiant : \n");
    printf("nom :");
    puts(etud1.Fname);
    printf("prenom :");
    puts(etud1.Lname);
//printf("age etudiant : %d\n\n",etud1.age);

}
