#include<stdio.h>
int main()
{
float a,b,c,delta = 0;

printf("wpisz wspolczynnik a\n");
scanf("%f",&a);
printf("wpisz wspolczynnik b\n");
scanf("%f",&b);
printf("wpisz wspolczynnik c\n");
scanf("%f",&c);
if(a==0)
{
printf("funkcja nie jest kwadratowa!!\n");
}
else
{
printf("funkcja kwadratowa!!\n");
delta = (b*b)-(4*a*c);
printf("delta wynosi: ");
printf("%f\n",delta);
if(delta==0)
{
printf("funkcja ma jeden pierwiastek rzeczywisty\n");

}
else if(delta>0)
{
printf("funkcja ma dwa pierwiastki rzeczywiste\n");
}
else if(delta<0)
{
printf("funkcja ma pierwiastki urojone\n");

}
}


}
