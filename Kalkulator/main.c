#include <stdio.h>
#include <stdlib.h>

int main()
{
    int koniec=1;
    int wybor;
    while(koniec==0)
    {
    system("cls");
    printf("Kalkulator\n");
    printf("1.Dodawanie:\n");
    printf("2.Odejmowanie:\n");
    printf("3.Mno¿enie:\n");
    printf("4.Dzielenie:\n");
    printf("5.Pierwiastek:\n");
    printf("6.Potêga:\n");
    printf("7.KONIEC\n");
    scanf("%i",&wybor);
    switch(wybor)
    {
        case 1:
        {
        int x,y;
        scanf("%i %i", &x,&y);
        printf("Suma=%i\n",x+y);
        system("pause");
        break;
        }
        case 2:
        {
        int x,y;
        scanf("%i %i", &x,&y);
        printf("Odejmowanie=%i\n",x-y);
        break;
        }
        case 3:
        {
        int x,y;
        scanf("%i %i", &x,&y);
        printf("Iloraz=%i\n",x*y);
        break;
        }
        case 4:
        {
        int x,y;
        scanf("%i %i",&x,&y);
        printf("Iloczyn=%i\n",x/y);
        break;
        }
        case 5:
        {
        int x,wynik;
        scanf("%i",&x);
        int i;
        for(i=1; i*i<=x; i++)
        {
        wynik=i;
        }
        printf("%i\n",wynik);
        break;
        }
        case 6:
        {
        int x;
        scanf("%i",&x);
        printf("%i\n",x*x);
        break;
        }
        case 7:
            {
            printf("Zakonczyc ci zycie?\n");
            scanf("%i",&wybor);
            if(wybor==1) koniec=1;
            break;
            }
        default: printf("Chuj"); break;
    }


}
return 0;
}
