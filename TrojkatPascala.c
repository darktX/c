#include<stdio.h>
#include<stdbool.h>
int main()
{
  int liczbaSpacji = 16; //16 ale 18-2=16 dla pętli while
  int liczbaSpacjiTemp=0;
  int tab[11];
  int tabPop[9];
  int i = 1;
  bool flag = true;
  tab[0]=1;
  for(int a=0; a<10; a++)
  {
    tabPop[a]=0;
  }
  while(liczbaSpacji>0)
  {
    liczbaSpacjiTemp=liczbaSpacji;
    while(liczbaSpacjiTemp>0)
    {
      printf(" ");
      liczbaSpacjiTemp--;
    }
    // tutaj pisze liczby
    printf("%i",tab[0]);
    while(i<10&&tabPop[i+1]!=0)
    {
    printf("%i",i);
    // if tabPop[i+1] exists!!!???
    printf("%i",tabPop[i]+tabPop[i+1]);
    i++;
    }
    if(tabPop[i+1]==0)
    {
      printf("%i",tab[0]);
    }
    printf("%i",tab[0]);
    liczbaSpacji = liczbaSpacji-2;
    printf("\n");
  }

}
