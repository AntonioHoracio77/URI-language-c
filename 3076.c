#include <stdio.h>
int main(){
    unsigned long int n;
while(scanf("%lu",&n)!=EOF){
    if(n%100==0){
    printf("%lu\n",n/100);
    }
    if(n%100!=0){
    printf("%lu\n",(n/100)+1);
    }
    
    
    
}
    return 0;
}
