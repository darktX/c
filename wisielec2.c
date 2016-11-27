#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<ctype.h>
int main() {

        
        int liczbaBledow=0;
        char tablica[10];
        char tablicaUzyt[10];
        char litera;
        int num = 0;
        char tablicastringow[10][11]={"absolutyzm","bezchmurny","arcybiskup","budowniczy","diagnostyk","dysfunkcja","strachliwy","zielarstwo","socrealizm","abaddpxoxx"};
        //losowy seed
        int seed = time(NULL);
        srand(seed);
        bool flag = false;
        //Wpisuje do tablicy - losowanie wyrazu
        printf("TABLICA - POKAZYWANA TYLKO DO CELOW TESTOWYCH: ");
    num = rand() % 10;
        for(int i=0;i<10;i++)
        {
           
            
            tablica[i]=tablicastringow[num][i];
            printf("%c",tablica[i]);
        }
        printf("\n\n");
        
        //Przygotowanie tablicyUzyt
        for(int i=0;i<10;i++)
        {
            tablicaUzyt[i]='*';
        }
	printf("-----------------------------------------------------\n");
	printf("WITAJ W GRZE WISIELEC - WYLOSOWANO 10 LITEROWE HASLO\n");
	printf("-----------------------------------------------------\n");
        printf("\n");
	printf(
//Wpisanie znaku i sprawdzenie tablicy
        while(liczbaBledow<7)
        {
            
            printf("Podaj litere: ");
            //sprawdzanie czy wprowadzana jest liczba
            do{scanf(" %c",&litera);
                if(!(isalpha(litera))){printf("To nie jest dopuszczalny znak!!\n");printf("Podaj litere: ");}
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
            printf("\n\n");
            if(((tablicaUzyt[0]!='*')&&(tablicaUzyt[1]!='*')&&(tablicaUzyt[2]!='*')&&(tablicaUzyt[3]!='*')&&(tablicaUzyt[4]!='*')&&(tablicaUzyt[5]!='*')&&(tablicaUzyt[6]!='*')&&(tablicaUzyt[7]!='*')&&(tablicaUzyt[8]!='*')&&(tablicaUzyt[9]!='*')))
		{printf("-------------\n");
 		 printf("Zwyciestwo!!\n");
 		 printf("-------------\n");
 		 return 0;}
        }
        if(liczbaBledow==7)
	{printf("-------------------------------\n");
	 printf("Przegrana, hasło to ");
            for(int i=0;i<10;i++)
            {
                printf("%c",tablica[i]);
            }
            printf("\n");
	 printf("-------------------------------\n");
            
        }
}
    

