#include <stdio.h>
#include <math.h> 
int main() {
long int n,a,b,c;
double area,hip;
while(scanf("%li %li %li %li",&n,&a,&b,&c)!=EOF){
    hip=sqrt(a*a+b*b);
    area=hip*c*n;
    printf("%.4lf\n",area/10000);
    
}
 
    retu
