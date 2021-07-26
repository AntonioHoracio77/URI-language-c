#include <stdio.h>
 
int main() {
int t,n,c,pedidos;
while(scanf("%d",&t)){
    if(t==0){
        break;
    }
    for(c=1;c<=t;c++){
        scanf("%d",&n);
        if(n%2==1){
            pedidos=(n-1)*2;
            printf("%d\n",pedidos+1);
        }
        else if(n%2==0){
            pedidos=(n-2)*2;
            printf("%d\n",pedidos+2);
        }
    }
}
    return 0;
}
