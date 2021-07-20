#include <stdio.h>
#include <math.h>
int main() {
long long int n,x,pascal;
scanf("%lli",&n);
while(n--){
    scanf("%lli",&x);
    if(x==1){printf("1\n");}
    else{
        pascal=pow(2,x);
        printf("%lli\n",pascal-1);
    }
}
    return 0;
}
