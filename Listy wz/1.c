#include <stdio.h>
#include <stdlib.h>

struct elem{
	int a;
	struct elem *next;
};

void wypisz(struct elem *el)
{
	while(el!=NULL)
	{
		printf("%i",el->a);
		el=el->next;
	}
}

void max_st(struct elem *el)
{
	int max=-1;
	while(el!=NULL)
	{
		if(el->a>max)
		{
			max = el->a;
		}
		el=el->next;
	}
	printf("%i",max);
}

int main()
{
	struct elem *jeden=malloc(sizeof(struct elem));
	jeden->a=5;
	jeden->next=malloc(sizeof(struct elem));
	jeden->next->a=6;
	jeden->next->next=NULL;
	wypisz(jeden);
	max_st(jeden);
	return 0;
}
