#include <stdio.h>
#include <math.h> 
int main() {
long long int raio,altura,comprimento,largura;
double diagonal;
scanf("%lli %lli %lli %lli",&largura,&altura,&comprimento,&raio);
raio=raio+raio;
diagonal=sqrt((largura*largura)+(comprimento*comprimento)+altura*altura);
if(raio>=diagonal){
    printf("S\n");
}
else{printf("N\n");}
    return 0;
}
