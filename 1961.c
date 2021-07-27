#include <stdio.h>
 
int main() {
 int n,x,c,a,cont=0;
 scanf("%d %d",&n,&x);
 int tubos[x];
 for(c=0;c<x;c++){
     scanf("%d",&tubos[c]);
 }
for(c=1; c<x; c++)
    {
        if(tubos[c]>tubos[c-1]){
         a= (tubos[c] - tubos[c-1]);
        }
        else{
           a= (tubos[c-1] - tubos[c]);
        }
        if(a<=n){
            cont++;
    }
 }
  if(cont== x-1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
 
    return 0;
}
