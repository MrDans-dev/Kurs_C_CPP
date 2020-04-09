#include <stdio.h>

int main()
{
	int n=5,i,o;
	for(i=n;i>=1;i--)
	{
		for(o=n;o>=i;o--) 
		{
			printf("#");
		}
		printf("\n");
	}
}
