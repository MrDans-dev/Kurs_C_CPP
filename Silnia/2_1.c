#include <stdio.h>


int silnia(int n)
{
	if(n<2) return 1;
	return n*silnia(n-1);
}

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
