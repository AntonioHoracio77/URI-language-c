#include <stdio.h>
 
int main() {
int n,x,resto,principal,c,cont=0;
scanf("%d %d",&n,&x);
resto = n%x;
principal=n/x;
for(c=1;c<=x;c++){
    cont++;
    if(cont<=resto){
        printf("%d\n",principal+(resto/resto));
    }
    else{printf("%d\n",principal);}
}
    return 0;
}
