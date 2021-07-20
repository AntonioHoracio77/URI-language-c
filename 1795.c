#include <stdio.h>

int main() {
long long int n,sum=1,c;
scanf("%lli",&n);
for(c=1;c<=n;c++){
    sum=sum*3;
}
printf("%lli\n",sum);
    return 0;
}
