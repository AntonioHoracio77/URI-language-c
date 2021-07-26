#include <stdio.h>
 
int main() {
long int a,b,c,d,cont=0,m;
long int mmc,t1,t2,soma;
scanf("%li %li %li %li",&a,&b,&c,&d);
mmc=b*d;
t1=(mmc/b)*a;
t2=(mmc/d)*c;
soma=t1+t2;
while(1){
    cont++;
    for(m=1;m<=100;m++){
        if(soma%m==0 && mmc%m==0){
            soma=soma/m;
            mmc=mmc/m;
        }
    }
    if(cont==20){
        break;
    }
}
printf("%li %li\n",soma,mmc);
    return 0;
}
