#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"

int getOp (const char *op);

int main(int argc, char const *argv[])
{
	/* code */
	int tab[max];

	int opr ;
	if (argv[1] == NULL) opr =1;
	else opr = getOp(argv[1]);

	for (int i=0;i<max;i++)
	{
		tab[i] = i;
	}

	save(createLine(opr,tab,op(opr,tab)),tab);
    printf("\nDone\n\n");

	return 0;
}


int getOp (const char *op)
{
    return (int) *op - '0' ;
}

