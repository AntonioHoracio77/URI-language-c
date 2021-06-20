#include <stdio.h>
#include <math.h> 
int main() {
int n,c,cont=0;
double resultado;
while(1){
    scanf("%d",&n);
        cont++;
    if(n==-1){break;}
    if (n == 0){
        resultado = 4;   
         }
    else if (n == 1){
        resultado = 9;     
           }
    else {
        resultado = (1+pow(2,n))*(1+pow(2,n));
           }
    printf("Teste %d\n",cont);
    printf("%.0lf\n",resultado);
    printf("\n");

}
    return 0;
}
