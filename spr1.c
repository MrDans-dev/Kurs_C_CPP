//Napisz program kt�ry spradzi czy liczba ca�kowita n jest podzielna przez liczbe ca�kowit� m i m nie jest 0
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%i",&n); //1
    scanf("%i",&m); //2
    if(m==0) return 0;
    if (n%m==0) printf("1");
    else printf("0");
    return 0;
}
