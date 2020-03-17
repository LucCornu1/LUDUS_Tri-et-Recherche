#include <stdio.h>
#include <stdlib.h>
#include "DichotomieRecherche.h"

#define TAILLE 100

int main()
{
	int tab[TAILLE];
	int i, nPlace, nNum;
	for (i=0; i<TAILLE; i++)
	{
		tab[i] = i+1;
	}

	printf("Veuillez entrer la valeur recherche : ");
	scanf("%d", &nNum);

	nPlace = rechercheDichotomie(TAILLE, tab, nNum);
	//printf("%d \n", tab[nPlace]); //Verification

	if(nPlace >= 0)
    {
        printf("Valeur trouve a la place numero : %d \n",nPlace);
    }else{
        printf("Valeur non trouve");
    }
	return 0;
}
