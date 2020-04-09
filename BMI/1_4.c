#include <stdio.h>
#include <math.h>

int main()
{
	int wzrost; 
	float waga;
	scanf("%i",&wzrost);
	scanf("%f",&waga);
	printf("%0.1f",(waga/(wzrost*wzrost))*10000);
	return 0;
}
