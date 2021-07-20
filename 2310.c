#include <stdio.h>
 
int main() {
int n,a,b,c,x,y,z;
char nome[20];
double sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;

scanf("%d",&n);
while(n--){
    scanf("%s %d %d %d %d %d %d",&nome,&a,&b,&c,&x,&y,&z);
    sum1=sum1+a;
    sum2=sum2+b;
    sum3=sum3+c;
    sum4=sum4+x;
    sum5=sum5+y;
    sum6=sum6+z;
}
printf("Pontos de Saque: %.2lf %%.\n",(sum4/sum1)*100);
printf("Pontos de Bloqueio: %.2lf %%.\n",(sum5/sum2)*100);
printf("Pontos de Ataque: %.2lf %%.\n",(sum6/sum3)*100);

    return 0;
}
