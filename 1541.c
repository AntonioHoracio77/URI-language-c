#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,areaDesejada;
    double porct,raiz,areaNecessaria;
        while(1){
            scanf("%lf",&a);
            if(a == 0)
                break;
            scanf("%lf",&b);
            scanf("%lf",&c);
            areaDesejada = a*b;
            porct = 100/c;
            areaNecessaria = areaDesejada*porct;
            raiz = sqrt(areaNecessaria);
            printf("%.0lf\n",trunc(raiz));
        }
    return 0;
}
