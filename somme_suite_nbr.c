#include<stdio.h>

int main()
{
    int n, somme = 0, c, reste;

    printf("Entrez un nombre: ");
    scanf("%d", &n);

    while(n != 0)
    {
        reste = n%10;
        somme += reste;
        n = n/10;
    }

    printf("La somme des chiffres est %d\n\n", somme);
    return 0;
}
