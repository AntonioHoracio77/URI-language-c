#include <stdio.h>
 
int main() {
int n,x,y,turma[1000],i;
double cont=0.0,sum=0.0;
scanf("%d",&n);
while(n--){
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&y);
        turma[i]=y;
        sum=sum+y;
    }
    for(i=0;i<x;i++){
        if(turma[i]>sum/x){
            cont++;
        }
    }
    printf("%.3lf%%\n",(cont/x)*100);
    sum=0.0;
    cont=0.0;
}
    return 0;
}
