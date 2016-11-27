#include<stdio.h>
int main()
{
int n,n1,n2,n3,n4,n5,n6=0;
printf("Podaj ilosc liczb ");
scanf("%i",&n);
switch (n)
{
case 2:
scanf("%i%i",&n1,&n2);
printf("%i\n",(n1+n2)/2);
break;
case 3:
scanf("%i%i%i",&n1,&n2,&n3);
printf("%i\n",(n1+n2+n3)/3);
break;
case 4:

scanf("%i%i%i%i",&n1,&n2,&n3,&n4);
printf("%i\n",(n1+n2+n3+n4)/4);
break;



case 5:

scanf("%i%i%i%i%i",&n1,&n2,&n3,&n4,&n5);
printf("%i\n",(n1+n2+n3+n4+n5)/5);
break;

case 6:

scanf("%i%i%i%i%i%i",&n1,&n2,&n3,&n4,&n5,&n6);
printf("%i\n",(n1+n2+n3+n4+n5+n6)/6);
break;
}

}

