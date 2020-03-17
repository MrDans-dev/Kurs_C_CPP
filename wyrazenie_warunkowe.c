#include <stdio.h>

int main()
{
	int n=6,m=5;
	printf("%i\n",m>n?m:n);
	
	if(m>n)
	{
		//prawda
		printf("%i",m);
	}
	else
	{
		//fa³sz
		printf("%i",n);
	}
	//warunek?prawda:fa³sz
}
