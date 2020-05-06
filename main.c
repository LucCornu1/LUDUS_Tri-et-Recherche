#include <stdio.h>


void permuter(int *a, int *b) { //permute les valeurs du tableau
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void triRapide(int tab[], int first, int last) { //fonction principale
    int pivot, i, j;
    if(first < last) {
        pivot = first; //on designe le premier �l�ment comme le pivot
        i = first;
        j = last;
        while (i < j) {
            while(tab[i] <= tab[pivot] && i < last)
                i++;
            while(tab[j] > tab[pivot])
                j--;
            if(i < j) {
                permuter(&tab[i], &tab[j]);
            }
        }
        permuter(&tab[pivot], &tab[j]);
        triRapide(tab, first, j - 1);
        triRapide(tab, j + 1, last);
    }
}
int main() {
    int tab[100], nbr, i;

    printf("\n Entrer le nombre total d'elements :  ");
    scanf("%d", &nbr);

    printf("\n Entrer les elements du tableau  :  ");
    for(i = 0; i < nbr; i++)
        scanf("%d", &tab[i]);

    triRapide(tab, 0, nbr - 1);

    printf("\n Tableau trie : ");
    for(i = 0; i < nbr; i++)  {
        printf(" %4d", tab[i]);
    }
    printf("\n");
    return 0;
}
