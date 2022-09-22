#include <stdio.h>

void regua (int n){
    int i;
    if(n!=0){
        regua(n-1);
        printf(".");
        for(i=0;i<n;i++) printf("-");
        printf("\n");
        regua(n-1);
    }
}
int main (){
    int n;
    scanf("%d",&n);
        if (n>0){
            regua(n);
        }else
    return 0;
}