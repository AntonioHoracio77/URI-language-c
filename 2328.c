#include <stdio.h>
 
int main() {
int n,x,sobras=0;
scanf("%d",&n);
while(n--){
    scanf("%d",&x);
    sobras=sobras+(x-1);
}
printf("%d\n",sobras);
    return 0;
}
