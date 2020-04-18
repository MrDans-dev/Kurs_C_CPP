#include <stdio.h>

int licz()
{
	static int a =0;
	a++;
	return a;
}

int main()
{
	licz();
	licz();
	licz();
	printf("%i",licz());
	const int a=5;
	//a++;
	printf("%i",a);
}
