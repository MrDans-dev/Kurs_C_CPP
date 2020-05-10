#include <stdio.h>
#include <stdlib.h>

int * foo(int n)
{
	return malloc(sizeof(int[n]));
}

int * foo2(int n,int m)
{
	return malloc(n*sizeof(int[m]));
}

void zero(int n,int *tab)
{
	for(int i=0;i<n;i++)
	{
		tab[i]=0;
	}
}

void wypisz(int n,int *tab)
{
	for(int i=0;i<n;i++)
	{
		printf("%i",tab[i]);
	}
	printf("\n");
}

int main()
{
	//int a;
	//printf("%i %p %i\n",a,&a,sizeof(a));
	int **tab = (int**) foo(3);
	int tab2[3];
	zero(3,tab);
	wypisz(3,tab);
	int **tan3 = (int**) foo2(2,3);
	int tab4[2][3];
	//printf("%i %p %i",tab,&tab,sizeof(tab)*3);
}
