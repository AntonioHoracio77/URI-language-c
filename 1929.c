#include <stdio.h>
 
int main() {
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b+c && b<a+c && c<b+a){printf("S\n");}
else if(a<d+c && d<a+c && c<d+a){printf("S\n");}
else if(a<b+d && b<a+d && d<b+a){printf("S\n");}
else if(d<b+c && b<d+c && c<b+d){printf("S\n");}
else{printf("N\n");}
    return 0;
}
