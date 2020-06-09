#include <stdio.h>

struct osoba
{
	char *imie;
	char *nazwisko; //char nazwisko[]
	int dzien_ur;
	int miesciac_ur;
	int rok_ur;
	int wiek;	
};

struct trojkat
{
	int x,y,z;	
};

void info(struct osoba os)
{
	
	printf("Imie Nazwisko: %s %s\n",os.imie,os.nazwisko); //01.06.0996
	printf("Data ur: %2d.%2d.%4d\n",os.dzien_ur,os.miesciac_ur,os.rok_ur);
	printf("Wiek: %d\n",os.wiek);
}

void obwod(struct trojkat t[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Trojkat %i: OB=%i\n",i+1,t[i].x+t[i].y+t[i].z);
	}
}

void ob(struct trojkat tr)
{
	printf("OB = %i",tr.x+tr.y+tr.z);
}

int main()
{
	struct osoba os;
	

	os.imie="Daniel";
	os.nazwisko="xd";
	os.dzien_ur=1;
	os.miesciac_ur=6;
	os.rok_ur=4096;
	os.wiek=2020-os.rok_ur;
	info(os);
	
	/*struct trojkat t[2];		  	//   x  y  z 
	t[0].x=5; t[0].y = 6; t[0].z=7; //T1 5  6  7  OB=18
	t[1].x=6; t[1].y = 7; t[1].z=8; //T2 6  7  8  OB=21
	obwod(t,2);*/
	struct trojkat t;
	t.x = 5; t.y = 6 ; t.z=7;
	t.x=6; t.y=7; t.z=8;
	ob(t);
}
