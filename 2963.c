#include <stdio.h>
 
int main() {
int n,x,maiorv=0,c;
scanf("%d",&n);
int vet[n];
for(c=0;c<n;c++){
    scanf("%d",&x);
     vet[c]=x;
    if(x>maiorv){
    maiorv=x;
    }
}
if(maiorv==vet[0]){
    printf("S\n");
}
else{
    printf("N\n");
}
    return 0;
}
