#include <stdio.h>
 
int main() {
char n[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char a;
int cont=0,c;
scanf("%c",&a);
for(c=0;c<28;c++){
    cont++;
    if(n[c]==a){
        printf("%d\n",cont);
        break;
    }
}

    return 0;
}
