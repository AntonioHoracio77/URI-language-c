#include <stdio.h>
 
int main() {
int n,i,j,alt=4,alt2=7;
char op;
double mat[12][12],a,soma=0;
scanf("%c",&op);
for(i=0;i<12;i++){
    for(j=0;j<12;j++){
        scanf("%lf",&a);
        mat[i][j]=a;
        if(i>6 && j>alt && j<alt2){
            soma=soma+mat[i][j];
        }
    }
    if(i>6){
         alt=alt-1;
        alt2=alt2+1;
    }
}
if(op=='S'){
    printf("%.1lf\n",soma);
}
else if(op=='M'){
    printf("%.1lf\n",soma/30);
}
 
    return 0;
}
