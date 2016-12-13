#include<stdio.h>
#include<stdbool.h>

typedef struct
{
    char imie[20];
    char nazwisko[20];
    unsigned int kolos1;
    unsigned int kolos2;
    unsigned int nr_indeksu;
    bool zal1;
    bool zal2;
} TDaneStudenta;

void wczytajDaneStudenta(TDaneStudenta*);
void pokazdaneGrupy(TDaneStudenta*, int lstud);
void pokazDaneStudenta(TDaneStudenta);
void promujStudenta(TDaneStudenta*, int lstud);
void promocja(TDaneStudenta*);

int main()
{
  int nind = 1;
  int lstud = 10;
  TDaneStudenta grupa[20]={"Karol","Lesner",37,98,109245,'F','T',
  "Michal","Lesner",53,52,184645,'F','T',
  "Eliza","Pajac",63,62,625245,'F','T',
  "Stefan","Michalik",23,23,109954,'F','T',
  "Aleksandra","Piotrowicz",2,4,132545,'F','T',
  "Julia","Slowinska",36,91,187465,'F','T',
  "Malgorzata","Brukowa",74,86,109394,'F','T',
  "Katarzyna","Zegna",97,23,849245,'F','T',
  "Felicja","Hejek",99,100,198245,'F','T',
  "Jaroslaw","Opolski",42,91,965245,'F','T'};
for(int i=0;i<10;i++)
{
  if(grupa[i].kolos1>50)
  {grupa[i].zal1 = true;}
  else{grupa[i].zal1 = false;}
  if(grupa[i].kolos2>50)
  {grupa[i].zal2 = true;}
  else{grupa[i].zal2 = false;}
}
    int opcja;

    do
    {
        printf("Wybierz opcje:\n1- dodaj studenta\n2- wyswietl dane o studencie\n3- wyswietl dane grupy\n4- wyjscie\n");
        scanf("%d",&opcja);
        switch (opcja)
        {
            case 1:
                wczytajDaneStudenta(&grupa[lstud]);
                lstud++;
                break;
            case 2:


            printf("Podaj numer indeksu: ");
            scanf("%i",&nind);
            int x;
            bool jest = false;
            for (x=0; x<lstud; x++)
            if ((*(grupa+x)).nr_indeksu==nind)
            {
              printf("%20s|%21s|%21s|%15s|%11s|%11s|%11s|\n","Imie", "Nazwisko", "Indeks", "Kolokwium 1", "Kolokwium 2","Zaliczenie 1", "Zaliczenie 2");
              pokazDaneStudenta(*(grupa+x));
               jest = true;
               break;
            }
       if (!jest)
           printf("Brak studenta o podanym numerze indeksu!!!\n");
           break;
            case 3:
                pokazdaneGrupy(grupa, lstud);
                break;
        }
    } while (opcja!=4);
    return 0;
}

void pokazDaneStudenta(TDaneStudenta a)
{
  char z1,z2;
  if(a.zal1==true)
  {z1='T';}
  else
  {z1='N';}
  if(a.zal2==true)
  {z2='T';}
  else
  {z2='N';}
    printf("%20s%22s%22i%16i%12i%13c%13c\n",a.imie, a.nazwisko, a.nr_indeksu, a.kolos1 , a.kolos2 , z1, z2);
}


void wczytajDaneStudenta(TDaneStudenta *student)
{
    printf("Podaj imie: ");
    scanf("%19s",student->imie);
    printf("Podaj nazwisko: ");
    scanf("%19s",student->nazwisko);
    printf("Podaj numer indeksu: ");
    scanf("%d",&student->nr_indeksu);
    printf("Podaj wynik 1 kolokwium: ");
    scanf("%d",&student->kolos1);
    printf("Podaj wynik 2 kolokwium: ");
    scanf("%d",&student->kolos2);
    if((*student).kolos1>50)
    {student->zal1 = true;}
    else{student->zal1 = false;}
    if((*student).kolos2>50)
    {student->zal2 = true;}
    else{student->zal2 = false;}
}

void pokazdaneGrupy(TDaneStudenta *grupa, int lstud)
{
    printf("--------------------------------------------------------\n");
    printf("Dane grupy\n");
    printf("Liczba studentow: %d\n", lstud);
    printf("Lista studentow: \n");
    printf("%20s|%21s|%21s|%15s|%11s|%11s|%11s|\n","Imie", "Nazwisko", "Indeks", "Kolokwium 1", "Kolokwium 2","Zaliczenie 1", "Zaliczenie 2");
    int x;
    for (x=0; x<lstud; x++)
        pokazDaneStudenta(grupa[x]);
    printf("--------------------------------------------------------\n");
}
