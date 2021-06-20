#include <stdio.h>
 
int main() {
int n,x,i,j,sum,saca,litro,cafe;
while(scanf("%d %d",&n,&x)!=EOF){
int mat[n][x];
sum=0;
for(i=0;i<n;i++){
    for(j=0;j<x;j++){
        scanf("%d",&cafe);
        sum=sum+cafe;
    }
}
saca=sum/60;
litro=sum%60;
    printf("%d saca(s) e %d litro(s)\n",saca,litro);
}
 
    return 0;
}
