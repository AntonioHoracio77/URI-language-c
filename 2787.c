#include <stdio.h>
 
int main() {
int n,x;
scanf("%d %d",&n,&x);
if(n%2==1 && x%2==1){
    printf("1\n");
}
else if(n%2==0 && x%2==1){
    printf("0\n");
}
else if(n%2==0 && x%2==0){
    printf("1\n");
}
else if(n%2==1 && x%2==0){
    printf("0\n");
}
    return 0;
}
