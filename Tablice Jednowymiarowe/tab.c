#include <stdio.h>

void wypisz(int n , int *tab)
{
	for(int i=0;i<n;i++)
		printf("%i",tab[i]);
}

int main()
{
	int tab[3];
	scanf("%i",&tab[0]);
	scanf("%i",&tab[1]);
	scanf("%i",&tab[2]);
	wypisz(3,&tab);
	for(int i=0;i<3;i++)
		scanf("%i",tab+i);
	wypisz(3,&tab);
}
