#include<stdio.h>
int main()
{
int a,i = 0;

printf("wpisz liczbe a\n");
scanf("%i",&a);
while(a>i || a==i)
{

if(a==i)
{
printf("Liczba parzysta\n");
return 0;
}
i=i+2;
}
printf("liczba nieparzysta\n");


}
