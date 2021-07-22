#include <stdio.h>
 
int main() {
int n,x,y,soma;
scanf("%d %d %d",&n,&x,&y);
soma=n+x+y;
if(soma>0 && soma<24){printf("%d\n",soma);}
else if(soma>=24){printf("%d\n",soma-24);}
else if(soma<0){printf("%d\n",24+soma);}
else if(soma==0){printf("0\n");}
    return 0;
}
