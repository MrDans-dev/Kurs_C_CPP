#include <stdio.h>
#include <stdlib.h>

struct punktn
{
	int wym;
	int *tab;
};

void wpisz(struct punktn a[],int i)
{
        a[i].tab=malloc(a[i].wym*sizeof(int));
        for(int j=0;j<a[i].wym[i];j++)
        {
            a[i].tab[j]=j;
        }
}

void wypisz(struct punktn a)
{
    for(int i=0;i<a.wym;i++)
    {
        printf("%i",a.tab[i]);
    }
    printf("\n");
}

int main()
{
	struct punktn elem1[5];
	//struct punktn elem2[5];
    for(int i=0;i<5;i++)
    {
        elem1[i].wym=5;
        wpisz(elem1[i],i);
    }
	//wypisz(elem1);
	//elem2.wym = 5;
	//elem2.tab=malloc(elem2.wym*sizeof(int));
}
