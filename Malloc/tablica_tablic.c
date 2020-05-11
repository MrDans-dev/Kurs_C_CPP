#include <stdio.h>
#include <stdlib.h>

int (*foo(int n, int m))[]
{
	return malloc(n*sizeof(int[m]));
}

void zero(int n , int m,int tab[n][m])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			tab[i][j]=(j+1)*(i+1);
		}
	}
}

void wypisz(int n,int m,int tab[n][m])
{
	for(int i=0;i<n;i++)
	{
		printf("%i: ",i);
		for(int j=0;j<m;j++)
		{
			printf("%i ",tab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int suma(int n,int m,int tab[n][m])
{
	int wynik=0;
	for(int j=0;j<m;j++)
	{
		wynik+=tab[n][j];
	}
	return wynik;
}

int avg(int n,int m,int tab[n][m])
{
	double max=0;
	int max_ind=-1;
	for(int i=0;i<n;i++)
	{
		if(max<suma(i,m,tab)/m)
		{
			max=suma(i,m,tab)/m;
			max_ind=i;
		}
	}
	return max_ind;
}

int main()
{
	//int **tab = (int**) foo(2,2); // int tab[2][2]
	int tab[2][2];
	tab[0][0] = (int**) foo(2,6); // tab[0][0] = int** tab[2][6]
	tab[0][1] = (int**) foo(5,10); // int tab[2][3]
	//tab[1][0] = (int**) foo(2,10); // int tab[2][10]
	//printf("%p\n",tab[0][0]);
	//printf("%p\n",tab[0][1]);
	//printf("%p\n",tab[1][0]);
	zero(2,6,tab[0][0]);
	wypisz(2,6,tab[0][0]);
	printf("Max avg row index: %i\n",avg(2,6,tab[0][0]));
	zero(5,10,tab[0][1]);
	wypisz(5,10,tab[0][1]);
	printf("Max avg row index: %i\n",avg(5,10,tab[0][1]));
	//printf("\n%i",)
	return 0;
}
