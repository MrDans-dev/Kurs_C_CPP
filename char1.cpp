#include <stdio.h>

int main()
{
	char a[] = "kajak";char b[5];
	int ile=4;
	for(int i=0;i<5;i++)
	{
		b[i]=a[ile];
		ile--;
	}
	if(a[]==b[]) printf("1");
}
