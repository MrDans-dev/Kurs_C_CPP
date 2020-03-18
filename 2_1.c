#include <stdio.h>


int licz()
{
	static int ile;
	ile++;
	return ile;
}

int silnia(int n)
{
	//licz();
	if(n<2) return 1;
	return n*silnia(n-1);
}
/*
	n=3
	3*(2*(1)) = 6
*/

int main()
{
	int n;
	scanf("%i",&n);
	//if(n==0&&m==7) return 0;
	//if(n==7) return 0;
	printf("%i",silnia(n));
	//printf("\nIle: %i",licz()-1);
	return 0;
	
}
