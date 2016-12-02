#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
double liczba=0;
double suma=0;
double sumapop=0;
bool flag = false;
bool pierwszeZero = false;
bool drugieZero = false;
while(pierwszeZero==false)
{
printf("Wpisz liczbe: ");
scanf("%lf",&liczba);
suma = suma + liczba;
sumapop = suma;
if(liczba==0)
{
  system("clear");
  suma=0;
  printf("Suma wynosi %f \n", suma);
  printf("Wpisz liczbe: ");
  scanf("%lf",&liczba);
  if(liczba==0)
  {
    printf("suma wynosi %f \n",sumapop);
    pierwszeZero=true;
  }
  else{suma = suma +liczba;}
}

  printf("suma wynosi %f \n",sumapop);

}

}
