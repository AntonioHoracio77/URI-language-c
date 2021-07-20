#include <stdio.h>
 
int main() {
int n,x,y,sum=0;
scanf("%d",&n);
while(n--){
    scanf("%d %d",&x,&y);
    if(x>y){sum=sum+y;}
}
printf("%d\n",sum);
 
    return 0;
}
