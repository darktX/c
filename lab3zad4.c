#include<stdio.h>

int main(){
int liczba, reszta, tmp;
printf("podaj liczbe\n");
scanf("%d",&liczba);
while(liczba!=0)
{
reszta=liczba%8;
printf("%d",reszta);
tmp=(liczba-(liczba%8))/8;
liczba=tmp;
}

return 0;
}
