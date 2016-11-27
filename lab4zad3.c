#include<stdio.h>
int main()
{
int i =0;
int wynik = 0;
for (int x=1;x<=10;x++)
{
	for(int y=1;y<=10;y++)
	{
		//printf("%i\t",x*y);
		i=x;
		while(i>0)
		{
		wynik = wynik+y;
		i--;
		}
printf("%i\t",wynik);
wynik = 0;
	}
printf("\n");


}


}
