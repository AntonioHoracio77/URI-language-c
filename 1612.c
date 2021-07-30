#include <stdio.h>
#include <math.h> 
int main() {
 unsigned long int n,x;
 long double k;
 scanf("%lu",&n);
 while(n--){
     scanf("%lu",&x);
     if(x%2==0){
         printf("%lu\n",x/2);
     }
     else if(x%2==1){
     	k=ceil(x*1.0/2.0);
         printf("%.0Lf\n",k);
     }
 }
    return 0;
}
