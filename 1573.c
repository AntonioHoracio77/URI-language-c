#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,volume,lateral;
        while(1){
            scanf("%lf %lf %lf",&a,&b,&c);
            if(a == 0 && b == 0 && c == 0)
                break;
            volume = a*b*c;
            lateral = pow(volume,0.3333333);
            printf("%.0lf\n",trunc(lateral));
        }
    return 0;
}
