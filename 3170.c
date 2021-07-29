#include <stdio.h>
 
int main() {
 int n,x,k,l;
 scanf("%d %d",&n,&x);
 if(x%2==1){
     x=x-1;
 }
 l=x/2;
 k=l-n;
 if(l-n==0 || l-n<0){
     printf("Amelia tem todas bolinhas!\n");
 }
 else{
     printf("Faltam %d bolinha(s)\n",k);
 }
    return 0;
}
