#include <stdio.h>
 
int main() {
int n,x,y;
scanf("%d",&n);
while(n--){
    scanf("%d %d",&x,&y);
    if(x>=y){
    printf("%d\n",(x/y)+(x%y));
    }
    else{printf("%d\n",x);}
}
    return 0;
}
