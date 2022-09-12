#include <stdio.h>
int main()
{
    int nbr, i, j,max,position,min,k,tmp;
  int tab1[100], tab2[100];

    printf("Entrez le nombre d'éléments dans le tableau: ");
    scanf("%d", &nbr);

    printf("Entrez les éléments du tableau: ");
    for (i = 0; i < nbr ; i++){
            printf("table[%d]:",i+1);
    scanf("%d", &tab1[i]);
}
    //Copier les éléments dans le tableau tab2 à partir de la fin du tableau tab1
    for (i = nbr - 1, j = 0; i >= 0; i--, j++)
        tab2[j] = tab1[i];

    //Copie le tableau inversé dans l'original.
    for (i = 0; i < nbr; i++)
        tab1[i] = tab2[i];

    printf("Le tableau inversé est:\n ");

    for (i = 0; i < nbr; i++)
        printf("%d\n", tab1[i]);
   max=0;

      for (int i=0 ; i< nbr ; i++)
      {
          if(tab1[i]>max){
                         max=tab1[i];
                         position=i;
          }
      }
      printf("Maximum : %d Et sa Position : est %d\n",max,position);
       min=tab1[0];
      for (int i=0 ; i< nbr ; i++)
      {
          if(tab1[i]<min){
                         min=tab1[i];
                         position=i;
          }
      }
      printf("Minimum : %d Et sa Position : est %d\n",min,position);
      k=i;
      for(i=1;i<=nbr-1;i++){
        while(k>0&&tab1[k-1]>tab1[k]){
            tmp=tab1[i];
            tab1[k]=tab1[k-1];
            tab1[k-1]=tmp;
            k--;

        }
      }
       printf("\n******** tableau triée par ordre croissant ********\n");

  for (i=0; i < nbr; i++)
     printf("%d", tab1[i]);

    return 0;

}
