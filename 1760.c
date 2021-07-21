#include <stdio.h>
#include <math.h>

int main() {
   double area ;
   int l;
        while(scanf("%d",&l)!=EOF){
            area = ((l*l)*sqrt(3))/4;
            printf("%.2lf\n",area+area*0.6);
        }
    return 0;
}
