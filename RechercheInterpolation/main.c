#include <stdio.h>
#include <stdlib.h>
#include "InterpolationRecherche.h"

#define TAILLE 10

int main()
{
	int tab[TAILLE];
	int i, nPlace, nNum;
	for (i=0; i<TAILLE; i++)
	{
		tab[i] = i*3;
	}

	printf("Veuillez entrer la valeur recherche : ");
	scanf("%d", &nNum);

	nPlace = rechercheInterpolation(TAILLE , tab, nNum);
	//printf("%d \n", tab[nPlace]); //Verification

	if(nPlace >= 0)
	{
		printf("Valeur trouve a la place numero : %d \n",nPlace);
	}else{
		printf("Valeur non trouve");
	}
	return 0;
}
