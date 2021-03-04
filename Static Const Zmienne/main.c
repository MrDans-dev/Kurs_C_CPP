#include <stdio.h>

void foo()
{
    static int n=5; // usu� static
    n++;
    printf("%i\n",n);
}

int main()
{
    const int stala=2; // -- deklaracja sta�ej
    //stala++; -- nie mo�na modyfikowa� zmiennych sta�ych (const)
    foo();
    foo();
    foo();
    foo();
    foo();
    // w momencie wykonywania funkcji foo() warto�� zmiennej lokalnej funkcji zmienia si� o 1 i jest zapisywane
    // przy usini�ciu "static" warto�� zmiennej nie b�dzie zachowana i wynikiem zawsze b�dize 6
    return 0;
}
