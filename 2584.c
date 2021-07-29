#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846
int main() {
    unsigned n;
    long double apotema,tangente,areaP,lado;
        scanf("%u",&n);
        while(n--){
            scanf("%Lf",&lado);
            tangente = tan((36*pi)/180.00);
            apotema = (lado/2)/tangente;
            lado*=5;
            areaP = (lado/2)*apotema;
            printf("%.3Lf\n",areaP);
        }
    return 0;
}
