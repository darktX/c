#include <stdio.h>
#include <stdbool.h>
#include <time.h>
typedef struct
{
   char nazwa[10];
   unsigned int moc;
   unsigned int aktualnaMoc;
   time_t czasOstatniegoWlaczenia;
   bool isTurned;

} TSpisUrzadzen;
void pokazdaneUrzadzen(TSpisUrzadzen*, int lurzadzen);
int main()
{
  int opcja;
  TSpisUrzadzen spis[5]={"pralka",700,0,0,false,"lodowka",600,0,0,true,
"telewizor",400,0,0,true,"komputer",500,0,0,false,"zarowka",100,0,0,true,};
int lurzadzen = 5;
scanf("%d",&opcja);
switch (opcja)
{
    case 1:
        break;
    case 2:
        break;
}
}
