#include<stdio.h>
int potega(int x,int y)
{
 int wynik = 1;
while (y>0)
{
wynik = wynik*x;
y--;
}
return wynik;
}

int main()
{
int a,b;
scanf ("%i%i",&a,&b);
printf("Potega to %i\n",potega(a,b));

}
