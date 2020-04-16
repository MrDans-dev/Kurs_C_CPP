#include <stdio.h>

int index(int n,int tab[],int elem)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(elem==tab[i]) return i;
	}
	return -1;
}

int min(int n , int tab[])
{
	int i,wyn=tab[0];
	for(i=1;i<n;i++)
	{
		if(wyn>tab[i]) wyn==tab[i];
	}
	return index(n,tab,wyn);
}

int por(int n,int tab1[],int tab2[])
{
	int a = min(n,tab1);
	int b = min(n,tab2);
	if(a==b) return 1;
	return 0;
}

int main()
{
	int tab1[]={1,2,-5,4,6} , tab2[] = {1,2,-7,4,5};
	printf("%i",por(5,tab1,tab2));
}
