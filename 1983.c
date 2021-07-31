#include <stdio.h>
 
int main() {
unsigned long int n,x,ma;
float y,maiorv=0;
scanf("%lu",&n);
while(n--){
    scanf("%lu %f",&x,&y);
    if(y>maiorv){
        maiorv=y;
        ma=x;
    }
    
}
if(maiorv>=8){
    printf("%lu\n",ma);
}
else{
    printf("Minimum note not reached\n");
}

    return 0;
}
