#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "config.h"



Line createLine(int op ,int tab[] ,int result)
{
    time_t now;
    time(&now);
    struct tm *now_tm;
    now_tm = localtime(&now);

    struct Line *line = malloc(sizeof(struct Line));
    line->index = 0;
    line->day = now_tm->tm_mday;
    line->month = now_tm->tm_mon;
    line->year = now_tm->tm_year + 1900;
    line->hour = now_tm->tm_hour;
    line->minut = now_tm->tm_min;
    line->op = op;
    for(int i=0;i<max;i++)
    {
        line->tab[i] = tab[i];
    }
    line->result = result;

    return *line;

}


int save (struct Line line,int tab[])
{
        FILE* file = NULL;
        file = fopen("TABOP.dat", "a+");

        if (file != NULL)
        {
        	char chaine[max] ;
        	char alltab[10000];
        	for (int i=0;i<max;i++)
        	{
        		sprintf(chaine,"%i",tab[i]);
        		strcat(alltab,"#");
        		strcat(alltab,chaine);
        	}

        	fprintf(file, "-->%i:%i/%i/%i/%i`%i:%i:%s:%i\n",line.index,line.day,line.month,line.year,line.hour,line.minut,line.op,alltab,line.result);

            fclose(file);
        }
        else {
            //error opening file
            return -1;
        }
        return 0;
}


int read()
{
    FILE* file = NULL;
	file = fopen("TABOP.dat", "r");

    return 0;

}










