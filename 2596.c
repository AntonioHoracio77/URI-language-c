#include <stdio.h>
 
int main() {
int n1,esf,c,d,cont=0,cont2=0;
scanf("%d",&n1);
while(n1--){
    scanf("%d",&esf);
    for(c=1;c<=esf;c++){
        for(d=1;d<=esf;d++){
           if(c%d==0){
               cont++;
           } 
        }
        if(cont%2==0){
            cont2++;
        }
        cont=0;
    }
    printf("%d\n",cont2);
    cont2=0;
}
 
    return 0;
}
