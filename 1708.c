#include <stdio.h>
 
int main() {
 int n,x,c,sum=0,sum1=0,cont=1;
 scanf("%d %d",&n,&x);
 for(c=1;c;c++){
     sum=sum+n;
     sum1=sum1+x;
     cont++;
     if((sum1-sum)>=n){
        printf("%d\n",cont);
        break;
     }
 }
    return 0;
}
