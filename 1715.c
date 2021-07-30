#include <stdio.h>
 
int main() {
int n,x,a,c,sum=0,cont=0;
scanf("%d %d",&n,&x);
while(n--){
    for(c=1;c<=x;c++){
        scanf("%d",&a);
        if(a>0){
            cont++;
        }
    }
    if(cont==x){
        sum=sum+1;
    }
    else{
    	sum=sum+0;
	}
    cont=0;
}
printf("%d\n",sum);
    return 0;
}
