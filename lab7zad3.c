#include <stdio.h>
void zamiana(){

int kod = fgetc( stdin );
char litera;

if(kod >=65 && kod <=90){
        kod=kod+32;
        litera=kod;
        printf("%c", litera);
}

else if(kod>=97 && kod<=122){
        kod=kod-32;
        litera=kod;
        printf("%c", litera);


}


}




int main(){

zamiana();


return 0;
}

