#include <stdio.h>

int foo(int x){
	return x;
}

int foo1(int (*foo2)(int),int x, int y){
	if(foo2(x)%5==foo2(y)%5) return 1;
	return -1;
}

int main(){
	printf("%i",foo1((&foo),5,10));
	printf("%i",foo1((&foo),5,9));
}
