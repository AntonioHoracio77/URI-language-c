#include <stdio.h>
 
int main() {
long long int n,i,d,cont=0,f1=1,f2=1,sum=0;
scanf("%lli",&n);
while(1){
    sum=f1+f2;
    f1=f2;
    f2=sum;
    for(d=f1+1;d<f2;d++){
    	cont++;
    	if(cont==n){
    		printf("%lli\n",d);
    		break;
		}
	}
	if(cont==n){break;}
}


    return 0;
}
