#include <stdio.h>
 
int main() {
 double n,z,y;
 scanf("%lf",&n);
z=(n*(n-1))/2;
y=(n*(n-1)*(n-2)*(n-3))/(4*3*2*1);
printf("%.0lf\n",1+z+y);
    return 0;
}
