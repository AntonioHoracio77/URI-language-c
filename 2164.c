#include <stdio.h>
#include <math.h> 
int main() {
double n,x,y,k,l;
scanf("%lf",&n);
x=(1+sqrt(5))/2;
y=(1-sqrt(5))/2; 
k=pow(x,n);
l=pow(y,n);
printf("%.1lf\n",(k-l)/sqrt(5));
    return 0;
}
