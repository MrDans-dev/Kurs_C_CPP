#include <stdio.h>

int max(int n,int tab[])
{
	int max=tab[0];
	for(int i=1;i<n;i++)
	{
		if(max<tab[i]) max=tab[i];
	}
	return max;
}

int suma(int n,int tab[],int tab2[])
{
	int a = max(n,tab);
	int b = max(n,tab2);
	return a+b;
}

int main()
{
	int tab[]={1,2,3,4,5} , tab2[]={1,2,3,4,5};
	printf("%i",suma(5,tab,tab2));
	return 0; 
}
