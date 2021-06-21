#include <stdio.h>
#include <math.h>
int main() {
int n,x,c;
double xi,sum=0,media=0;
while(scanf("%d %d",&n,&x)!=EOF){
n=n*60;
x=n/x;
double vet[x];
for(c=0;c<x;c++){
    scanf("%lf",&xi);
    vet[c]=xi;
    media=media+xi;
    
}
media=media/x;
for(c=0;c<x;c++){
    sum=sum+((vet[c]-media)*(vet[c]-media));
}
printf("%.5lf\n",sqrt(sum/(x-1)));
sum=0;
media=0;
}
    return 0;
}
