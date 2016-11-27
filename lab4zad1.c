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
for(int i=0;i<=4;i++)
{
switch(i){
case 1:printf("            %i\n",potega(2,0)); break;
case 2:printf("         %i     %i\n",potega(2,1),potega(2,2)); break;
case 3:printf("      %i    %i    %i\n",potega(2,3),potega(2,4),potega(2,5)); break;
case 4:printf("  %i   %i   %i   %i\n",potega(2,6),potega(2,7),potega(2,8),potega(2,9)); break;
}
}



}
