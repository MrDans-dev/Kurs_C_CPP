//CW2_1
#include <stdio.h>

int main()
{
	int n,i,wynik=1; // wynik = 1
	scanf("%i",&n); // n = 3
	for(i=n;i>=1;i--) // n=3 i=3
	{
		wynik*=i; //3 6 6
	}
	printf("wynik= %i",wynik);
	// n= 3 3*2*1 =6
}
