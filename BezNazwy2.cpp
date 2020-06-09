#include <stdio.h>
#include <math.h>

struct punkt
{
	double x,y,z;	
};

double mini(struct punkt tab[],int n)
{
	int min=-1,pom=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			pom=sqrt(pow(tab[j].x-tab[i].x,2)+pow(tab[j].y-tab[i].y,2)+pow(tab[j].z-tab[i].z,2));
			if(pom<min) min = pom;
		}
	}
	return min;
}

int main()
{
	struct punkt tab[2];
	tab[0].x =2;
	tab[0].y = 3;
	tab[0].z = 7;
	tab[1].x = 9;
	tab[1].y= 3;
	tab[1].z = 1;
	printf("%lf",mini(tab,2));
}

//sqrt((x-x)^2+(y-y)^2+(z-z)^2)

//tab[0][0-2] 
//  x   y	 z
//0 2   3    7
//1 9   1    1
//2 5   5    5
//3 6   6    6
