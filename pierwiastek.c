//x^2 = x*x sqrt(4)=2 2*2 =4 sqrt(9) = 3 3*3 =9 i*i<=n
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,wynik;
    printf("\n");
    scanf("%i", &n);
    for(i = 1; i*i<=n; i++)
        wynik=i;
    printf("%i",wynik);
    return 0;
}
