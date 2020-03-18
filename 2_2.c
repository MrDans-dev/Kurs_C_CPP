#include <stdio.h>

int main()
{
	int n=5,i,o;
	for(i=n;i>=1;i--) //5 4
	{
		for(o=n;o>=i;o--) //o=5 o == i o=5 o=4
		{
			printf("#");
		}
		printf("\n");
	}
}
