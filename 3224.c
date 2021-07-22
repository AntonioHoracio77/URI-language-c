#include <stdio.h>
#include <string.h>
int main() {
char n[1002],v[1002];
int a,b;
scanf("%s %s",&n,&v);
a=strlen(n);
b=strlen(v);
if(a>=b){printf("go\n");}
else{printf("no\n");}
 
    return 0;
}
