#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; //3
    int b; //5
    int c; //10
    int max; //3
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    max = a;
    if(b>max) max=b; //5
    if(c>max) max=c; //10
    printf("%i",max);
    return 0;
}
