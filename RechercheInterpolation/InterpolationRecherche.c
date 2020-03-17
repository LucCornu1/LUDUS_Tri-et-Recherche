#include <stdio.h>
#include <stdlib.h>
#include "InterpolationRecherche.h"

int rechercheInterpolation(int TAILLE, int tab[], int numR)
{
	//Initialisation des index de début et fin
	int debut = 0;
	int fin = (TAILLE-1);

	while(debut <= fin && numR >= tab[debut] && numR <= tab[fin])
	{
		if (debut == fin)
		{
			if (tab[debut] == numR)
			{
				return debut;
			}else{
				return -1;
			}
		}

		//Recherche de la position de l'objet recherché avec une formule d'interpolation
		int pos = debut + (((double)(fin-debut) / (tab[fin]-tab[debut]))*(numR - tab[debut]));

		//Si l'objet recherché est trouvé
		if(tab[pos] == numR)
		{
			return pos;
		}else if(tab[pos] < numR){ //Si l'objet est supérieur, alors il est dans la partie suppérieure
			debut = pos+1;
		}else{ // Si l'objet est inférieur, alors il est danss la partie inférieure
			fin = pos-1;
		}
	}
	return -1;
}
