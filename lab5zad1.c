#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int random1(int min, int max)
{
    int tmp;
    if (max>=min)
        max-= min;
    else
    {
        tmp= min - max;
        min= max;
        max= tmp;
    }
    return max ? (rand() % max + min) : min;
}
int main()
{
int seed = time(NULL);
srand(seed);
int a,b = 0;
bool flagpoz = false;
bool flagpion = false;
char z1,z2,z3;
char tablica[20][20];
//powstanie tablicy
for(int i=0;i<20;i++)
{
	for(int x=0;x<20;x++)
	{a=random1(97,123);
	char znak = a;
	tablica[i][x]=znak;
	
	}
}

//wypisywanie tablicy
printf("\t");
for(int i=0;i<20;i++)
{printf("%i\t",i+1);}
printf("\n");
for(int i=0;i<20;i++)
{
printf("%i\t",i+1);
	for(int x=0;x<20;x++)
	{
	
	printf("%c\t",tablica[i][x]);
}
printf("\n");
}



printf("Wpisz 3 znaki\t");
scanf("%c%c%c",&z1,&z2,&z3);

//sprawdzanie linii poziomych
for(int i=0;i<20;i++)
{

	for(int x=0;x<20;x++)
	{
		if(tablica[i][x]==z1)
		{
			if(tablica[i][x+1]==z2)
			{
				if(tablica[i][x+2]==z3)
				{printf("W linii poziomej %i jest ciag %c%c%c" ,i+1,z1,z2,z3);
			 	flagpoz = true;
				}
			}
		}
	}

}
//sprawdzanie linii pionowych
for(int i=0;i<20;i++)
{

	for(int x=0;x<20;x++)
	{
		if(tablica[x][i]==z1)
		{
			if(tablica[x+1][i]==z2)
			{
				if(tablica[x+2][i]==z3)
				{printf("W linii pionowej %i jest ciag %c%c%c" ,i+1,z1,z2,z3);
			 	flagpion = true;
				}
			}
		}
	}

}
printf("\n");
if(flagpoz==false)
{printf("Nie znaleziono ciagu %c%c%c w linii poziomej\n",z1,z2,z3);}
if(flagpion==false)
{printf("Nie znaleziono ciagu %c%c%c w linii pionowej\n",z1,z2,z3);}








}





//int moja_liczba = 52;
//int a,b = 0;
//printf("Hello World");
//printf("Lubie liczbe %i, bo... \n", moja_liczba);
//scanf("%i%i",&a,&b);
//printf("%i\n%i\n%i\n%i\n",a+b,a-b,a*b,a/b);




