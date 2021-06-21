#include <stdio.h>
int main() {
double n,c,maiorv=0,menorv=11,sum=0;
for(c=0;c<5;c++){
    scanf("%lf",&n);
    sum=sum+n;
    if(n>maiorv){
        maiorv=n;
    }
    if(n<menorv){
        menorv=n;
    }
}
printf("%.1lf\n",(sum-maiorv-menorv));

 
    return 0;
}
