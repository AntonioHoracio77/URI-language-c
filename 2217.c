#include <stdio.h>
 
int main() {
long long int n,x;
scanf("%lli",&n);
while(n--){
    scanf("%lli",&x);
    if(x%2==0){
        printf("1\n");
    }
    else{
        printf("9\n");
    }
}
 
    return 0;
}
