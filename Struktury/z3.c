#include <stdio.h>
#include <stdlib.h>

struct test{
	int *a;
	int b;
};

int main()
{
	struct test *t;
	t->a=5;
	t->b=5;
	//printf("%p %i\n",&t->a,t->a);
	//printf("%p %i",&t->b,t->b);
}
