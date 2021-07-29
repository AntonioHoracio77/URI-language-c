#include <stdio.h>
 
int main() {
 long int a,b,c,n,x;
 while(scanf("%li %li %li",&a,&b,&c)!=EOF){
     while(c--){
         scanf("%li %li",&n,&x);
         if(n<=a && x<=b || n<=b && x<=a){
             printf("Sim\n");
         }
         else{
             printf("Nao\n");
         }
     }
 }
    return 0;
}
