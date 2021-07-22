#include <stdio.h>
 
int main() {
int n,x,y,sum=0,cont=0;
while(scanf("%d",&n)){
    if(n==-1){break;}
    while(n--){
        scanf("%d",&x);
        sum=sum+x;
        if(sum%100==0){
           cont++;
        }
    }
 printf("%d\n",cont);
 cont=0;
 sum=0;
    
}
 
    return 0;
}
