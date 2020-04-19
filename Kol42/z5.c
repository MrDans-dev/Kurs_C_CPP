#include <stdio.h>

//1*2*3 = 6
//3*2*1 = 6 if 1 == 6
//25+24+23+22+21+...+3+2+1 if 1 == 325

static int foo(int n)
{
	if(n==1) return 1;
	return n+foo(n-1);
}

void foo1(int n)
{
	static wynik=0;
	if(n==1)
	{
		wynik+=1;
		printf("1=%i",wynik);	
	} 
	else
	{
		wynik+=n;
		printf("%i+",n);
		foo1(n-1);
		
	}
}

int main()
{
	printf("%i\n",foo(25));
	foo1(25);
}
