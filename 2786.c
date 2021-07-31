#include <stdio.h>
 
int main() {
 int n,x,c,l;
 scanf("%d %d",&n,&x);
 c=(n-1)*2+(x-1)*2;
 l=(n*x)+(n-1)*(x-1);
 printf("%d\n",l);
 printf("%d\n",c);
 
    return 0;
}
