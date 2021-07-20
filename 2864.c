#include <stdio.h>
 
int main() {
int n,a,b,c;
double yvert,delta;
scanf("%d",&n);
while(n--){
    scanf("%d %d %d",&a,&b,&c);
    delta=(b*b)-4*a*c;
    yvert=delta/(4.00*a);
    if(yvert<0){
        printf("%.2lf\n",yvert*-1);
    }
    else{
       printf("%.2lf\n",yvert); 
    }
}
 
    return 0;
}
