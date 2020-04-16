#include <stdio.h>

float pow(int n)
{
	int i;
	float wynik=4;
	for(i=1;i<n;i++)
	{
		wynik*=4;
	}
	return (float)(1)/wynik;
}

int main()
{
	printf("%f",pow(2));
}

