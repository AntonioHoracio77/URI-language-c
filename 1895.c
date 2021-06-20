#include <stdio.h>
 
int main() {
int n,t,l,cartas,pontosA=0,pontosB=0,c,cont=0,gig;
scanf("%d %d %d",&n,&t,&l);
n=n-1;
for(c=1;c<=n;c++){
    cont++;
    scanf("%d",&cartas);
    gig=t-cartas;
    if(cont%2==1){
        if(gig<0){gig=gig*-1;}
        if(gig<=l){
            pontosA=pontosA+gig;
            t=cartas;
        }
    }
    else if(cont%2==0){
      if(gig<0){gig=gig*-1;}
      if(gig<=l){
            pontosB=pontosB+gig;
            t=cartas;
        }  
    }
}

 printf("%d %d\n",pontosA,pontosB);
    return 0;
}
