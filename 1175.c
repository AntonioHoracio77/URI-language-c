#include <stdio.h>
 
int main() {
int n[20],c,d,cont=0;
for(c=0;c<20;c++){
    scanf("%d",&n[c]);
}
for(d=19;d>=0;d--){
    printf("N[%d] = %d\n",cont,n[d]);
    cont++;
}
    return 0;
}
