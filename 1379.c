#include <stdio.h>
 
int main() {
long long int a,b;
while(1){
    scanf("%lli %lli",&a,&b);
    if(a==0 && b==0){break;}
    printf("%lli\n",(a*2)-b);
}
 
    return 0;
}
