#include<stdio.h>
#include<stdlib.h>

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

int main(){
 int *t,*p,*q;
int n,i,m,j,d,k=0;
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



    return 0;
}
