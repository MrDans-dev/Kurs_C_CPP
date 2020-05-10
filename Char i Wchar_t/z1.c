#include <stdio.h>

int ile(char *slowo)
{
	int i=0;
	while(slowo[i]!='\0') i++;
	return i;
}

int main()
{
	char a[] = "Hello"; // H e l l o \0 null
	char c[] = "";
	char i = 'o';
	a[0]=NULL;
	wchar_t b[] = L"Hells";
	wprintf(L"%s\n",b);
	printf("%c\n",a[0]);
	printf("%s",a);
	printf("\n%c",i);
	printf("\n%i",ile(a));
	printf("\n%i %i %i",sizeof(a),sizeof(b),sizeof(c));
}
