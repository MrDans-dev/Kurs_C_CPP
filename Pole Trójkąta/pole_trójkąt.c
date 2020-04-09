#include <stdio.h>
#include <math.h>

int main()
{
	int op;
	printf("1.a*h\n");
	printf("2.boki\n");
	scanf("%i",&op);
	if(op==1)
	{
		int a,h;
		scanf("%i %i",&a , &h);
		printf("%f" , (float)(a*h)/2);
		return 0;	
	}
	if(op==2)
	{
		float a,b,c;
		scanf("%f %f %f",&a , &b ,&c);
		float ob = (a+b+c)/2;
		printf("%f",ob);
		double pole = sqrt(ob*(ob-a)*(ob-b)*(ob-c));
		printf("\n%d" , pole);
		return 0;
	}
	/*switch(op)
	{
		case 1:
			{
				printf("1");
				break;
			}
		case 2:
			{
				printf("2");
				break;
			}
		case 3:
		default: printf("Jestes Debilem");
	}*/
}
