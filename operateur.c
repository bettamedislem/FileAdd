#include <stdio.h>
#include <stdlib.h>
#include "config.h"



int op(int cmd,int tab[])
{

	int result = 0;
    switch(cmd)
    {
        case 1:
            result = somme(tab);
            printf("\nOperation somme");
            break;
        case 2:
            result = produit(tab);
            printf("\nOperation produit");
            break;

    }

    return result;
}


int somme (int tab[])
{
	int som = 0;
	for (int i=0 ; i<max; i++)
	{
		som += tab[i];
	}
	return som;
}


int produit (int tab[])
{
	int prod=0 ;
	for (int i=0;i<max;i++)
	{
		prod*=tab[i];
	}
	return prod;
}
