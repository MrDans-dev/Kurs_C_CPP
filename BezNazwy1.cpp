#include <stdio.h>
#include <stdlib.h>
void foo(int a, int b, int c){
    int x;
    x=a;
    a=c;
    c=b;
    b=x;
}

int main()
{
    int a,b,c;
    scanf("%i %i %i", &a,&b,&c);
    printf("%i %i %i\n",a,b,c);
    foo(a,b,c);
    printf("%i %i %i",a,b,c);
    return 0;
}
