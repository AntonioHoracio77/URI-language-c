#include <stdio.h>
 
int main() {
int n,x,cont=0;
scanf("%d",&n);
while(n--){
    scanf("%d",&x);
    if(x!=1){
        cont++;
    }
}
printf("%d\n",cont);
    return 0;
}
