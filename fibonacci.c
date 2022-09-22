#include <stdio.h>

long int v[80];
long int fibonacci(int n){
   if(n==1||n==2){
      return 1;
   }else if(v[n-2]==0) v[n-2]=fibonacci(n-1);
   if(v[n-3==0])v[n-3]=fibonacci(n-2);
   return v[n-2]+v[n-3];
}