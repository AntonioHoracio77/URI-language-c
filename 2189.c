#include <stdio.h>
 
int main() {
int n,x,cont=0,cont2=0,premiado;
while(1){
    cont=0;
    cont2++;
    if(cont2>1){
        printf("\n");
    }
    scanf("%d",&n);
    if(n==0){break;}
    while(n--){
        cont++;
        scanf("%d",&x);
        if(x==cont){premiado=x;}
    }
    printf("Teste %d\n",cont2);
    printf("%d\n",premiado);
}
    return 0;
}
