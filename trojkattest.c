#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
       int i, j, k, l, N;

       scanf("%d", &N);

       printf("1\n");
       printf("1 1\n");

  int* a = (int*)malloc(4*2);
  int* b = (int*)malloc(4*2);

  a[0] = 1;
  a[1] = 1;

  b[0] = 1;
  b[1] = 1;

       for(i=3; i<N+1; i++)
       {
               a = (int*)realloc(a, i*4);
               b = (int*)realloc(b, i*4);

               for(j=1; j<i-1; j++)
                    b[j] = a[j-1] + a[j];

               b[i-1] = 1;

               for(k=1; k<i; k++)
                    a[k] = b[k];

               for(l=0; l<i; l++)
                    printf("%d ", a[l]);

               printf("\n");
        }

 return 0;
}
