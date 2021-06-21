#include <stdio.h>
 
int main() {
char n,x,y;
int a,conta,b,c,d,i;
scanf("%d",&d);
while(d--){
    scanf("%d %c %d %c %d",&a,&n,&b,&x,&c);
    if(n=='+'){
        conta=a+b;
    }
    else if(n=='x'){
        conta=a*b;
    }
    else if(n=='-'){
        conta=a-b;
    }
    conta=conta-c;
    if(conta<0){
        conta=conta*-1;
    }
    printf("E");
    for(i=1;i<=conta;i++){
        printf("r");
    }
    printf("ou!\n");
}
    return 0;
}
