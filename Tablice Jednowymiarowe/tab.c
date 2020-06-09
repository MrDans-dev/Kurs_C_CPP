#include <stdio.h>
#include <stdlib.h>

void wypisz(int n,char tab)
{
	for(int i=0;i<n;i++){
		printf("%s",tab);
	}
}

int size(char tab[])
{
	int i=0;
	while(tab[i]!=NULL)
		i++;
	return i;
}

void wytnij(char tab[],int n)
{
	tab[n]='\0';
	printf("\n%s",tab);
}

void zm(char tab[])
{
	int s = size(tab);
	char temp[s];
	int i=s;
	while(i>=0)
	{
		temp[(s-1)-i]=tab[i];
		i--;
	}
	temp[s]='\0';
	printf("\n%s",temp);
}

int main()
{
	char a1 = 'a';
	char a2[]= "HAHAHAHA";
	printf("%s\n",a2);
	int i=0;
	while(a2[i]!=NULL)
	{
		if(i%2==1)
		{
			printf("%c",a2[i]);
		}
		i++;
	}
	printf("%i",size(a2));
	zm(a2);
	wytnij(a2,3);
}
