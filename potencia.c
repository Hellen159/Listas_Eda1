#include <stdio.h>

float pot(int a, int b){
    if(b==0){
        return 1;
    }else if(b>0){
        return a*pot(a, b-1);
    }else if(b<0){
        return 1/pot(a,b*(-1));
    }
}

int main (){
    int a, b;
    float resul;
    scanf("%d %d", &a, &b);
    if(a==0){
        printf("indefinido \n");
    }else{
        resul=pot(a, b);
        printf(" %f \n ", resul);
    }
    return 0;
}