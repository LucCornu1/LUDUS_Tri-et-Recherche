#include <stdio.h>
#include <stdlib.h>
#include "DichotomieRecherche.h"

int rechercheDichotomie(int TAILLE, int tab[], int numR)
{
	int i, j, placeTrouve;
	i = 0;
	j = TAILLE-1;
	placeTrouve = -1;
	while ((i <= j) && (placeTrouve == -1))
	{
		if (tab[(j+i)/2] == numR)
		{
			placeTrouve = (j+i)/2;
		}else if (tab[(j+i)/2] > numR){
			j = (j+i)/2 - 1;
		}else{
			i = (j+i)/2 + 1;
		}
	}
	return placeTrouve;
}
