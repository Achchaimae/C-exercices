
#include<stdio.h>
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
        tmp=*(t+j);
       *(t+j)=*(t+j-1);
        t[j-1]=tmp;
        j--;
    }
}
printf("\n le tableau par ordre croissante  METHODE PAR INSERTION \n");
        for(j=0;j<=n-1;j++){
            printf("%d \t",*(t+j));

}



}
//Recherche sequentielle
int Recherche_simple(int val,int *t, int n){
    int i;
    for(i=0;i<n-1;i++){
        if(val==*(t+i))
            return i+1;
    } return -1;
}
//Recherche dichotomie
int Recherche_dichotomie(int val,int *t, int n){
    int debut=0;
    int fin=n-1;
    int milieu=(debut+fin)/2;
    while(*(t+milieu)!=val&&fin>debut){
        if(*(t+milieu)>val){
            fin=milieu-1;

        }

        else
           {
            debut=milieu+1;
           }
           milieu=(debut+fin)/2;

    }

    if(*(t+milieu)==val)
        return milieu+1;
    return -1;
}
//inversed'un tableau
void inverser(int *t,int n){
    int *t2;
    int i,j;
//Copier les éléments dans le tableau tab2 à partir de la fin du tableau tab1
    for (i = n - 1, j = 0; i >= 0; i--, j++)
        t2[j] = t[i];

    //Copie le tableau inversé dans l'original.
    for (i = 0; i < n; i++)
        t[i] = t2[i];

    printf("Le tableau inversé est:\n ");

    for (i = 0; i < n; i++)
        printf("%d\n", t[i]);
}
//max d'un tableau
void maximum(int *t, int n){
int i;
int max=0;
int position=0;

      for (int i=0 ; i< n ; i++)
      {
          if(t[i]>max){
                         max=t[i];
                         position=i+1;
          }
      }
      printf("Maximum : %d Et sa Position : est %d\n",max,position);

}
//min d'un tableau
void minimum(int *t, int n){

int i;
int position=0;

       int min=t[0];
      for (int i=0 ; i< n ; i++)
      {
          if(t[i]<min){
                         min=t[i];
                         position=i+1;
          }
      }
      printf("Minimum : %d Et sa Position : est %d\n",min,position);
}
//inserer une valeur a une position donner dand un tableau
void insertion(int *t, int val, int pos, int n){
    int i;
for(i=n-1;i>=pos-1; i--){
    t[i+1]=t[i];
    t[pos-1]=val;
    }
    printf("le tableau apres l'insertion est \n");
        for(i=0;i<=n;i++){
            printf("%d\n",t[i]);
        }

}
