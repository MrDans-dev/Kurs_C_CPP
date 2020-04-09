#include <stdio.h>

int main()
{
    int n,m;
    scanf("%i %i",&n , &m);
    if(n%m==0) printf("1"); // 4/2 = 2 4%2 =0 3/2 = 1.5  0.5 3%2 = 1
	else printf("0");
	printf("\n%i", n%m);
    return 0;
}
