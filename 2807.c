#include<stdio.h>
int main(){
long int n,x,y,sum=0,c,cont=0;
long int fib[40];
scanf("%li",&n);
x=1;
y=1;
for(c=3;c<41;c++){
    fib[1]=1;
    fib[2]=1;
    sum=x+y;
    fib[c]=sum;
    x=y;
    y=sum;
}
for(c=n;c>=1;c--){
	cont++;
	printf("%li",fib[c]);
	if(cont==n){break;}
	printf(" ");
	
}
printf("\n");
return 0;
}
