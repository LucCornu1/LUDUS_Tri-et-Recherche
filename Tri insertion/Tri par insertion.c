#include <stdio.h>
#include "Tri par insertion.h"

#define TMAX 6

void TriInsertion(int tab[TMAX])
{
	int tmp = 0, cpt = 0;

	for (int i = 1; i < tab[TMAX-1]; ++i)
	{
		tmp = tab[i];
		cpt = i;

		while (cpt > 0 && tab[cpt -1] > tmp)
		{
			tab[cpt] = tab[cpt -1];
			cpt--;
		}
		tab[cpt] = tmp;
	}
}