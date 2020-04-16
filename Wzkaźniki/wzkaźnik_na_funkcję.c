#include <stdio.h>
#include <stdlib.h>

int fun(int a)
{
    return a;
}

int foo(int (*fun)(int))
{
    return fun(5);
}

int main()
{
    printf("%i",foo((&fun)));
    return 0;
}
