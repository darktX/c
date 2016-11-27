#include<stdio.h>

int main(){
int a,b,c,d,e,f,i;
int v[100];
int mandat[100];
int tmp,x=0;
int licznik=1;

for(i=0;i<5;i++){
printf("podaj liczbe glosow \n");
scanf(" %d", &v[i]);

}



printf("\n");

for(a=0;a<5;a++){
for(b=0;b<5;b++){
tmp=v[b];
tmp=tmp/licznik;
mandat[b]=tmp;
mandat[x]=tmp;
x++;
printf("%d ", mandat[b]);

}
printf("\n");
licznik++;
}


printf("\n");



return 0;
}
