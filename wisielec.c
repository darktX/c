#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
    
        int liczbaBledow=0;
        char tablica[10];
        char tablicaUzyt[10];
        char a,litera;
        //losowy seed
        int seed = time(NULL);
        srand(seed);
        bool flag = false;
        char litery[]="abcdefghijklmnopqrstuvwxyz";
    //Wpisuje do tablicy - losowanie liter
    printf("TABLICA\n");
    for(int i=0;i<10;i++)
    {
        a = litery[rand() % 26];
        printf("%c ",a);
        tablica[i]=a;
    }
    printf("\n");
    
    //Przygotowanie tablicyUzyt
    for(int i=0;i<10;i++)
    {
        tablicaUzyt[i]='*';
    }
    //Wpisanie znaku i sprawdzenie tablicy
    while(liczbaBledow<7)
    {
        
        printf("Podaj litere: ");
        //sprawdzanie czy wprowadzana jest liczba
        do{scanf(" %c",&litera);
            if(!(isalpha(litera))){printf("To nie jest znak!!\n");printf("Podaj litere: ");}
        }
        while(!(isalpha(litera)));
        
        
        for(int i=0;i<10;i++)
        {
            if(litera==tablica[i])
            {
                flag=true;
                tablicaUzyt[i]=litera;
            }
            
        }
        
        if(flag==true)
        {
            
            flag=false;
        }
        else
        {
        liczbaBledow++;
        //rysowanie wisielca
            switch (liczbaBledow) {
                case 1:
                    printf("  |  \n");
                    printf("__|__\n");
                    printf("6 szans\n");
                    break;
                case 2:
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("__|__\n");
                    printf("5 szans\n");
                    break;
                case 3:
                    printf("  __ \n");
                    printf("  |/ \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("__|__\n");
                    printf("4 szanse\n");
                    break;
                case 4:
                    printf("  ______ \n");
                    printf("  |/ \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("__|__\n");
                    printf("3 szanse\n");
                    break;
                case 5:
                    printf("  _______ \n");
                    printf("  |/   |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("__|__\n");
                    printf("2 szanse\n");
                    break;
                case 6:
                    printf("  _______ \n");
                    printf("  |/   |  \n");
                    printf("  |   (_) \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("  |  \n");
                    printf("__|__\n");
                    printf("1 szansa\n");
                break;
                case 7:
                    printf("  _______ \n");
                    printf("  |/   |  \n");
                    printf("  |   (_) \n");
                    printf("  |   \\|/ \n");
                    printf("  |    |\n");
                    printf("  |   /|\\  \n");
                    printf("  |       \n");
                    printf("__|__     \n");
                    break;
                default:
                    break;
            }
        
        }
            
        for(int i=0;i<10;i++)
        {
            printf("%c ",tablicaUzyt[i]);
        }
        printf("\n");
        if(((tablicaUzyt[0]!='*')&&(tablicaUzyt[1]!='*')&&(tablicaUzyt[2]!='*')&&(tablicaUzyt[3]!='*')&&(tablicaUzyt[4]!='*')&&(tablicaUzyt[5]!='*')&&(tablicaUzyt[6]!='*')&&(tablicaUzyt[7]!='*')&&(tablicaUzyt[8]!='*')&&(tablicaUzyt[9]!='*'))){printf("Zwyciestwo!!\n"); return 0;}
        }
    if(liczbaBledow==7){printf("Przegrana, hasło to ");
        for(int i=0;i<10;i++)
        {
            printf("%c",tablica[i]);
        }
        printf("\n");

    }
    
}

