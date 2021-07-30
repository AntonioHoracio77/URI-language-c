#include <stdio.h>
#include <math.h> 
int main() {
 unsigned long n,i,c;
 while(scanf("%lu",&n)!=EOF){
     if(n==1){
         printf("0\n");
     }
     else{
     for(c=0;c<n;c++){
         i=pow(2,c);
         if(i==n){
             printf("%lu\n",c);
             break;
         }
         
     }
     
     }
 }
    return 0;
}
