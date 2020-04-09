#include <stdio.h>

int main()
{
	int i,n=3;
	int tab2[n];
	for(i=0;i<n;i++)
		tab2[i]=i;
	for(i=0;i<n+2;i++)
		printf("%i ",tab2[i]);
	int tab[] ={1,2,3}; //5235656  #000EF4
	printf("%p  %i\n",&tab[0], tab[0]);
	printf("%p\n",&tab[1]);
	printf("%p\n",&tab[2]);
	printf("%i\n",sizeof(int));
	printf("%i",sizeof(double));
	return 0;
}
