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



int a,b,c,d,ret;
scanf("%i%i%i%i",&a,&b,&c,&d);
ret = potega(a,d)+potega(b,d)+potega(c,d);
printf("%i",ret);
return 0;

}




