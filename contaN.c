#include <stdio.h>
int count=0;
void contaN(char *str){
    if(*str!='\0'){
        if(*str=='7'){
            count++;
        }
    contaN(++str);
}
    } 

int main(){
    char str[200];
    scanf("%s", str);
    contaN(str);
    printf(" %d ", count);
    
}