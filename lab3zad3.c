#include<stdio.h>
int main()
{

int a,b = 0;
scanf("%i%i",&a,&b);
while(a>=b)
{
a = a-b;

if(a<0)
{
printf("liczba a niepodzielna przez b");
return 0;
}
if(a==0)
{
printf("liczba a podzielna przez b");
return 0;
}

}
printf("liczba a niepodzielna przez b");



}
