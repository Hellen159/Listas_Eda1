#include <stdio.h>
#include <stdlib.h>

void trocaXY (char *palavra){

    if(*palavra != '\0'){
        
        if(*palavra == 'x'){
            printf("y");
            //++palavra;
        }else printf("%c" , *palavra);
        trocaXY(++palavra);
        
    }

}

int main(){
    char palavra[80];
    scanf("%s", palavra);
    trocaXY(palavra);
    return 0;
}