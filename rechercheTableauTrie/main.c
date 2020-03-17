#include <stdio.h>
#include <stdlib.h>
#include "rechercheTrie.h"

#define TAILLE 10

int main()
{
	int tab[TAILLE], tab2[TAILLE];
	int i, boolTrouve;

	printf("premier tableau :\n");
	for(i=0; i<TAILLE; i++)
	{
		tab[i] = i+1;
		printf("%d | ", tab[i]);
	}
	printf("\n");

	boolTrouve = rechercheTrie(TAILLE, tab);
	if(boolTrouve==0)
	{
		printf("tableau non trie\n");
	}else{
		printf("tableau trie\n");
	}

	printf("second tableau :\n");
	for(i=0; i<TAILLE; i++)
	{
		if(i%2==0)
		{
			tab2[i]=i;
		}else{
			tab2[i]=i*-1;
		}
		printf("%d | ", tab2[i]);
	}
	printf("\n");

	boolTrouve = rechercheTrie(TAILLE, tab2);
	if(boolTrouve==0)
	{
		printf("tableau non trie\n");
	}else{
		printf("tableau trie\n");
	}

	return 0;
}
