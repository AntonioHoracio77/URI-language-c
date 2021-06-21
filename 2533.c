#include <stdio.h>
 
int main() {
int n,n1,n2;
double IRA,soma=0,soma2=0;
while(scanf("%d",&n)!=EOF){
    while(n--){
    scanf("%d %d",&n1,&n2);
    soma=soma+n1*n2;
    soma2=soma2+n2*100;
    }
    IRA=soma/soma2;
    printf("%.4lf\n",IRA);
    soma=0;
    soma2=0;
}

    return 0;
}
