#include <stdlib.h>
#include <stdio.h>

void kasa(){
	double k, suma=0, suma2=0;
printf("Wpisz liczbe\n");
	scanf(" %lf", &k);
	
	do{

		do{
		printf("Wpisz liczbe\n");
		suma=suma+k;
		printf("%lf\n", suma);
		scanf(" %lf", &k);
	
		}while (k!=0);
		
		system("clear");
		printf("wpisz liczbe\n");
		suma2=suma2+suma;
		suma=0;
		scanf(" %lf", &k);
		
	}while(k!=0);
	printf("Utarg: %lf",suma2);
	

}

int main(){

kasa();


return 0;
}

