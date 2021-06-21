#include <stdio.h>
 
int main() {
long long int gas,raio,quantidade;
double pi=3.1415,balao;
scanf("%lli %lli",&raio,&gas);
balao=(4*pi*raio*raio*raio)/3;
quantidade=gas/balao;
printf("%lli\n",quantidade);
 
    return 0;
}
