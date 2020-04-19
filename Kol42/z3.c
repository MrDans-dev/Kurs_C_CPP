#include <stdio.h>

int min2(int a,int b){
	if(a<b) return a;
	return b;
}

int min3(int a,int b, int c){
	int pom = min2(a,b);
	if(c<pom) return c;
	return pom;
}

int main(){
	printf("%i\n",min3(10,5,-30));
	printf("%i",min3(10,10,5));
}
