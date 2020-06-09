#include <stdio.h>
#include <stdlib.h>

struct punktn
{
	int wym;
	int *tab;
};

void wpisz(struct punktn *elem)
{
	for(int i=0;i<;i++)
	{
		elem->tab[i]=i+1;
	}
}

void wypisz(struct punktn elem)
{
	for(int i=0;i<elem.wym;i++)
	{
		printf("%i",elem.tab[i]);
	}
}

int main()
{
	struct punktn elem1;
	struct punktn elem2;
	elem1.wym = 5;
	elem1.tab=malloc(elem1.wym*sizeof(int));
	wpisz(elem1);
	wypisz(elem1);
	elem2.wym = 5;
	elem2.tab=malloc(elem2.wym*sizeof(int));
}
