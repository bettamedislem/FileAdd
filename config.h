#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED


#define max 100




typedef struct Line Line;
struct Line
{
	int index;
	int day;
	int month;
	int year;
	int hour;
	int minut;
	int op;
	int tab[max];
	int result;
};




int save (struct Line line, int tab[]);
Line createLine(int op ,int tab[] ,int result);

int op(int cmd,int tab[]);
int somme (int tab[]);
int produit (int tab[]);




#endif // CONFIG_H_INCLUDED
