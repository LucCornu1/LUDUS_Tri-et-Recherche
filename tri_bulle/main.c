#include <stdio.h>
#include <stdlib.h>
/*
programme de tri à bulle

Le tri a bulle consiste a comparer deux cellule et de déplacer le plus petit vers le debut du tableau
Dans le code en c on utilise un tableau statique de taille 5

fonction triBulle(entier tab[])
    entier i,j,temp;
    booléen trié;
    début
        trié <- faux;
        i <- tab.longueur-2;
        tantque ((non trié) et (i > 0)) faire
        trié <- vrai;
        pour (j allant de 0 à i pas 1) faire
            si (tab[j] > tab[j+1]) alors
                temp <- tab[j];
                tab[j] <- tab[j+1];
                ab[j+1] <- temp;
                trié <- faux;
            finsi
        finpour
        i <- i-1;
        fintantque
fin


*/

void triBulle(int tab[])
{
    int i,j,temp,tri;
    tri = 0; //Le booléen n'existant pas on utilise un systeme de 0 et 1 pour simulé le booléen
    i = 3;
    while((!tri)&&(i > 0))
    {
        tri = 1;
        for(j=0;j<=i;j++)
        {
            if(tab[j]>tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
                tri = 0;
            }
        }
        i--;
    }
}

void affich(int tab[]) //Affichage du tableau pour verification
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",tab[i]);
    }
}

int main()
{
    int tab[4];

    tab[0] = 10;
    tab[1] = 23;
    tab[2] = 505;
    tab[3] = 8;
    tab[4] = 45;
    affich(tab);
    printf("\n");
    triBulle(tab);
    affich(tab);
    return 0;
}
