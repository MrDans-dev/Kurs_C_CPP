#include <stdio.h>

void foo(int n , int tab1[],int tab2[] , double tab3[])
{
	int i;
	for(i=0;i<n;i++)
	{
		tab3[i]=(double)tab1[i];
		printf("%0.0lf",tab3[i]);
	}
	for(i=n;i<(2*n);i++)
	{
		tab3[i]=(double)tab2[i-5];
		printf("%0.0lf",tab3[i]);
	}
}

void foo2(int n , int tab1[],int tab2[] , double tab3[])
{
	int i,elem1=0,elem2=0,temp=1;
	for(i=0;i<n;i++)
	{
		if(temp%2==0)
		{
			tab3[i]=(double)tab2[elem1];
			elem1++;	
		}
		else
		{
			tab3[i]=(double)tab1[elem2];
			elem2++;
		}
		temp++;
	}		
}

int main()
{
	int tab1[] = {1,2,3,4,5} , tab2[] = {0,9,7,6,5};
	double tab3[10];
	foo(5,tab1,tab2,tab3);
	foo2(10,tab1,tab2,tab3);
	return 0;	 
}
