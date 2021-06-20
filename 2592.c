#include <stdio.h>
 
int main() {
    long int n,pedras,cont1,cont2,c;
        while(scanf("%li",&n)){
            cont1=0;
            cont2=0;
            if(n==0){break;}
            while(1){
                cont2++;
                for(c=1;c<=n;c++){
                    scanf("%li",&pedras);
                    if(pedras==c){cont1++;}
                }
                if(cont1 == n){break;}
                cont1=0;
            }
            printf("%li\n",cont2);
            
        }
 
    return 0;
}
