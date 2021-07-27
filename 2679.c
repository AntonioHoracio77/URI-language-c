#include <stdio.h>
 
int main() {
unsigned long int n;
scanf("%lu",&n);
if(n%2==1){
    printf("%lu\n",n+1);
}
else if(n%2==0){
    printf("%lu\n",n+2);
}

 
    return 0;
}
