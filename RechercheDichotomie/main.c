#include <stdio.h>
#include <stdlib.h>
#include "DichotomieRecherche.h"

#define TAILLE 100

/* ALGORITHME
// cette fonction renvoie vrai si x est présente dans tab, faux sinon
// le tableau tab est supposé trié par ordre croissant

	fonction avec retour booléen rechercheElement3(chaine tab[], chaine e)
		entier i, j
		booléen trouve

	début
		trouve <- false
		i <- 0
		j <- tab.longueur-1
		tantque (i <= j et non trouve) faire
			si (tab[(j+i)/2] = e) alors
				trouve <- vrai
			sinon
				si (tab[(j+i)/2] > e) alors
					j <- (j+i)/2 - 1
				sinon
					i <- (j+i)/2 + 1
				finsi
			finsi
		fintantque
		retourne trouve
	fin
*/

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
