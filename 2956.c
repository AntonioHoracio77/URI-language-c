#include <stdio.h>
 
int main() {
long double n,x;
scanf("%Lf %Lf",&n,&x);
printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5Lf.\n",(n*x)/2);
 
    return 0;
}
