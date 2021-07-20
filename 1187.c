#include <stdio.h>
 
int main() {
int n,i,j,alt=11;
char op;
double mat[12][12],a,soma=0;
scanf("%c",&op);
for(i=0;i<12;i++){
    for(j=0;j<12;j++){
        scanf("%lf",&a);
        mat[i][j]=a;
        if(i<5 && j>i && j<alt){
            soma=soma+mat[i][j];
        }
    }
        alt=alt-1;
}
if(op=='S'){
    printf("%.1lf\n",soma);
}
else if(op=='M'){
    printf("%.1lf\n",soma/30);
}
 
    return 0;
}
