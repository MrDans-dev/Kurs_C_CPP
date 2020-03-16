#include <stdio.h>

int main()
{
    int n;
    printf("Podaj liczbe:");
    scanf("%i",&n);
    if(n<0) n*=(-1);
	printf("%i",n);
    return 0;
}
