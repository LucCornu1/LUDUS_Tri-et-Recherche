#include <stdio.h>
#include <stdlib.h>
#include "rechercheTrie.h"

int rechercheTrie(int TAILLE, int tab[])
{
	int i;
	for(i=0; i<TAILLE; i++)
	{
		if (tab[i] > tab[i+1])
		{
			return 0;
		}
	}
	return 1;
}