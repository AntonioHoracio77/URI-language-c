#include <stdio.h>
 
int main() {
int n,cont=0,summ=0,sumj=0,x,c,y;
scanf("%d",&n);
while(n--){
    for(c=1;c<=6;c++){
        cont++;
        scanf("%d %d",&x,&y);
        if(cont<=3){
        sumj=sumj+(x*y);}
        else if(cont>=4){
            summ=summ+(x*y);
        }
    }
    if(sumj>summ){printf("JOAO\n");}
    else if(summ>sumj){printf("MARIA\n");}
    summ=0;
    sumj=0;
    cont=0;
}
    return 0;
}
