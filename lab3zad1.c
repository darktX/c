#include<stdio.h>
int main()
{
int a = 1;

do
{
a++;

if((a%2==0)&&(a%5==0)&&(a%7!=0))
{
printf("podzielna przez 2 i 5: %d\n",a);
}
if((a%2==0)&&(a%5!=0)&&(a%7==0))
{
printf("podzielne przez 2 i 7: %d\n",a);
}
if((a%2!=0)&&(a%5==0)&&(a%7==0))
{
printf("podzielne przez 7 i 5 %d\n",a);
}
}
while(a<=400);




}
