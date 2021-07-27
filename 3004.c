#include <stdio.h>

int main() {
   int n,p1,d1,p2,d2;
   	scanf("%d",&n);
   	while(n--){
   		scanf("%d %d %d %d",&p1,&d1,&p2,&d2);
   		if(p1<d2 && d1<p2)
   			printf("S\n");
   		else if(p1<p2 && d1<d2)
   			printf("S\n");
   		else
   			printf("N\n");
	}
    return 0;
}
