#include <stdio.h>
#include <stdlib.h>

void wypisz(int n,int* tab[])
{
	for(int i=0;i<n;i++)
	{
		printf("%p  %i",&tab[i],tab[i]);
	}
	printf("\n");
}

int main()
{
	int tab[]={1,2,3,4,5};
	wypisz(5,&tab);
}
