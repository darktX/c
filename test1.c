#include <stdio.h>

void zamiana(){

int kodASCII = fgetc( stdin );
char litera;

if(kodASCII >=65 && kodASCII <=90){
        kodASCII=kodASCII+32;
        litera=kodASCII;
        printf("%c", litera);
}

if(kodASCII>=97 && kodASCII<=122){
        kodASCII=kodASCII-32;
        litera=kodASCII;
        printf("%c", litera);


}


}




int main(){

zamiana();


return 0;
}

