#include <stdio.h>
void tabulation(int ligne){
 int j;
    for(j=0;j<=i;j++){
        printf("\t");
    }
}
void Triangle_Etoile(int ligne){
    int i, j=0, s;

    for(i=1; i<=ligne; ++i, j=0)
    {espace(num);
           printf("\t");
        for(s=1; s<=ligne-i; ++s)
        {
            printf("  ");
        }
        while(j != 2*i-1)
        {
            printf("* ");
            ++j;
        }
        printf("\n");

    }

}
int main()
{int ligne,i,j;

    printf("Entrez le nombre de lignes: ");
    scanf("%d",&ligne);

    for(i=1;i<=3;i++){
            for(ligne=1;i<=3;j++){
    tabulation(ligne);
        Triangle_Etoile(ligne+i);

}
}


}
