#include <stdio.h>
 
int main() {
int e,f,c,bebeu,total=0,d;
scanf("%d %d %d",&e,&f,&c);
	e=e+f;
	for(d=1;d<=20;d++){
		bebeu=e/c;
		total=total+bebeu;
        e=bebeu+e%c;
	}
	printf("%d\n",total);
    return 0;
}
