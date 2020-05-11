#include "tri_par_selection.h"

#define TMAX 6

void TriSelection(int tab[TMAX])
{
	int min = 0, tmp = 0, i = 0;

	for(i = 0; i < tab[TMAX -2]; i++) //On parcour le tableau
	{
		min = i;
		for (int j = 0; j < tab[TMAX -1]; ++j) // En parcourant le tableau on vérifie si les cases restantes sont plus petites que min
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
		}
		if (min != i) //On permute les valeurs
		{
			tmp = tab[i];
			tab[i] = tab[min];
			tab[min] = tmp;
		}
	}
}