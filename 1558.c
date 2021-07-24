#include <stdio.h>
 
int main() {
long long int n,x,c,d,soma_quadrados,cont=0;
while(scanf("%lli",&n)!=EOF){
    for(c=0;c<=100;c++){
        for(d=0;d<=100;d++){
            soma_quadrados=(c*c)+(d*d);
            if(soma_quadrados==n){
         	cont++;
            }
        }
    }
    if(cont>=1){printf("YES\n");
	}
	else{printf("NO\n");
	}
	cont=0;

	
}
 
    return 0;
}
