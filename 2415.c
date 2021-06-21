#include <stdio.h>
 
int main() {
int n,x,cont=0,maiorv=0,y;
scanf("%d",&n);
while(n--){
    scanf("%d",&x);
    if(x!=y){
    	cont=0;
	}
    y=x;
    if(x==y){
        cont++;
    }
    if(cont>maiorv){
        maiorv=cont;
    }
}
printf("%d\n",maiorv);

    return 0;
}
