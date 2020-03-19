#include <stdio.h>
#include <math.h>

int main()
{
	// ax^2 + bx + c = 0
	int a ,b ,c; 
	printf("Podaj a: "); scanf("%i",&a);
	printf("Podaj b: "); scanf("%i",&b);
	printf("Podaj c: "); scanf("%i",&c);
	if(a!=0)
	{
		float del = (b*b)-4*a*c;
		del = sqrt(del);
		printf("%f\n",del);
		if(del > 0)
		{
			float x1, x2;
			x1 = (-b-del)/2*a;
			printf("%f" , x1);
			x2 = (-b+del)/2*a;
			printf("%f" , x2);
			return 0;
		}
		if(del < 0) {printf("Brak rozwiazan"); return 0;}
		if(del == 0) {printf("%f",); return 0;} 
		 
	} else if(b!=0){
		
	}	
}
