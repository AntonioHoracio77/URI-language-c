#include <stdio.h>
 
int main() {
long int n,c,d,x,cont=0,m;
scanf("%li",&n);
while(n--){
    scanf("%li",&x);
    m=x+1;
    if(m%7==0 && m%2==1){
        for(c=1;c<=m+2;c++){
            d=(m+2)/c;
            if((m+2)%c==0){
                cont++;
            }
        }
    
    }
      if(cont==2){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
     cont=0;
    
}
    return 0;
}
