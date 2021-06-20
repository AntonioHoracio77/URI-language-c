#include <stdio.h>
 
int main() {
  long int maiorv=0,menorv=100000,a,sum=0,c,result;
    for(c=1;c<=4;c++){
        scanf("%li",&a);
        sum=sum+a;
        if(a>maiorv){maiorv=a;}
        if(a<menorv){menorv=a;}
    }
    sum=sum-menorv-maiorv;
    result=sum-(menorv+maiorv);
    if(result<0){result=result*-1;}
    printf("%li\n",result);

    return 0;
}
