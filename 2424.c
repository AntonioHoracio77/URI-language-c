#include <stdio.h>
 
int main() {
int n,x;
scanf("%d %d",&n,&x);
if(n>=0 && n<=432 && x>=0 && x<=468){
    printf("dentro\n");
}
else{
    printf("fora\n");
}
    return 0;
}
