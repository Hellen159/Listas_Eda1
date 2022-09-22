#include<stdio.h>

void moveX(char *palavra){
    if(*palavra!='\0'){
        if(*palavra!='x'){
        printf("%c", *palavra);
        moveX(palavra+1);

        }else if (*palavra=='x'){
        //moveXs(str.substr(1, (str.length() - 1))) + str[0];
        moveX(palavra+1);
        printf("%c", *palavra);
        
        }
    }
    
}
int main(){
    char palavra[200];
    scanf("%s", palavra);
    moveX(palavra);
    return 0;
}