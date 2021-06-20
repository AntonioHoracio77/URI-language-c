#include <stdio.h>
 
int main() {
int n1,n2,n3,j,x,i,cont=0;
scanf("%d %d %d",&n1,&n2,&n3);
int vet[n1];
for(i=0;i<n1;i++){
    scanf("%d",&x);
    vet[i]=x;
}
for(i=0;i<n1;i++){
    for(j=0;j<n1;j++){
        if(vet[i]!=vet[j] && vet[i]+vet[j]>=n2 && vet[i]+vet[j]<=n3){
            cont++;
        }
    }
}
    printf("%d\n",cont/2);

 
    return 0;
}
