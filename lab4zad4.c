#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {

    double factorial(double f)
    {
      if ( f == 0 )
          return 1;
      return(f * factorial(f - 1));
    }

    double power(double podstawa, double wykladnik)
    {
      double wynik;
      for(int i = 1; i<wykladnik; i++)
      {
        wynik*=podstawa;
      }
    }

    double a;
    scanf("%lf", &a);

    double sum=0;

    for(int i=0;i<=10;i++)
    {
      double tmp = power(a, i);
      sum+=tmp/factorial(i);
    }

    double wynik = a - sum;
    printf("%lf", wynik);

   return 0;
}

