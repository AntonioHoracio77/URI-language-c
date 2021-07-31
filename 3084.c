#include <stdio.h>
 
int main() {
int n,x,k,l;
while(scanf("%d %d",&n,&x)!=EOF){
    k=n/30;
    l=x/6;
    if(k==0 && l==0){
        printf("00:00\n");
    }
    else if(k<10 && l>=10){
        printf("0%d:%d\n",k,l);
    }
    else if(k>=10 && l>=10){
     printf("%d:%d\n",k,l);
    
}
    else if(k>=10 && l<10){
     printf("%d:0%d\n",k,l);
    
}
   else if(k<10 && l<10){
     printf("0%d:0%d\n",k,l);
    
}
}
 
    return 0;
}
