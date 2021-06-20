#include <stdio.h>
#include <math.h>
int main() {
int n,x,c;
double gramas2;
 scanf("%d",&n);
 while(n--){
     scanf("%d",&x);
     gramas2=pow(2,x);
     printf("%.0lf kg\n",trunc(gramas2/12000));

 }
    return 0;
}
