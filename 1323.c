#include <stdio.h>
 
int main() {
int n,qlqrcoisa;
while(scanf("%d",&n)){
    if(n==0){break;}
    qlqrcoisa=0;
    while(n){
        qlqrcoisa=qlqrcoisa+(n*n);
        n=n-1;
    }
    printf("%d\n",qlqrcoisa);
    qlqrcoisa=0;
}
    return 0;
}
