#include <stdio.h>
 
int main() {
 int n,x,cont1=0,cont2=0;
 scanf("%d",&n);
 while(n--){
     scanf("%d",&x);
     if(x==1){
         cont1++;
     }
     if(x==0){
         cont2++;
     }
 }
 if(cont1>=cont2){
     printf("N\n");
 }
 else if(cont1<cont2){
     printf("Y\n");
 }
    return 0;
}
