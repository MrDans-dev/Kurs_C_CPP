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
