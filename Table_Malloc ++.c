#include<stdio.h>
#include<stdlib.h>
//tri_simple
void Trie_Croissante(int *t, int n){
int i,j;
int tmp;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(*(t+i)<*(t+j)){
            tmp=*(t+i);
            *(t+i)=*(t+j);
            *(t+j)=tmp;
        }
    }
 }
    printf("les elements du tableau par ordre croissante sont : \n");
        for(i=0;i<n;i++){
                printf("%d ",*(t+i));
        }
    printf("\n");
}
//tri par selection
void Trie_Selection(int *t,int d){
    int i,j,index;
    int tmp=0;
 for(i=0;i<d;i++){
    index=i;
 for (j=i + 1; j < d; j++)
    {
      if (*(t+index) > *(t+j))
     index=j;

      if(index!=i){
        tmp=*(t+j);
        *(t+j)=*(t+index);
        *(t+index)=tmp;
             }
      }}
      printf("le tableau par ordre croissante  METHODE PAR SELECTION \n");
        for(i=0;i<=d-1;i++){
            printf("%d \t",*(t+i));

        }

}
//Tri bulle
void Tri_bulle(int *t, int n){
int i,j,tmp;
tmp=0;
for(i=0;i<=n-1;i++){
    for(j=i+1;j<=n-1;j++){
            if(*(t+j)>*(t+j)){
               tmp=*(t+i);
               *(t+i)=*(t+j+1);
               *(t+j+1)=tmp;
            }
    }
}
printf("\n le tableau par ordre croissante  METHODE A BULLE \n");
        for(j=0;j<=n-1;j++){
            printf("%d \t",*(t+j));

        }
}
//tri par insertion
void tri_par_insertion(int *t,int n){
    int i,j, tmp=0;
for(i=1;i<=n-1;i++){
    j=i;
    while(j>0&&t[j-1]>t[j]){
        tmp=t[j];
        t[j]=t[j-1];
        t[j-1]=tmp;
        j--;
    }
}
printf("\n le tableau par ordre croissante  METHODE PAR INSERTION \n");
        for(j=0;j<=n-1;j++){
            printf("%d \t",*(t+j));

}



}
//Recherche simple
int Recherche_simple(int val,int *t, int n){
    int i;
    for(i=0;i<n;i++){
        if(val==*(t+i))
            return i;
    return -1;
    }
}
//Recherche dichotomie
int Recherche_dichotomie(int val,int *t, int n){
    int debut=0;
    int fin=0;
    int milieu=(debut+fin)/2;
    while(t[milieu]!=val&&fin>debut){
        if(t[milieu]>val){
            fin=milieu-1;
        }
        else
            debut=milieu+1;
        milieu=(debut+fin)/2;
    }
    if(t[milieu]==val)
        return milieu;
    return -1;
}

int main(){
 int *t,*p,*q;
int val,r,n,i,m,j,d,k=0;
//saisie de 1er tableau
printf("donner la taille de votre tableaux\n");
scanf("%d",&n);
t=malloc(n*sizeof(int));
printf("Entrez les éléments du tableau: \n");
    for (i = 0; i < n ; i++){
        printf("table[%d]:\n",i+1);
        scanf("%d", t+i);
}
//saisie de 2eme tableau
printf("donner la taille de dexieme tableaux\n");
scanf("%d",&m);
p=malloc(m*sizeof(int));
printf("Entrez les éléments du tableau:\n ");
    for (i = 0; i < m ; i++){
        printf("table[%d]:\n",i+1);
        scanf("%d", p+i);
    }

   d = n+m;
 q=malloc((n+m)* sizeof(int));
    for(i=0;i<n;i++){
        *(q+i)=*(t+i);
        printf("la nouvelle valeur %d est : %d \n",i+1,*(q+i));
    }
    for( i = n; i < d ;  i++)
    {
       *(q+i)=*(p+k);
       k++;
       printf("la nouvelle valeur %d est : %d \n",i+1,*(q+i));
    }
Trie_Croissante(q,d);
Trie_Selection(q, d);
Tri_bulle(q, d);
tri_par_insertion(q,d);
printf("inserer la valeur a rechercher\n");
scanf("%d",&val);
r=Recherche_simple(val,q,d);
printf("la position de votre valeur est%d\n",r);
int R=Recherche_dichotomie(val,q,d);
printf("la position de votre dichotomie est%d\n",R);

    return 0;
}
