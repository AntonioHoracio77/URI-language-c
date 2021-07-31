#include <stdio.h>
 
int main() {
 int n,x,c;
for(c=1;c;c++){
scanf("%d %d",&n,&x);
if(n==0 && x==0){
    break;
}
     printf("%d\n",n+x);
 }
    return 0;
}
