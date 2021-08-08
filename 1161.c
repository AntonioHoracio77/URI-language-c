#include <stdio.h>
 
int main() {
    unsigned long long n,m,result,i,result2;
        while(scanf("%llu %llu",&n,&m)!=EOF){
            result = 1;
            result2 = 1;
            for(i = 1;i<=n;i++)
                result*=i;
            for(i = 1;i<=m;i++)
                result2*=i;
            printf("%llu\n",result+result2);
        }  
    
    return 0;
}
