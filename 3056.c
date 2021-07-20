#include <stdio.h>
#include <math.h> 
int main() {
long long int n,npontos,nquad,nquad2;
scanf("%lli",&n);
nquad=pow(2,n);
npontos=(nquad+1)*(nquad+1);
printf("%lli\n",npontos);

 
    return 0;
}
