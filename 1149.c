#include <stdio.h>
 
int main() {
int a,n,c,sum=0;
scanf("%d %d",&a,&n);
if(n<=0){
    while(1){
        scanf("%d",&n);
        if(n>0){
            n=n;
            break;
        }
    }
}
for(c=0;c<n;c++){
    sum=sum+a+c;
}
printf("%d\n",sum);
    return 0;
}
