#include <stdio.h>
int main()
{
    int nbr, i, j;
  int tab1[100], tab2[100];

    printf("Entrez le nombre d'�l�ments dans le tableau: ");
    scanf("%d", &nbr);

    printf("Entrez les �l�ments du tableau: ");
    for (i = 0; i < nbr ; i++){
            printf("table[%d]:",i+1);
    scanf("%d", &tab1[i]);
}
    //Copier les �l�ments dans le tableau tab2 � partir de la fin du tableau tab1
    for (i = nbr - 1, j = 0; i >= 0; i--, j++)
        tab2[j] = tab1[i];

    //Copie le tableau invers� dans l'original.
    for (i = 0; i < nbr; i++)
        tab1[i] = tab2[i];

    printf("Le tableau invers� est:\n ");

    for (i = 0; i < nbr; i++)
        printf("%d\n", tab1[i]);

    return 0;
}
