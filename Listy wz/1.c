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
		printf("%i ",el->a);
		el=el->next;
	}
}

void pomin(struct elem *el, int pom)
{
	while(el!=NULL)
	{
		if(pom!=0)
		{
			pom--;
			el=el->next;
		}
		else
		{
			printf("%i ",el->a);
			el=el->next;
		}
	}
}

struct elem *konkretna(struct elem *el , int n)
{
	while(el!=NULL)
	{
		if(el->a==n)
		{
			return el;
		}
		el=el->next;
	}
	return NULL;
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
	printf("\n%i",max);
}

int main()
{
	struct elem *jeden=malloc(sizeof(struct elem));
	jeden->a=5; // jeden.a = 5
	jeden->next=malloc(sizeof(struct elem));
	jeden->next->a=10;
	jeden->next->next=malloc(sizeof(struct elem));
	jeden->next->next->a=15;
	jeden->next->next->next=NULL;
	wypisz(jeden);
	pomin(jeden,1);
	max_st(jeden);
	printf("\n%p",konkretna(jeden,6));
	return 0;
}
