#include <stdio.h>
 
int main() {
int n,a,c,cont=0;
double x,y;
while(scanf("%d",&n)){
    if(n==0){
        break;
    }
    for(c=1;c<=n;c++){
        cont++;
        scanf("%d %lf %lf",&a,&x,&y);
        printf("Size #%d:\n",cont);
        printf("Ice Cream Used: %.2lf cm2\n",(((x+y)*5.0)/2)*a);
    }
    printf("\n");
    cont=0;
    
}
    return 0;
}
